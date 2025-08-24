//
// --------------------------------------------------------------------------
// PolyFitObjC.m
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import "PolyFitObjC.h"
#import "PolyFit.hpp"

@implementation PolyFit

+ (NSArray <NSNumber *>* _Nonnull)fitWithX:(NSArray<NSNumber *> *)x y:(NSArray<NSNumber *> *)y polynomialDegree:(int)polyDegree {
    
    assert(x.count == y.count);
    int nOfPoints = (int)x.count;
    
    /// Get pure c arrays
    
    double xPure[nOfPoints];
    double yPure[nOfPoints];
    for (int i = 0; i < nOfPoints; i++) {
        xPure[i] = [[x objectAtIndex:i] doubleValue];
        yPure[i] = [[y objectAtIndex: i] doubleValue];
    }
    
    /// Alloc result buffer
    double coeffs[polyDegree+1];
    /// Do regression
    simplePolyFit(coeffs, xPure, yPure, nOfPoints, polyDegree);
    /// Convert to ObjC
    NSMutableArray *result = [NSMutableArray array];
    for (int i = 0; i < polyDegree+1; i++) {
        [result addObject:[NSNumber numberWithDouble:coeffs[i]]];
    }
    /// Return
    return result;
}

@end
