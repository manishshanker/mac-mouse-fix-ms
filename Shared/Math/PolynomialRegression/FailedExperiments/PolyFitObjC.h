//
// --------------------------------------------------------------------------
// PolyFitObjC.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface PolyFit : NSObject

+ (NSArray <NSNumber *>* _Nonnull)fitWithX:(NSArray<NSNumber *> * _Nonnull)x y:(NSArray<NSNumber *> * _Nonnull)y polynomialDegree:(int)polyDegree;

@end

NS_ASSUME_NONNULL_END
