#ifndef __SPACE_Y_LIB_FILT_DLPF__
#define __SPACE_Y_LIB_FILT_DLPF__

// Discrete Low Pass Filters
// Source: https://github.com/curiores/ArduinoTutorials/blob/main/BasicFilters/ArduinoImplementations/LowPass/LowPass2.0/LowPass2.0.ino
#include <type_traits>

template <class T, int order, typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0> // order is 1 or 2
class DLPF
{
  private:
    T a[order];
    T b[order + 1];
    T omega0;
    T dt;
    bool adapt;
    T tn1 = 0;
    T x[order + 1]; // Raw values
    T y[order + 1]; // Filtered values

  public:  
    DLPF(T f0, T fs, bool adaptive = true){
      // f0: cutoff frequency (Hz)
      // fs: sample frequency (Hz)
      // adaptive: boolean flag, if set to 1, the code will automatically set
      // the sample frequency based on the time history.
      
      omega0 = 6.28318530718 * f0;
      dt = 1.0 / fs;
      adapt = adaptive;
      tn1 = -dt;
      for(int k = 0; k < order + 1; k++){
        x[k] = 0;
        y[k] = 0;        
      }
      setCoef();
    }

    void setCoef(){
      if(adapt){
        float t = micros() / 1.0e6;
        dt = t - tn1;
        tn1 = t;
      }
      
      T alpha = omega0 * dt;
      if(order == 1){
        a[0] = -(alpha - 2.0) / (alpha + 2.0);
        b[0] = alpha / (alpha + 2.0);
        b[1] = alpha / (alpha + 2.0);        
      }
      if(order == 2){
        T alphaSq = alpha * alpha;
        T beta[] = {1, sqrt(2), 1};
        T D = (alphaSq * beta[0]) + (2 * alpha*beta[1]) + (4 * beta[2]);
        b[0] = alphaSq / D;
        b[1] = 2 * b[0];
        b[2] = b[0];
        a[0] = -(2 * alphaSq * beta[0] - 8 * beta[2]) / D;
        a[1] = -(beta[0] * alphaSq - 2 * beta[1] * alpha + 4 * beta[2]) / D;      
      }
    }

    T filt(T xn){
      // Provide me with the current raw value: x
      // I will give you the current filtered value: y
      if(adapt){
        setCoef(); // Update coefficients if necessary      
      }
      y[0] = 0;
      x[0] = xn;
      // Compute the filtered values
      for(int k = 0; k < order; k++){
        y[0] += a[k] * y[k + 1] + b[k] * x[k];
      }
      y[0] += b[order] * x[order];

      // Save the historical values
      for(int k = order; k > 0; k--){
        y[k] = y[k - 1];
        x[k] = x[k - 1];
      }
  
      // Return the filtered value    
      return y[0];
    }
};

// Usage: DLPF<float, 2> dlpf(cutoff, sample_rate, adaptive = true);

#endif