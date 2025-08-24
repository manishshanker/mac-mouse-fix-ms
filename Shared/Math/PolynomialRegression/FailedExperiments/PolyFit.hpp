//
// --------------------------------------------------------------------------
// PolyFit.hpp
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef PolyFit_hpp
#define PolyFit_hpp

#include <stdio.h>

#ifdef __cplusplus /// Making CPP function available to ObjC and Swift by telling the compiler to treat it like a normal C function. Not sure if this is the best way.
extern "C" {
#endif

void simplePolyFit(double *out_coefficients, double *pointsX, double *pointsY, size_t nOfPoints, size_t polynomialDegree);

#ifdef __cplusplus
}
#endif

#endif /* PolyFit_hpp */
