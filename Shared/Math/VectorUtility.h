//
// --------------------------------------------------------------------------
// VectorUtility.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import "ModificationUtility.h"
#import "Shorthands.h"

NS_ASSUME_NONNULL_BEGIN

@interface VectorUtility : NSObject

typedef double (^OneDTransform)(double);

typedef CGPoint Vector; /// Can't typedef this to `P` for some reason

Vector vectorByApplyingToEachDimension(Vector vec, OneDTransform f);
Vector scaledVectorWithFunction(Vector vec, OneDTransform f);
double magnitudeOfVector(Vector vec);
Vector unitVector(Vector vec);
Vector scaledVector(Vector vec, double scalar);
Vector addedVectors(Vector vec1, Vector vec2);
Vector subtractedVectors(Vector vec1, Vector vec2);
double dotProduct(Vector vec1, Vector vec2);
bool isZeroVector(Vector vec);
bool vectorHasNan(Vector vec);
bool vectorsAreEqual(Vector vec1, Vector vec2);

Vector vectorFromNSValue(NSValue *value);
NSValue *nsValueFromVector(Vector vector);
NSString *vectorDescription(Vector vector);

Vector vectorFromDeltaAndDirection(double delta, MFDirection direction);
Vector vectorFromDeltaAndDirectionVector(double delta, Vector direction);

@end

NS_ASSUME_NONNULL_END
