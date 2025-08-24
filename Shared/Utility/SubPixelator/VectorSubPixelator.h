//
// --------------------------------------------------------------------------
// VectorSubPixelator.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2020
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import "VectorUtility.h"

NS_ASSUME_NONNULL_BEGIN

@interface VectorSubPixelator : NSObject

+ (VectorSubPixelator *)ceilPixelator;
+ (VectorSubPixelator *)roundPixelator;
+ (VectorSubPixelator *)biasedPixelator;
+ (VectorSubPixelator *)floorPixelator;

- (instancetype)init NS_UNAVAILABLE;

- (void)setPixelationThreshold:(double)threshold;
- (Vector)intVectorWithDoubleVector:(Vector)inpVec;
- (Vector)peekIntVectorWithDoubleVector:(Vector)inpDelta;

- (void)reset;

@end

NS_ASSUME_NONNULL_END
