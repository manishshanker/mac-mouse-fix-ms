//
// --------------------------------------------------------------------------
// IOHIDAccelerationTableBridge.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef IOHIDAccelerationTableBridge_h
#define IOHIDAccelerationTableBridge_h

#import <CoreFoundation/CoreFoundation.h>
#import "Shorthands.h"

#ifdef __cplusplus /// Making CPP function available to ObjC and Swift by telling the compiler to treat it like a normal C function. Not sure if this is the best way.
extern "C" {
#endif

CFDataRef _Nonnull createAccelerationTableWithPoints(P * _Nonnull points, uint16_t pointCount);
CFDataRef _Nonnull createAccelerationTableWithArray(NSArray * _Nonnull points);
CFDataRef _Nonnull copyDefaultAccelerationTable(void);

void printAccelerationTable(CFDataRef _Nonnull tableData);

#ifdef __cplusplus
}
#endif

#endif /* IOHIDAccelerationTableBridge_h */
