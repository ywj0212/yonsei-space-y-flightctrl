#ifndef __SPACE_Y_LIB_FILT_KALMAN__
#define __SPACE_Y_LIB_FILT_KALMAN__

#include <type_traits>

template <class T, typename std::enable_if<std::is_floating_point<T>::value, int>::type = 0>
class KalmanFilter {
private:
  T Q = 0.01;  // Process noise covariance
  T R = 0.1;   // Measurement noise covariance
  T x = 0;     // Initial state (estimated)
  T P = 1;     // Initial estimate error covariance
public:
  KalmanFilter(T Q, T R, T P) : Q(Q), R(R), P(P) {}
  T filter(T z) {
    // Prediction
    T x_pred = x;
    T P_pred = P + Q;

    // Update
    T K = P_pred / (P_pred + R);
    x = x_pred + K * (z - x_pred);
    P = (1 - K) * P_pred;

    return x;
  }
};

#endif