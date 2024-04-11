#ifndef __SPACE_Y_MATHLIB_SWIZZLING__
#define __SPACE_Y_MATHLIB_SWIZZLING__

#define __VEC2_SWIZZLE(T) \
  swizzler<T, 2, __ENCODE_PTR_4(     0,      0, 0b1111, 0b1111)>   xx,   rr,   ss;\
  swizzler<T, 2, __ENCODE_PTR_4(     0,      1, 0b1111, 0b1111)>   xy,   rg,   st;\
  swizzler<T, 2, __ENCODE_PTR_4(     0, 0b1000, 0b1111, 0b1111)>   xi,   ri,   si;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      0, 0b1111, 0b1111)>   yx,   gr,   ts;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      1, 0b1111, 0b1111)>   yy,   gg,   tt;\
  swizzler<T, 2, __ENCODE_PTR_4(     1, 0b1000, 0b1111, 0b1111)>   yi,   gi,   ti;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      0, 0b1111, 0b1111)>   ix,   ir,   is;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      1, 0b1111, 0b1111)>   iy,   ig,   it;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000, 0b1000, 0b1111, 0b1111)>   ii;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      0, 0b1111)>  xxx,  rrr,  sss;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      1, 0b1111)>  xxy,  rrg,  sst;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0, 0b1000, 0b1111)>  xxi,  rri,  ssi;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      0, 0b1111)>  xyx,  rgr,  sts;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      1, 0b1111)>  xyy,  rgg,  stt;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1, 0b1000, 0b1111)>  xyi,  rgi,  sti;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      0, 0b1111)>  xix,  rir,  sis;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      1, 0b1111)>  xiy,  rig,  sit;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000, 0b1000, 0b1111)>  xii,  rii,  sii;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      0, 0b1111)>  yxx,  grr,  tss;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      1, 0b1111)>  yxy,  grg,  tst;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0, 0b1000, 0b1111)>  yxi,  gri,  tsi;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      0, 0b1111)>  yyx,  ggr,  tts;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      1, 0b1111)>  yyy,  ggg,  ttt;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1, 0b1000, 0b1111)>  yyi,  ggi,  tti;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      0, 0b1111)>  yix,  gir,  tis;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      1, 0b1111)>  yiy,  gig,  tit;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000, 0b1000, 0b1111)>  yii,  gii,  tii;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      0, 0b1111)>  ixx,  irr,  iss;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      1, 0b1111)>  ixy,  irg,  ist;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0, 0b1000, 0b1111)>  ixi,  iri,  isi;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      0, 0b1111)>  iyx,  igr,  its;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      1, 0b1111)>  iyy,  igg,  itt;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1, 0b1000, 0b1111)>  iyi,  igi,  iti;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      0, 0b1111)>  iix,  iir,  iis;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      1, 0b1111)>  iiy,  iig,  iit;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000, 0b1111)>  iii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      0)> xxxx, rrrr, ssss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      1)> xxxy, rrrg, ssst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0, 0b1000)> xxxi, rrri, sssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      0)> xxyx, rrgr, ssts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      1)> xxyy, rrgg, sstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1, 0b1000)> xxyi, rrgi, ssti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      0)> xxix, rrir, ssis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      1)> xxiy, rrig, ssit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000, 0b1000)> xxii, rrii, ssii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      0)> xyxx, rgrr, stss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      1)> xyxy, rgrg, stst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0, 0b1000)> xyxi, rgri, stsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      0)> xyyx, rggr, stts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      1)> xyyy, rggg, sttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1, 0b1000)> xyyi, rggi, stti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      0)> xyix, rgir, stis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      1)> xyiy, rgig, stit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000, 0b1000)> xyii, rgii, stii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      0)> xixx, rirr, siss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      1)> xixy, rirg, sist;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0, 0b1000)> xixi, riri, sisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      0)> xiyx, rigr, sits;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      1)> xiyy, rigg, sitt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1, 0b1000)> xiyi, rigi, siti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      0)> xiix, riir, siis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      1)> xiiy, riig, siit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000, 0b1000)> xiii, riii, siii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      0)> yxxx, grrr, tsss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      1)> yxxy, grrg, tsst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0, 0b1000)> yxxi, grri, tssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      0)> yxyx, grgr, tsts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      1)> yxyy, grgg, tstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1, 0b1000)> yxyi, grgi, tsti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      0)> yxix, grir, tsis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      1)> yxiy, grig, tsit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000, 0b1000)> yxii, grii, tsii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      0)> yyxx, ggrr, ttss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      1)> yyxy, ggrg, ttst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0, 0b1000)> yyxi, ggri, ttsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      0)> yyyx, gggr, ttts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      1)> yyyy, gggg, tttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1, 0b1000)> yyyi, gggi, ttti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      0)> yyix, ggir, ttis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      1)> yyiy, ggig, ttit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000, 0b1000)> yyii, ggii, ttii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      0)> yixx, girr, tiss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      1)> yixy, girg, tist;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0, 0b1000)> yixi, giri, tisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      0)> yiyx, gigr, tits;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      1)> yiyy, gigg, titt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1, 0b1000)> yiyi, gigi, titi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      0)> yiix, giir, tiis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      1)> yiiy, giig, tiit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000, 0b1000)> yiii, giii, tiii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      0)> ixxx, irrr, isss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      1)> ixxy, irrg, isst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0, 0b1000)> ixxi, irri, issi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      0)> ixyx, irgr, ists;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      1)> ixyy, irgg, istt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1, 0b1000)> ixyi, irgi, isti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      0)> ixix, irir, isis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      1)> ixiy, irig, isit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000, 0b1000)> ixii, irii, isii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      0)> iyxx, igrr, itss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      1)> iyxy, igrg, itst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0, 0b1000)> iyxi, igri, itsi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      0)> iyyx, iggr, itts;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      1)> iyyy, iggg, ittt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1, 0b1000)> iyyi, iggi, itti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      0)> iyix, igir, itis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      1)> iyiy, igig, itit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000, 0b1000)> iyii, igii, itii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      0)> iixx, iirr, iiss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      1)> iixy, iirg, iist;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0, 0b1000)> iixi, iiri, iisi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      0)> iiyx, iigr, iits;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      1)> iiyy, iigg, iitt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1, 0b1000)> iiyi, iigi, iiti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      0)> iiix, iiir, iiis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      1)> iiiy, iiig, iiit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000, 0b1000)> iiii;\



#define __VEC3_SWIZZLE(T) \
  swizzler<T, 2, __ENCODE_PTR_4(     0,      0, 0b1111, 0b1111)>   xx,   rr,   ss;\
  swizzler<T, 2, __ENCODE_PTR_4(     0,      1, 0b1111, 0b1111)>   xy,   rg,   st;\
  swizzler<T, 2, __ENCODE_PTR_4(     0,      2, 0b1111, 0b1111)>   xz,   rb,   sp;\
  swizzler<T, 2, __ENCODE_PTR_4(     0, 0b1000, 0b1111, 0b1111)>   xi,   ri,   si;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      0, 0b1111, 0b1111)>   yx,   gr,   ts;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      1, 0b1111, 0b1111)>   yy,   gg,   tt;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      2, 0b1111, 0b1111)>   yz,   gb,   tp;\
  swizzler<T, 2, __ENCODE_PTR_4(     1, 0b1000, 0b1111, 0b1111)>   yi,   gi,   ti;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      0, 0b1111, 0b1111)>   zx,   br,   ps;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      1, 0b1111, 0b1111)>   zy,   bg,   pt;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      2, 0b1111, 0b1111)>   zz,   bb,   pp;\
  swizzler<T, 2, __ENCODE_PTR_4(     2, 0b1000, 0b1111, 0b1111)>   zi,   bi,   pi;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      0, 0b1111, 0b1111)>   ix,   ir,   is;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      1, 0b1111, 0b1111)>   iy,   ig,   it;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      2, 0b1111, 0b1111)>   iz,   ib,   ip;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000, 0b1000, 0b1111, 0b1111)>   ii;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      0, 0b1111)>  xxx,  rrr,  sss;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      1, 0b1111)>  xxy,  rrg,  sst;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      2, 0b1111)>  xxz,  rrb,  ssp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0, 0b1000, 0b1111)>  xxi,  rri,  ssi;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      0, 0b1111)>  xyx,  rgr,  sts;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      1, 0b1111)>  xyy,  rgg,  stt;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      2, 0b1111)>  xyz,  rgb,  stp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1, 0b1000, 0b1111)>  xyi,  rgi,  sti;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      0, 0b1111)>  xzx,  rbr,  sps;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      1, 0b1111)>  xzy,  rbg,  spt;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      2, 0b1111)>  xzz,  rbb,  spp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2, 0b1000, 0b1111)>  xzi,  rbi,  spi;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      0, 0b1111)>  xix,  rir,  sis;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      1, 0b1111)>  xiy,  rig,  sit;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      2, 0b1111)>  xiz,  rib,  sip;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000, 0b1000, 0b1111)>  xii,  rii,  sii;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      0, 0b1111)>  yxx,  grr,  tss;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      1, 0b1111)>  yxy,  grg,  tst;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      2, 0b1111)>  yxz,  grb,  tsp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0, 0b1000, 0b1111)>  yxi,  gri,  tsi;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      0, 0b1111)>  yyx,  ggr,  tts;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      1, 0b1111)>  yyy,  ggg,  ttt;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      2, 0b1111)>  yyz,  ggb,  ttp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1, 0b1000, 0b1111)>  yyi,  ggi,  tti;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      0, 0b1111)>  yzx,  gbr,  tps;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      1, 0b1111)>  yzy,  gbg,  tpt;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      2, 0b1111)>  yzz,  gbb,  tpp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2, 0b1000, 0b1111)>  yzi,  gbi,  tpi;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      0, 0b1111)>  yix,  gir,  tis;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      1, 0b1111)>  yiy,  gig,  tit;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      2, 0b1111)>  yiz,  gib,  tip;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000, 0b1000, 0b1111)>  yii,  gii,  tii;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      0, 0b1111)>  zxx,  brr,  pss;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      1, 0b1111)>  zxy,  brg,  pst;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      2, 0b1111)>  zxz,  brb,  psp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0, 0b1000, 0b1111)>  zxi,  bri,  psi;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      0, 0b1111)>  zyx,  bgr,  pts;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      1, 0b1111)>  zyy,  bgg,  ptt;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      2, 0b1111)>  zyz,  bgb,  ptp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1, 0b1000, 0b1111)>  zyi,  bgi,  pti;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      0, 0b1111)>  zzx,  bbr,  pps;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      1, 0b1111)>  zzy,  bbg,  ppt;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      2, 0b1111)>  zzz,  bbb,  ppp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2, 0b1000, 0b1111)>  zzi,  bbi,  ppi;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      0, 0b1111)>  zix,  bir,  pis;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      1, 0b1111)>  ziy,  big,  pit;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      2, 0b1111)>  ziz,  bib,  pip;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000, 0b1000, 0b1111)>  zii,  bii,  pii;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      0, 0b1111)>  ixx,  irr,  iss;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      1, 0b1111)>  ixy,  irg,  ist;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      2, 0b1111)>  ixz,  irb,  isp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0, 0b1000, 0b1111)>  ixi,  iri,  isi;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      0, 0b1111)>  iyx,  igr,  its;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      1, 0b1111)>  iyy,  igg,  itt;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      2, 0b1111)>  iyz,  igb,  itp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1, 0b1000, 0b1111)>  iyi,  igi,  iti;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      0, 0b1111)>  izx,  ibr,  ips;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      1, 0b1111)>  izy,  ibg,  ipt;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      2, 0b1111)>  izz,  ibb,  ipp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2, 0b1000, 0b1111)>  izi,  ibi,  ipi;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      0, 0b1111)>  iix,  iir,  iis;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      1, 0b1111)>  iiy,  iig,  iit;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      2, 0b1111)>  iiz,  iib,  iip;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000, 0b1111)>  iii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      0)> xxxx, rrrr, ssss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      1)> xxxy, rrrg, ssst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      2)> xxxz, rrrb, sssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0, 0b1000)> xxxi, rrri, sssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      0)> xxyx, rrgr, ssts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      1)> xxyy, rrgg, sstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      2)> xxyz, rrgb, sstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1, 0b1000)> xxyi, rrgi, ssti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      0)> xxzx, rrbr, ssps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      1)> xxzy, rrbg, sspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      2)> xxzz, rrbb, sspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2, 0b1000)> xxzi, rrbi, sspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      0)> xxix, rrir, ssis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      1)> xxiy, rrig, ssit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      2)> xxiz, rrib, ssip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000, 0b1000)> xxii, rrii, ssii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      0)> xyxx, rgrr, stss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      1)> xyxy, rgrg, stst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      2)> xyxz, rgrb, stsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0, 0b1000)> xyxi, rgri, stsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      0)> xyyx, rggr, stts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      1)> xyyy, rggg, sttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      2)> xyyz, rggb, sttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1, 0b1000)> xyyi, rggi, stti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      0)> xyzx, rgbr, stps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      1)> xyzy, rgbg, stpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      2)> xyzz, rgbb, stpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2, 0b1000)> xyzi, rgbi, stpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      0)> xyix, rgir, stis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      1)> xyiy, rgig, stit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      2)> xyiz, rgib, stip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000, 0b1000)> xyii, rgii, stii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      0)> xzxx, rbrr, spss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      1)> xzxy, rbrg, spst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      2)> xzxz, rbrb, spsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0, 0b1000)> xzxi, rbri, spsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      0)> xzyx, rbgr, spts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      1)> xzyy, rbgg, sptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      2)> xzyz, rbgb, sptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1, 0b1000)> xzyi, rbgi, spti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      0)> xzzx, rbbr, spps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      1)> xzzy, rbbg, sppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      2)> xzzz, rbbb, sppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2, 0b1000)> xzzi, rbbi, sppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      0)> xzix, rbir, spis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      1)> xziy, rbig, spit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      2)> xziz, rbib, spip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000, 0b1000)> xzii, rbii, spii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      0)> xixx, rirr, siss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      1)> xixy, rirg, sist;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      2)> xixz, rirb, sisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0, 0b1000)> xixi, riri, sisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      0)> xiyx, rigr, sits;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      1)> xiyy, rigg, sitt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      2)> xiyz, rigb, sitp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1, 0b1000)> xiyi, rigi, siti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      0)> xizx, ribr, sips;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      1)> xizy, ribg, sipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      2)> xizz, ribb, sipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2, 0b1000)> xizi, ribi, sipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      0)> xiix, riir, siis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      1)> xiiy, riig, siit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      2)> xiiz, riib, siip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000, 0b1000)> xiii, riii, siii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      0)> yxxx, grrr, tsss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      1)> yxxy, grrg, tsst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      2)> yxxz, grrb, tssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0, 0b1000)> yxxi, grri, tssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      0)> yxyx, grgr, tsts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      1)> yxyy, grgg, tstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      2)> yxyz, grgb, tstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1, 0b1000)> yxyi, grgi, tsti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      0)> yxzx, grbr, tsps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      1)> yxzy, grbg, tspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      2)> yxzz, grbb, tspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2, 0b1000)> yxzi, grbi, tspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      0)> yxix, grir, tsis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      1)> yxiy, grig, tsit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      2)> yxiz, grib, tsip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000, 0b1000)> yxii, grii, tsii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      0)> yyxx, ggrr, ttss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      1)> yyxy, ggrg, ttst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      2)> yyxz, ggrb, ttsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0, 0b1000)> yyxi, ggri, ttsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      0)> yyyx, gggr, ttts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      1)> yyyy, gggg, tttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      2)> yyyz, gggb, tttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1, 0b1000)> yyyi, gggi, ttti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      0)> yyzx, ggbr, ttps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      1)> yyzy, ggbg, ttpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      2)> yyzz, ggbb, ttpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2, 0b1000)> yyzi, ggbi, ttpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      0)> yyix, ggir, ttis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      1)> yyiy, ggig, ttit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      2)> yyiz, ggib, ttip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000, 0b1000)> yyii, ggii, ttii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      0)> yzxx, gbrr, tpss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      1)> yzxy, gbrg, tpst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      2)> yzxz, gbrb, tpsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0, 0b1000)> yzxi, gbri, tpsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      0)> yzyx, gbgr, tpts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      1)> yzyy, gbgg, tptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      2)> yzyz, gbgb, tptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1, 0b1000)> yzyi, gbgi, tpti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      0)> yzzx, gbbr, tpps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      1)> yzzy, gbbg, tppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      2)> yzzz, gbbb, tppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2, 0b1000)> yzzi, gbbi, tppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      0)> yzix, gbir, tpis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      1)> yziy, gbig, tpit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      2)> yziz, gbib, tpip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000, 0b1000)> yzii, gbii, tpii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      0)> yixx, girr, tiss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      1)> yixy, girg, tist;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      2)> yixz, girb, tisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0, 0b1000)> yixi, giri, tisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      0)> yiyx, gigr, tits;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      1)> yiyy, gigg, titt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      2)> yiyz, gigb, titp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1, 0b1000)> yiyi, gigi, titi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      0)> yizx, gibr, tips;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      1)> yizy, gibg, tipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      2)> yizz, gibb, tipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2, 0b1000)> yizi, gibi, tipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      0)> yiix, giir, tiis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      1)> yiiy, giig, tiit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      2)> yiiz, giib, tiip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000, 0b1000)> yiii, giii, tiii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      0)> zxxx, brrr, psss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      1)> zxxy, brrg, psst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      2)> zxxz, brrb, pssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0, 0b1000)> zxxi, brri, pssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      0)> zxyx, brgr, psts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      1)> zxyy, brgg, pstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      2)> zxyz, brgb, pstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1, 0b1000)> zxyi, brgi, psti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      0)> zxzx, brbr, psps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      1)> zxzy, brbg, pspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      2)> zxzz, brbb, pspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2, 0b1000)> zxzi, brbi, pspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      0)> zxix, brir, psis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      1)> zxiy, brig, psit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      2)> zxiz, brib, psip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000, 0b1000)> zxii, brii, psii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      0)> zyxx, bgrr, ptss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      1)> zyxy, bgrg, ptst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      2)> zyxz, bgrb, ptsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0, 0b1000)> zyxi, bgri, ptsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      0)> zyyx, bggr, ptts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      1)> zyyy, bggg, pttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      2)> zyyz, bggb, pttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1, 0b1000)> zyyi, bggi, ptti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      0)> zyzx, bgbr, ptps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      1)> zyzy, bgbg, ptpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      2)> zyzz, bgbb, ptpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2, 0b1000)> zyzi, bgbi, ptpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      0)> zyix, bgir, ptis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      1)> zyiy, bgig, ptit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      2)> zyiz, bgib, ptip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000, 0b1000)> zyii, bgii, ptii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      0)> zzxx, bbrr, ppss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      1)> zzxy, bbrg, ppst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      2)> zzxz, bbrb, ppsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0, 0b1000)> zzxi, bbri, ppsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      0)> zzyx, bbgr, ppts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      1)> zzyy, bbgg, pptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      2)> zzyz, bbgb, pptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1, 0b1000)> zzyi, bbgi, ppti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      0)> zzzx, bbbr, ppps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      1)> zzzy, bbbg, pppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      2)> zzzz, bbbb, pppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2, 0b1000)> zzzi, bbbi, pppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      0)> zzix, bbir, ppis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      1)> zziy, bbig, ppit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      2)> zziz, bbib, ppip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000, 0b1000)> zzii, bbii, ppii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      0)> zixx, birr, piss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      1)> zixy, birg, pist;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      2)> zixz, birb, pisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0, 0b1000)> zixi, biri, pisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      0)> ziyx, bigr, pits;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      1)> ziyy, bigg, pitt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      2)> ziyz, bigb, pitp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1, 0b1000)> ziyi, bigi, piti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      0)> zizx, bibr, pips;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      1)> zizy, bibg, pipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      2)> zizz, bibb, pipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2, 0b1000)> zizi, bibi, pipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      0)> ziix, biir, piis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      1)> ziiy, biig, piit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      2)> ziiz, biib, piip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000, 0b1000)> ziii, biii, piii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      0)> ixxx, irrr, isss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      1)> ixxy, irrg, isst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      2)> ixxz, irrb, issp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0, 0b1000)> ixxi, irri, issi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      0)> ixyx, irgr, ists;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      1)> ixyy, irgg, istt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      2)> ixyz, irgb, istp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1, 0b1000)> ixyi, irgi, isti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      0)> ixzx, irbr, isps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      1)> ixzy, irbg, ispt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      2)> ixzz, irbb, ispp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2, 0b1000)> ixzi, irbi, ispi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      0)> ixix, irir, isis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      1)> ixiy, irig, isit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      2)> ixiz, irib, isip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000, 0b1000)> ixii, irii, isii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      0)> iyxx, igrr, itss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      1)> iyxy, igrg, itst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      2)> iyxz, igrb, itsp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0, 0b1000)> iyxi, igri, itsi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      0)> iyyx, iggr, itts;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      1)> iyyy, iggg, ittt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      2)> iyyz, iggb, ittp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1, 0b1000)> iyyi, iggi, itti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      0)> iyzx, igbr, itps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      1)> iyzy, igbg, itpt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      2)> iyzz, igbb, itpp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2, 0b1000)> iyzi, igbi, itpi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      0)> iyix, igir, itis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      1)> iyiy, igig, itit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      2)> iyiz, igib, itip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000, 0b1000)> iyii, igii, itii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      0)> izxx, ibrr, ipss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      1)> izxy, ibrg, ipst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      2)> izxz, ibrb, ipsp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0, 0b1000)> izxi, ibri, ipsi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      0)> izyx, ibgr, ipts;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      1)> izyy, ibgg, iptt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      2)> izyz, ibgb, iptp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1, 0b1000)> izyi, ibgi, ipti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      0)> izzx, ibbr, ipps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      1)> izzy, ibbg, ippt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      2)> izzz, ibbb, ippp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2, 0b1000)> izzi, ibbi, ippi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      0)> izix, ibir, ipis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      1)> iziy, ibig, ipit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      2)> iziz, ibib, ipip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000, 0b1000)> izii, ibii, ipii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      0)> iixx, iirr, iiss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      1)> iixy, iirg, iist;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      2)> iixz, iirb, iisp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0, 0b1000)> iixi, iiri, iisi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      0)> iiyx, iigr, iits;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      1)> iiyy, iigg, iitt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      2)> iiyz, iigb, iitp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1, 0b1000)> iiyi, iigi, iiti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      0)> iizx, iibr, iips;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      1)> iizy, iibg, iipt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      2)> iizz, iibb, iipp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2, 0b1000)> iizi, iibi, iipi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      0)> iiix, iiir, iiis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      1)> iiiy, iiig, iiit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      2)> iiiz, iiib, iiip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000, 0b1000)> iiii;\



#define __VEC4_SWIZZLE(T) \
  swizzler<T, 2, __ENCODE_PTR_4(     0,      0, 0b1111, 0b1111)>   xx,   rr,   ss;\
  swizzler<T, 2, __ENCODE_PTR_4(     0,      1, 0b1111, 0b1111)>   xy,   rg,   st;\
  swizzler<T, 2, __ENCODE_PTR_4(     0,      2, 0b1111, 0b1111)>   xz,   rb,   sp;\
  swizzler<T, 2, __ENCODE_PTR_4(     0,      3, 0b1111, 0b1111)>   xw,   ra,   sq;\
  swizzler<T, 2, __ENCODE_PTR_4(     0, 0b1000, 0b1111, 0b1111)>   xi,   ri,   si;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      0, 0b1111, 0b1111)>   yx,   gr,   ts;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      1, 0b1111, 0b1111)>   yy,   gg,   tt;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      2, 0b1111, 0b1111)>   yz,   gb,   tp;\
  swizzler<T, 2, __ENCODE_PTR_4(     1,      3, 0b1111, 0b1111)>   yw,   ga,   tq;\
  swizzler<T, 2, __ENCODE_PTR_4(     1, 0b1000, 0b1111, 0b1111)>   yi,   gi,   ti;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      0, 0b1111, 0b1111)>   zx,   br,   ps;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      1, 0b1111, 0b1111)>   zy,   bg,   pt;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      2, 0b1111, 0b1111)>   zz,   bb,   pp;\
  swizzler<T, 2, __ENCODE_PTR_4(     2,      3, 0b1111, 0b1111)>   zw,   ba,   pq;\
  swizzler<T, 2, __ENCODE_PTR_4(     2, 0b1000, 0b1111, 0b1111)>   zi,   bi,   pi;\
  swizzler<T, 2, __ENCODE_PTR_4(     3,      0, 0b1111, 0b1111)>   wx,   ar,   qs;\
  swizzler<T, 2, __ENCODE_PTR_4(     3,      1, 0b1111, 0b1111)>   wy,   ag,   qt;\
  swizzler<T, 2, __ENCODE_PTR_4(     3,      2, 0b1111, 0b1111)>   wz,   ab,   qp;\
  swizzler<T, 2, __ENCODE_PTR_4(     3,      3, 0b1111, 0b1111)>   ww,   aa,   qq;\
  swizzler<T, 2, __ENCODE_PTR_4(     3, 0b1000, 0b1111, 0b1111)>   wi,   ai,   qi;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      0, 0b1111, 0b1111)>   ix,   ir,   is;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      1, 0b1111, 0b1111)>   iy,   ig,   it;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      2, 0b1111, 0b1111)>   iz,   ib,   ip;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000,      3, 0b1111, 0b1111)>   iw,   ia,   iq;\
  swizzler<T, 2, __ENCODE_PTR_4(0b1000, 0b1000, 0b1111, 0b1111)>   ii;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      0, 0b1111)>  xxx,  rrr,  sss;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      1, 0b1111)>  xxy,  rrg,  sst;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      2, 0b1111)>  xxz,  rrb,  ssp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0,      3, 0b1111)>  xxw,  rra,  ssq;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      0, 0b1000, 0b1111)>  xxi,  rri,  ssi;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      0, 0b1111)>  xyx,  rgr,  sts;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      1, 0b1111)>  xyy,  rgg,  stt;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      2, 0b1111)>  xyz,  rgb,  stp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1,      3, 0b1111)>  xyw,  rga,  stq;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      1, 0b1000, 0b1111)>  xyi,  rgi,  sti;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      0, 0b1111)>  xzx,  rbr,  sps;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      1, 0b1111)>  xzy,  rbg,  spt;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      2, 0b1111)>  xzz,  rbb,  spp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2,      3, 0b1111)>  xzw,  rba,  spq;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      2, 0b1000, 0b1111)>  xzi,  rbi,  spi;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      3,      0, 0b1111)>  xwx,  rar,  sqs;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      3,      1, 0b1111)>  xwy,  rag,  sqt;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      3,      2, 0b1111)>  xwz,  rab,  sqp;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      3,      3, 0b1111)>  xww,  raa,  sqq;\
  swizzler<T, 3, __ENCODE_PTR_4(     0,      3, 0b1000, 0b1111)>  xwi,  rai,  sqi;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      0, 0b1111)>  xix,  rir,  sis;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      1, 0b1111)>  xiy,  rig,  sit;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      2, 0b1111)>  xiz,  rib,  sip;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000,      3, 0b1111)>  xiw,  ria,  siq;\
  swizzler<T, 3, __ENCODE_PTR_4(     0, 0b1000, 0b1000, 0b1111)>  xii,  rii,  sii;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      0, 0b1111)>  yxx,  grr,  tss;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      1, 0b1111)>  yxy,  grg,  tst;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      2, 0b1111)>  yxz,  grb,  tsp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0,      3, 0b1111)>  yxw,  gra,  tsq;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      0, 0b1000, 0b1111)>  yxi,  gri,  tsi;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      0, 0b1111)>  yyx,  ggr,  tts;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      1, 0b1111)>  yyy,  ggg,  ttt;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      2, 0b1111)>  yyz,  ggb,  ttp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1,      3, 0b1111)>  yyw,  gga,  ttq;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      1, 0b1000, 0b1111)>  yyi,  ggi,  tti;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      0, 0b1111)>  yzx,  gbr,  tps;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      1, 0b1111)>  yzy,  gbg,  tpt;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      2, 0b1111)>  yzz,  gbb,  tpp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2,      3, 0b1111)>  yzw,  gba,  tpq;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      2, 0b1000, 0b1111)>  yzi,  gbi,  tpi;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      3,      0, 0b1111)>  ywx,  gar,  tqs;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      3,      1, 0b1111)>  ywy,  gag,  tqt;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      3,      2, 0b1111)>  ywz,  gab,  tqp;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      3,      3, 0b1111)>  yww,  gaa,  tqq;\
  swizzler<T, 3, __ENCODE_PTR_4(     1,      3, 0b1000, 0b1111)>  ywi,  gai,  tqi;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      0, 0b1111)>  yix,  gir,  tis;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      1, 0b1111)>  yiy,  gig,  tit;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      2, 0b1111)>  yiz,  gib,  tip;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000,      3, 0b1111)>  yiw,  gia,  tiq;\
  swizzler<T, 3, __ENCODE_PTR_4(     1, 0b1000, 0b1000, 0b1111)>  yii,  gii,  tii;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      0, 0b1111)>  zxx,  brr,  pss;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      1, 0b1111)>  zxy,  brg,  pst;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      2, 0b1111)>  zxz,  brb,  psp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0,      3, 0b1111)>  zxw,  bra,  psq;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      0, 0b1000, 0b1111)>  zxi,  bri,  psi;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      0, 0b1111)>  zyx,  bgr,  pts;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      1, 0b1111)>  zyy,  bgg,  ptt;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      2, 0b1111)>  zyz,  bgb,  ptp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1,      3, 0b1111)>  zyw,  bga,  ptq;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      1, 0b1000, 0b1111)>  zyi,  bgi,  pti;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      0, 0b1111)>  zzx,  bbr,  pps;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      1, 0b1111)>  zzy,  bbg,  ppt;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      2, 0b1111)>  zzz,  bbb,  ppp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2,      3, 0b1111)>  zzw,  bba,  ppq;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      2, 0b1000, 0b1111)>  zzi,  bbi,  ppi;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      3,      0, 0b1111)>  zwx,  bar,  pqs;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      3,      1, 0b1111)>  zwy,  bag,  pqt;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      3,      2, 0b1111)>  zwz,  bab,  pqp;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      3,      3, 0b1111)>  zww,  baa,  pqq;\
  swizzler<T, 3, __ENCODE_PTR_4(     2,      3, 0b1000, 0b1111)>  zwi,  bai,  pqi;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      0, 0b1111)>  zix,  bir,  pis;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      1, 0b1111)>  ziy,  big,  pit;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      2, 0b1111)>  ziz,  bib,  pip;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000,      3, 0b1111)>  ziw,  bia,  piq;\
  swizzler<T, 3, __ENCODE_PTR_4(     2, 0b1000, 0b1000, 0b1111)>  zii,  bii,  pii;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      0,      0, 0b1111)>  wxx,  arr,  qss;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      0,      1, 0b1111)>  wxy,  arg,  qst;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      0,      2, 0b1111)>  wxz,  arb,  qsp;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      0,      3, 0b1111)>  wxw,  ara,  qsq;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      0, 0b1000, 0b1111)>  wxi,  ari,  qsi;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      1,      0, 0b1111)>  wyx,  agr,  qts;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      1,      1, 0b1111)>  wyy,  agg,  qtt;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      1,      2, 0b1111)>  wyz,  agb,  qtp;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      1,      3, 0b1111)>  wyw,  aga,  qtq;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      1, 0b1000, 0b1111)>  wyi,  agi,  qti;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      2,      0, 0b1111)>  wzx,  abr,  qps;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      2,      1, 0b1111)>  wzy,  abg,  qpt;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      2,      2, 0b1111)>  wzz,  abb,  qpp;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      2,      3, 0b1111)>  wzw,  aba,  qpq;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      2, 0b1000, 0b1111)>  wzi,  abi,  qpi;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      3,      0, 0b1111)>  wwx,  aar,  qqs;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      3,      1, 0b1111)>  wwy,  aag,  qqt;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      3,      2, 0b1111)>  wwz,  aab,  qqp;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      3,      3, 0b1111)>  www,  aaa,  qqq;\
  swizzler<T, 3, __ENCODE_PTR_4(     3,      3, 0b1000, 0b1111)>  wwi,  aai,  qqi;\
  swizzler<T, 3, __ENCODE_PTR_4(     3, 0b1000,      0, 0b1111)>  wix,  air,  qis;\
  swizzler<T, 3, __ENCODE_PTR_4(     3, 0b1000,      1, 0b1111)>  wiy,  aig,  qit;\
  swizzler<T, 3, __ENCODE_PTR_4(     3, 0b1000,      2, 0b1111)>  wiz,  aib,  qip;\
  swizzler<T, 3, __ENCODE_PTR_4(     3, 0b1000,      3, 0b1111)>  wiw,  aia,  qiq;\
  swizzler<T, 3, __ENCODE_PTR_4(     3, 0b1000, 0b1000, 0b1111)>  wii,  aii,  qii;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      0, 0b1111)>  ixx,  irr,  iss;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      1, 0b1111)>  ixy,  irg,  ist;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      2, 0b1111)>  ixz,  irb,  isp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0,      3, 0b1111)>  ixw,  ira,  isq;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      0, 0b1000, 0b1111)>  ixi,  iri,  isi;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      0, 0b1111)>  iyx,  igr,  its;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      1, 0b1111)>  iyy,  igg,  itt;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      2, 0b1111)>  iyz,  igb,  itp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1,      3, 0b1111)>  iyw,  iga,  itq;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      1, 0b1000, 0b1111)>  iyi,  igi,  iti;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      0, 0b1111)>  izx,  ibr,  ips;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      1, 0b1111)>  izy,  ibg,  ipt;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      2, 0b1111)>  izz,  ibb,  ipp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2,      3, 0b1111)>  izw,  iba,  ipq;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      2, 0b1000, 0b1111)>  izi,  ibi,  ipi;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      3,      0, 0b1111)>  iwx,  iar,  iqs;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      3,      1, 0b1111)>  iwy,  iag,  iqt;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      3,      2, 0b1111)>  iwz,  iab,  iqp;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      3,      3, 0b1111)>  iww,  iaa,  iqq;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000,      3, 0b1000, 0b1111)>  iwi,  iai,  iqi;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      0, 0b1111)>  iix,  iir,  iis;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      1, 0b1111)>  iiy,  iig,  iit;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      2, 0b1111)>  iiz,  iib,  iip;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000,      3, 0b1111)>  iiw,  iia,  iiq;\
  swizzler<T, 3, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000, 0b1111)>  iii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      0)> xxxx, rrrr, ssss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      1)> xxxy, rrrg, ssst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      2)> xxxz, rrrb, sssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0,      3)> xxxw, rrra, sssq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      0, 0b1000)> xxxi, rrri, sssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      0)> xxyx, rrgr, ssts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      1)> xxyy, rrgg, sstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      2)> xxyz, rrgb, sstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1,      3)> xxyw, rrga, sstq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      1, 0b1000)> xxyi, rrgi, ssti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      0)> xxzx, rrbr, ssps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      1)> xxzy, rrbg, sspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      2)> xxzz, rrbb, sspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2,      3)> xxzw, rrba, sspq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      2, 0b1000)> xxzi, rrbi, sspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      3,      0)> xxwx, rrar, ssqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      3,      1)> xxwy, rrag, ssqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      3,      2)> xxwz, rrab, ssqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      3,      3)> xxww, rraa, ssqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0,      3, 0b1000)> xxwi, rrai, ssqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      0)> xxix, rrir, ssis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      1)> xxiy, rrig, ssit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      2)> xxiz, rrib, ssip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000,      3)> xxiw, rria, ssiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      0, 0b1000, 0b1000)> xxii, rrii, ssii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      0)> xyxx, rgrr, stss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      1)> xyxy, rgrg, stst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      2)> xyxz, rgrb, stsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0,      3)> xyxw, rgra, stsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      0, 0b1000)> xyxi, rgri, stsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      0)> xyyx, rggr, stts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      1)> xyyy, rggg, sttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      2)> xyyz, rggb, sttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1,      3)> xyyw, rgga, sttq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      1, 0b1000)> xyyi, rggi, stti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      0)> xyzx, rgbr, stps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      1)> xyzy, rgbg, stpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      2)> xyzz, rgbb, stpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2,      3)> xyzw, rgba, stpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      2, 0b1000)> xyzi, rgbi, stpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      3,      0)> xywx, rgar, stqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      3,      1)> xywy, rgag, stqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      3,      2)> xywz, rgab, stqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      3,      3)> xyww, rgaa, stqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1,      3, 0b1000)> xywi, rgai, stqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      0)> xyix, rgir, stis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      1)> xyiy, rgig, stit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      2)> xyiz, rgib, stip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000,      3)> xyiw, rgia, stiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      1, 0b1000, 0b1000)> xyii, rgii, stii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      0)> xzxx, rbrr, spss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      1)> xzxy, rbrg, spst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      2)> xzxz, rbrb, spsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0,      3)> xzxw, rbra, spsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      0, 0b1000)> xzxi, rbri, spsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      0)> xzyx, rbgr, spts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      1)> xzyy, rbgg, sptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      2)> xzyz, rbgb, sptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1,      3)> xzyw, rbga, sptq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      1, 0b1000)> xzyi, rbgi, spti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      0)> xzzx, rbbr, spps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      1)> xzzy, rbbg, sppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      2)> xzzz, rbbb, sppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2,      3)> xzzw, rbba, sppq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      2, 0b1000)> xzzi, rbbi, sppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      3,      0)> xzwx, rbar, spqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      3,      1)> xzwy, rbag, spqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      3,      2)> xzwz, rbab, spqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      3,      3)> xzww, rbaa, spqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2,      3, 0b1000)> xzwi, rbai, spqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      0)> xzix, rbir, spis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      1)> xziy, rbig, spit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      2)> xziz, rbib, spip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000,      3)> xziw, rbia, spiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      2, 0b1000, 0b1000)> xzii, rbii, spii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      0,      0)> xwxx, rarr, sqss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      0,      1)> xwxy, rarg, sqst;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      0,      2)> xwxz, rarb, sqsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      0,      3)> xwxw, rara, sqsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      0, 0b1000)> xwxi, rari, sqsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      1,      0)> xwyx, ragr, sqts;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      1,      1)> xwyy, ragg, sqtt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      1,      2)> xwyz, ragb, sqtp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      1,      3)> xwyw, raga, sqtq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      1, 0b1000)> xwyi, ragi, sqti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      2,      0)> xwzx, rabr, sqps;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      2,      1)> xwzy, rabg, sqpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      2,      2)> xwzz, rabb, sqpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      2,      3)> xwzw, raba, sqpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      2, 0b1000)> xwzi, rabi, sqpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      3,      0)> xwwx, raar, sqqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      3,      1)> xwwy, raag, sqqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      3,      2)> xwwz, raab, sqqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      3,      3)> xwww, raaa, sqqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3,      3, 0b1000)> xwwi, raai, sqqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3, 0b1000,      0)> xwix, rair, sqis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3, 0b1000,      1)> xwiy, raig, sqit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3, 0b1000,      2)> xwiz, raib, sqip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3, 0b1000,      3)> xwiw, raia, sqiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0,      3, 0b1000, 0b1000)> xwii, raii, sqii;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      0)> xixx, rirr, siss;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      1)> xixy, rirg, sist;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      2)> xixz, rirb, sisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0,      3)> xixw, rira, sisq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      0, 0b1000)> xixi, riri, sisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      0)> xiyx, rigr, sits;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      1)> xiyy, rigg, sitt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      2)> xiyz, rigb, sitp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1,      3)> xiyw, riga, sitq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      1, 0b1000)> xiyi, rigi, siti;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      0)> xizx, ribr, sips;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      1)> xizy, ribg, sipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      2)> xizz, ribb, sipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2,      3)> xizw, riba, sipq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      2, 0b1000)> xizi, ribi, sipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      3,      0)> xiwx, riar, siqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      3,      1)> xiwy, riag, siqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      3,      2)> xiwz, riab, siqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      3,      3)> xiww, riaa, siqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000,      3, 0b1000)> xiwi, riai, siqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      0)> xiix, riir, siis;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      1)> xiiy, riig, siit;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      2)> xiiz, riib, siip;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000,      3)> xiiw, riia, siiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     0, 0b1000, 0b1000, 0b1000)> xiii, riii, siii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      0)> yxxx, grrr, tsss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      1)> yxxy, grrg, tsst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      2)> yxxz, grrb, tssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0,      3)> yxxw, grra, tssq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      0, 0b1000)> yxxi, grri, tssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      0)> yxyx, grgr, tsts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      1)> yxyy, grgg, tstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      2)> yxyz, grgb, tstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1,      3)> yxyw, grga, tstq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      1, 0b1000)> yxyi, grgi, tsti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      0)> yxzx, grbr, tsps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      1)> yxzy, grbg, tspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      2)> yxzz, grbb, tspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2,      3)> yxzw, grba, tspq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      2, 0b1000)> yxzi, grbi, tspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      3,      0)> yxwx, grar, tsqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      3,      1)> yxwy, grag, tsqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      3,      2)> yxwz, grab, tsqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      3,      3)> yxww, graa, tsqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0,      3, 0b1000)> yxwi, grai, tsqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      0)> yxix, grir, tsis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      1)> yxiy, grig, tsit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      2)> yxiz, grib, tsip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000,      3)> yxiw, gria, tsiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      0, 0b1000, 0b1000)> yxii, grii, tsii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      0)> yyxx, ggrr, ttss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      1)> yyxy, ggrg, ttst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      2)> yyxz, ggrb, ttsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0,      3)> yyxw, ggra, ttsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      0, 0b1000)> yyxi, ggri, ttsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      0)> yyyx, gggr, ttts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      1)> yyyy, gggg, tttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      2)> yyyz, gggb, tttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1,      3)> yyyw, ggga, tttq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      1, 0b1000)> yyyi, gggi, ttti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      0)> yyzx, ggbr, ttps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      1)> yyzy, ggbg, ttpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      2)> yyzz, ggbb, ttpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2,      3)> yyzw, ggba, ttpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      2, 0b1000)> yyzi, ggbi, ttpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      3,      0)> yywx, ggar, ttqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      3,      1)> yywy, ggag, ttqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      3,      2)> yywz, ggab, ttqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      3,      3)> yyww, ggaa, ttqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1,      3, 0b1000)> yywi, ggai, ttqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      0)> yyix, ggir, ttis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      1)> yyiy, ggig, ttit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      2)> yyiz, ggib, ttip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000,      3)> yyiw, ggia, ttiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      1, 0b1000, 0b1000)> yyii, ggii, ttii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      0)> yzxx, gbrr, tpss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      1)> yzxy, gbrg, tpst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      2)> yzxz, gbrb, tpsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0,      3)> yzxw, gbra, tpsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      0, 0b1000)> yzxi, gbri, tpsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      0)> yzyx, gbgr, tpts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      1)> yzyy, gbgg, tptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      2)> yzyz, gbgb, tptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1,      3)> yzyw, gbga, tptq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      1, 0b1000)> yzyi, gbgi, tpti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      0)> yzzx, gbbr, tpps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      1)> yzzy, gbbg, tppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      2)> yzzz, gbbb, tppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2,      3)> yzzw, gbba, tppq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      2, 0b1000)> yzzi, gbbi, tppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      3,      0)> yzwx, gbar, tpqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      3,      1)> yzwy, gbag, tpqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      3,      2)> yzwz, gbab, tpqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      3,      3)> yzww, gbaa, tpqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2,      3, 0b1000)> yzwi, gbai, tpqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      0)> yzix, gbir, tpis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      1)> yziy, gbig, tpit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      2)> yziz, gbib, tpip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000,      3)> yziw, gbia, tpiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      2, 0b1000, 0b1000)> yzii, gbii, tpii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      0,      0)> ywxx, garr, tqss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      0,      1)> ywxy, garg, tqst;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      0,      2)> ywxz, garb, tqsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      0,      3)> ywxw, gara, tqsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      0, 0b1000)> ywxi, gari, tqsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      1,      0)> ywyx, gagr, tqts;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      1,      1)> ywyy, gagg, tqtt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      1,      2)> ywyz, gagb, tqtp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      1,      3)> ywyw, gaga, tqtq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      1, 0b1000)> ywyi, gagi, tqti;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      2,      0)> ywzx, gabr, tqps;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      2,      1)> ywzy, gabg, tqpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      2,      2)> ywzz, gabb, tqpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      2,      3)> ywzw, gaba, tqpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      2, 0b1000)> ywzi, gabi, tqpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      3,      0)> ywwx, gaar, tqqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      3,      1)> ywwy, gaag, tqqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      3,      2)> ywwz, gaab, tqqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      3,      3)> ywww, gaaa, tqqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3,      3, 0b1000)> ywwi, gaai, tqqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3, 0b1000,      0)> ywix, gair, tqis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3, 0b1000,      1)> ywiy, gaig, tqit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3, 0b1000,      2)> ywiz, gaib, tqip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3, 0b1000,      3)> ywiw, gaia, tqiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1,      3, 0b1000, 0b1000)> ywii, gaii, tqii;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      0)> yixx, girr, tiss;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      1)> yixy, girg, tist;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      2)> yixz, girb, tisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0,      3)> yixw, gira, tisq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      0, 0b1000)> yixi, giri, tisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      0)> yiyx, gigr, tits;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      1)> yiyy, gigg, titt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      2)> yiyz, gigb, titp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1,      3)> yiyw, giga, titq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      1, 0b1000)> yiyi, gigi, titi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      0)> yizx, gibr, tips;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      1)> yizy, gibg, tipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      2)> yizz, gibb, tipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2,      3)> yizw, giba, tipq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      2, 0b1000)> yizi, gibi, tipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      3,      0)> yiwx, giar, tiqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      3,      1)> yiwy, giag, tiqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      3,      2)> yiwz, giab, tiqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      3,      3)> yiww, giaa, tiqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000,      3, 0b1000)> yiwi, giai, tiqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      0)> yiix, giir, tiis;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      1)> yiiy, giig, tiit;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      2)> yiiz, giib, tiip;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000,      3)> yiiw, giia, tiiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     1, 0b1000, 0b1000, 0b1000)> yiii, giii, tiii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      0)> zxxx, brrr, psss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      1)> zxxy, brrg, psst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      2)> zxxz, brrb, pssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0,      3)> zxxw, brra, pssq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      0, 0b1000)> zxxi, brri, pssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      0)> zxyx, brgr, psts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      1)> zxyy, brgg, pstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      2)> zxyz, brgb, pstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1,      3)> zxyw, brga, pstq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      1, 0b1000)> zxyi, brgi, psti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      0)> zxzx, brbr, psps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      1)> zxzy, brbg, pspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      2)> zxzz, brbb, pspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2,      3)> zxzw, brba, pspq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      2, 0b1000)> zxzi, brbi, pspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      3,      0)> zxwx, brar, psqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      3,      1)> zxwy, brag, psqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      3,      2)> zxwz, brab, psqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      3,      3)> zxww, braa, psqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0,      3, 0b1000)> zxwi, brai, psqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      0)> zxix, brir, psis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      1)> zxiy, brig, psit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      2)> zxiz, brib, psip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000,      3)> zxiw, bria, psiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      0, 0b1000, 0b1000)> zxii, brii, psii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      0)> zyxx, bgrr, ptss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      1)> zyxy, bgrg, ptst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      2)> zyxz, bgrb, ptsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0,      3)> zyxw, bgra, ptsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      0, 0b1000)> zyxi, bgri, ptsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      0)> zyyx, bggr, ptts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      1)> zyyy, bggg, pttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      2)> zyyz, bggb, pttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1,      3)> zyyw, bgga, pttq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      1, 0b1000)> zyyi, bggi, ptti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      0)> zyzx, bgbr, ptps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      1)> zyzy, bgbg, ptpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      2)> zyzz, bgbb, ptpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2,      3)> zyzw, bgba, ptpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      2, 0b1000)> zyzi, bgbi, ptpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      3,      0)> zywx, bgar, ptqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      3,      1)> zywy, bgag, ptqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      3,      2)> zywz, bgab, ptqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      3,      3)> zyww, bgaa, ptqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1,      3, 0b1000)> zywi, bgai, ptqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      0)> zyix, bgir, ptis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      1)> zyiy, bgig, ptit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      2)> zyiz, bgib, ptip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000,      3)> zyiw, bgia, ptiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      1, 0b1000, 0b1000)> zyii, bgii, ptii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      0)> zzxx, bbrr, ppss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      1)> zzxy, bbrg, ppst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      2)> zzxz, bbrb, ppsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0,      3)> zzxw, bbra, ppsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      0, 0b1000)> zzxi, bbri, ppsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      0)> zzyx, bbgr, ppts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      1)> zzyy, bbgg, pptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      2)> zzyz, bbgb, pptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1,      3)> zzyw, bbga, pptq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      1, 0b1000)> zzyi, bbgi, ppti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      0)> zzzx, bbbr, ppps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      1)> zzzy, bbbg, pppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      2)> zzzz, bbbb, pppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2,      3)> zzzw, bbba, pppq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      2, 0b1000)> zzzi, bbbi, pppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      3,      0)> zzwx, bbar, ppqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      3,      1)> zzwy, bbag, ppqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      3,      2)> zzwz, bbab, ppqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      3,      3)> zzww, bbaa, ppqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2,      3, 0b1000)> zzwi, bbai, ppqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      0)> zzix, bbir, ppis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      1)> zziy, bbig, ppit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      2)> zziz, bbib, ppip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000,      3)> zziw, bbia, ppiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      2, 0b1000, 0b1000)> zzii, bbii, ppii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      0,      0)> zwxx, barr, pqss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      0,      1)> zwxy, barg, pqst;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      0,      2)> zwxz, barb, pqsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      0,      3)> zwxw, bara, pqsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      0, 0b1000)> zwxi, bari, pqsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      1,      0)> zwyx, bagr, pqts;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      1,      1)> zwyy, bagg, pqtt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      1,      2)> zwyz, bagb, pqtp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      1,      3)> zwyw, baga, pqtq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      1, 0b1000)> zwyi, bagi, pqti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      2,      0)> zwzx, babr, pqps;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      2,      1)> zwzy, babg, pqpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      2,      2)> zwzz, babb, pqpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      2,      3)> zwzw, baba, pqpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      2, 0b1000)> zwzi, babi, pqpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      3,      0)> zwwx, baar, pqqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      3,      1)> zwwy, baag, pqqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      3,      2)> zwwz, baab, pqqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      3,      3)> zwww, baaa, pqqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3,      3, 0b1000)> zwwi, baai, pqqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3, 0b1000,      0)> zwix, bair, pqis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3, 0b1000,      1)> zwiy, baig, pqit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3, 0b1000,      2)> zwiz, baib, pqip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3, 0b1000,      3)> zwiw, baia, pqiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2,      3, 0b1000, 0b1000)> zwii, baii, pqii;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      0)> zixx, birr, piss;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      1)> zixy, birg, pist;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      2)> zixz, birb, pisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0,      3)> zixw, bira, pisq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      0, 0b1000)> zixi, biri, pisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      0)> ziyx, bigr, pits;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      1)> ziyy, bigg, pitt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      2)> ziyz, bigb, pitp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1,      3)> ziyw, biga, pitq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      1, 0b1000)> ziyi, bigi, piti;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      0)> zizx, bibr, pips;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      1)> zizy, bibg, pipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      2)> zizz, bibb, pipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2,      3)> zizw, biba, pipq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      2, 0b1000)> zizi, bibi, pipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      3,      0)> ziwx, biar, piqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      3,      1)> ziwy, biag, piqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      3,      2)> ziwz, biab, piqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      3,      3)> ziww, biaa, piqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000,      3, 0b1000)> ziwi, biai, piqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      0)> ziix, biir, piis;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      1)> ziiy, biig, piit;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      2)> ziiz, biib, piip;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000,      3)> ziiw, biia, piiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     2, 0b1000, 0b1000, 0b1000)> ziii, biii, piii;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      0,      0)> wxxx, arrr, qsss;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      0,      1)> wxxy, arrg, qsst;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      0,      2)> wxxz, arrb, qssp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      0,      3)> wxxw, arra, qssq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      0, 0b1000)> wxxi, arri, qssi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      1,      0)> wxyx, argr, qsts;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      1,      1)> wxyy, argg, qstt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      1,      2)> wxyz, argb, qstp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      1,      3)> wxyw, arga, qstq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      1, 0b1000)> wxyi, argi, qsti;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      2,      0)> wxzx, arbr, qsps;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      2,      1)> wxzy, arbg, qspt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      2,      2)> wxzz, arbb, qspp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      2,      3)> wxzw, arba, qspq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      2, 0b1000)> wxzi, arbi, qspi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      3,      0)> wxwx, arar, qsqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      3,      1)> wxwy, arag, qsqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      3,      2)> wxwz, arab, qsqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      3,      3)> wxww, araa, qsqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0,      3, 0b1000)> wxwi, arai, qsqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0, 0b1000,      0)> wxix, arir, qsis;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0, 0b1000,      1)> wxiy, arig, qsit;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0, 0b1000,      2)> wxiz, arib, qsip;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0, 0b1000,      3)> wxiw, aria, qsiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      0, 0b1000, 0b1000)> wxii, arii, qsii;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      0,      0)> wyxx, agrr, qtss;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      0,      1)> wyxy, agrg, qtst;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      0,      2)> wyxz, agrb, qtsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      0,      3)> wyxw, agra, qtsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      0, 0b1000)> wyxi, agri, qtsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      1,      0)> wyyx, aggr, qtts;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      1,      1)> wyyy, aggg, qttt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      1,      2)> wyyz, aggb, qttp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      1,      3)> wyyw, agga, qttq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      1, 0b1000)> wyyi, aggi, qtti;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      2,      0)> wyzx, agbr, qtps;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      2,      1)> wyzy, agbg, qtpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      2,      2)> wyzz, agbb, qtpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      2,      3)> wyzw, agba, qtpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      2, 0b1000)> wyzi, agbi, qtpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      3,      0)> wywx, agar, qtqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      3,      1)> wywy, agag, qtqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      3,      2)> wywz, agab, qtqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      3,      3)> wyww, agaa, qtqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1,      3, 0b1000)> wywi, agai, qtqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1, 0b1000,      0)> wyix, agir, qtis;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1, 0b1000,      1)> wyiy, agig, qtit;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1, 0b1000,      2)> wyiz, agib, qtip;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1, 0b1000,      3)> wyiw, agia, qtiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      1, 0b1000, 0b1000)> wyii, agii, qtii;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      0,      0)> wzxx, abrr, qpss;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      0,      1)> wzxy, abrg, qpst;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      0,      2)> wzxz, abrb, qpsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      0,      3)> wzxw, abra, qpsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      0, 0b1000)> wzxi, abri, qpsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      1,      0)> wzyx, abgr, qpts;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      1,      1)> wzyy, abgg, qptt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      1,      2)> wzyz, abgb, qptp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      1,      3)> wzyw, abga, qptq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      1, 0b1000)> wzyi, abgi, qpti;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      2,      0)> wzzx, abbr, qpps;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      2,      1)> wzzy, abbg, qppt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      2,      2)> wzzz, abbb, qppp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      2,      3)> wzzw, abba, qppq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      2, 0b1000)> wzzi, abbi, qppi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      3,      0)> wzwx, abar, qpqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      3,      1)> wzwy, abag, qpqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      3,      2)> wzwz, abab, qpqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      3,      3)> wzww, abaa, qpqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2,      3, 0b1000)> wzwi, abai, qpqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2, 0b1000,      0)> wzix, abir, qpis;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2, 0b1000,      1)> wziy, abig, qpit;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2, 0b1000,      2)> wziz, abib, qpip;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2, 0b1000,      3)> wziw, abia, qpiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      2, 0b1000, 0b1000)> wzii, abii, qpii;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      0,      0)> wwxx, aarr, qqss;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      0,      1)> wwxy, aarg, qqst;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      0,      2)> wwxz, aarb, qqsp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      0,      3)> wwxw, aara, qqsq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      0, 0b1000)> wwxi, aari, qqsi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      1,      0)> wwyx, aagr, qqts;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      1,      1)> wwyy, aagg, qqtt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      1,      2)> wwyz, aagb, qqtp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      1,      3)> wwyw, aaga, qqtq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      1, 0b1000)> wwyi, aagi, qqti;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      2,      0)> wwzx, aabr, qqps;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      2,      1)> wwzy, aabg, qqpt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      2,      2)> wwzz, aabb, qqpp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      2,      3)> wwzw, aaba, qqpq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      2, 0b1000)> wwzi, aabi, qqpi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      3,      0)> wwwx, aaar, qqqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      3,      1)> wwwy, aaag, qqqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      3,      2)> wwwz, aaab, qqqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      3,      3)> wwww, aaaa, qqqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3,      3, 0b1000)> wwwi, aaai, qqqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3, 0b1000,      0)> wwix, aair, qqis;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3, 0b1000,      1)> wwiy, aaig, qqit;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3, 0b1000,      2)> wwiz, aaib, qqip;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3, 0b1000,      3)> wwiw, aaia, qqiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3,      3, 0b1000, 0b1000)> wwii, aaii, qqii;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      0,      0)> wixx, airr, qiss;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      0,      1)> wixy, airg, qist;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      0,      2)> wixz, airb, qisp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      0,      3)> wixw, aira, qisq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      0, 0b1000)> wixi, airi, qisi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      1,      0)> wiyx, aigr, qits;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      1,      1)> wiyy, aigg, qitt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      1,      2)> wiyz, aigb, qitp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      1,      3)> wiyw, aiga, qitq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      1, 0b1000)> wiyi, aigi, qiti;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      2,      0)> wizx, aibr, qips;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      2,      1)> wizy, aibg, qipt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      2,      2)> wizz, aibb, qipp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      2,      3)> wizw, aiba, qipq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      2, 0b1000)> wizi, aibi, qipi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      3,      0)> wiwx, aiar, qiqs;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      3,      1)> wiwy, aiag, qiqt;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      3,      2)> wiwz, aiab, qiqp;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      3,      3)> wiww, aiaa, qiqq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000,      3, 0b1000)> wiwi, aiai, qiqi;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000, 0b1000,      0)> wiix, aiir, qiis;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000, 0b1000,      1)> wiiy, aiig, qiit;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000, 0b1000,      2)> wiiz, aiib, qiip;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000, 0b1000,      3)> wiiw, aiia, qiiq;\
  swizzler<T, 4, __ENCODE_PTR_4(     3, 0b1000, 0b1000, 0b1000)> wiii, aiii, qiii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      0)> ixxx, irrr, isss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      1)> ixxy, irrg, isst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      2)> ixxz, irrb, issp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0,      3)> ixxw, irra, issq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      0, 0b1000)> ixxi, irri, issi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      0)> ixyx, irgr, ists;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      1)> ixyy, irgg, istt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      2)> ixyz, irgb, istp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1,      3)> ixyw, irga, istq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      1, 0b1000)> ixyi, irgi, isti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      0)> ixzx, irbr, isps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      1)> ixzy, irbg, ispt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      2)> ixzz, irbb, ispp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2,      3)> ixzw, irba, ispq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      2, 0b1000)> ixzi, irbi, ispi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      3,      0)> ixwx, irar, isqs;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      3,      1)> ixwy, irag, isqt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      3,      2)> ixwz, irab, isqp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      3,      3)> ixww, iraa, isqq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0,      3, 0b1000)> ixwi, irai, isqi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      0)> ixix, irir, isis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      1)> ixiy, irig, isit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      2)> ixiz, irib, isip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000,      3)> ixiw, iria, isiq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      0, 0b1000, 0b1000)> ixii, irii, isii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      0)> iyxx, igrr, itss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      1)> iyxy, igrg, itst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      2)> iyxz, igrb, itsp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0,      3)> iyxw, igra, itsq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      0, 0b1000)> iyxi, igri, itsi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      0)> iyyx, iggr, itts;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      1)> iyyy, iggg, ittt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      2)> iyyz, iggb, ittp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1,      3)> iyyw, igga, ittq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      1, 0b1000)> iyyi, iggi, itti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      0)> iyzx, igbr, itps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      1)> iyzy, igbg, itpt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      2)> iyzz, igbb, itpp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2,      3)> iyzw, igba, itpq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      2, 0b1000)> iyzi, igbi, itpi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      3,      0)> iywx, igar, itqs;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      3,      1)> iywy, igag, itqt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      3,      2)> iywz, igab, itqp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      3,      3)> iyww, igaa, itqq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1,      3, 0b1000)> iywi, igai, itqi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      0)> iyix, igir, itis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      1)> iyiy, igig, itit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      2)> iyiz, igib, itip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000,      3)> iyiw, igia, itiq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      1, 0b1000, 0b1000)> iyii, igii, itii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      0)> izxx, ibrr, ipss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      1)> izxy, ibrg, ipst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      2)> izxz, ibrb, ipsp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0,      3)> izxw, ibra, ipsq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      0, 0b1000)> izxi, ibri, ipsi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      0)> izyx, ibgr, ipts;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      1)> izyy, ibgg, iptt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      2)> izyz, ibgb, iptp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1,      3)> izyw, ibga, iptq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      1, 0b1000)> izyi, ibgi, ipti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      0)> izzx, ibbr, ipps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      1)> izzy, ibbg, ippt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      2)> izzz, ibbb, ippp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2,      3)> izzw, ibba, ippq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      2, 0b1000)> izzi, ibbi, ippi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      3,      0)> izwx, ibar, ipqs;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      3,      1)> izwy, ibag, ipqt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      3,      2)> izwz, ibab, ipqp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      3,      3)> izww, ibaa, ipqq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2,      3, 0b1000)> izwi, ibai, ipqi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      0)> izix, ibir, ipis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      1)> iziy, ibig, ipit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      2)> iziz, ibib, ipip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000,      3)> iziw, ibia, ipiq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      2, 0b1000, 0b1000)> izii, ibii, ipii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      0,      0)> iwxx, iarr, iqss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      0,      1)> iwxy, iarg, iqst;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      0,      2)> iwxz, iarb, iqsp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      0,      3)> iwxw, iara, iqsq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      0, 0b1000)> iwxi, iari, iqsi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      1,      0)> iwyx, iagr, iqts;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      1,      1)> iwyy, iagg, iqtt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      1,      2)> iwyz, iagb, iqtp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      1,      3)> iwyw, iaga, iqtq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      1, 0b1000)> iwyi, iagi, iqti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      2,      0)> iwzx, iabr, iqps;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      2,      1)> iwzy, iabg, iqpt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      2,      2)> iwzz, iabb, iqpp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      2,      3)> iwzw, iaba, iqpq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      2, 0b1000)> iwzi, iabi, iqpi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      3,      0)> iwwx, iaar, iqqs;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      3,      1)> iwwy, iaag, iqqt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      3,      2)> iwwz, iaab, iqqp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      3,      3)> iwww, iaaa, iqqq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3,      3, 0b1000)> iwwi, iaai, iqqi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3, 0b1000,      0)> iwix, iair, iqis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3, 0b1000,      1)> iwiy, iaig, iqit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3, 0b1000,      2)> iwiz, iaib, iqip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3, 0b1000,      3)> iwiw, iaia, iqiq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000,      3, 0b1000, 0b1000)> iwii, iaii, iqii;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      0)> iixx, iirr, iiss;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      1)> iixy, iirg, iist;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      2)> iixz, iirb, iisp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0,      3)> iixw, iira, iisq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      0, 0b1000)> iixi, iiri, iisi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      0)> iiyx, iigr, iits;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      1)> iiyy, iigg, iitt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      2)> iiyz, iigb, iitp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1,      3)> iiyw, iiga, iitq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      1, 0b1000)> iiyi, iigi, iiti;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      0)> iizx, iibr, iips;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      1)> iizy, iibg, iipt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      2)> iizz, iibb, iipp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2,      3)> iizw, iiba, iipq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      2, 0b1000)> iizi, iibi, iipi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      3,      0)> iiwx, iiar, iiqs;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      3,      1)> iiwy, iiag, iiqt;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      3,      2)> iiwz, iiab, iiqp;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      3,      3)> iiww, iiaa, iiqq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000,      3, 0b1000)> iiwi, iiai, iiqi;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      0)> iiix, iiir, iiis;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      1)> iiiy, iiig, iiit;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      2)> iiiz, iiib, iiip;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000,      3)> iiiw, iiia, iiiq;\
  swizzler<T, 4, __ENCODE_PTR_4(0b1000, 0b1000, 0b1000, 0b1000)> iiii;\

#endif
