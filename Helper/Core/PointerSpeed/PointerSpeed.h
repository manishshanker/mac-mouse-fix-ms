//
// --------------------------------------------------------------------------
// PointerSpeed.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import <IOKit/hid/IOHIDBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface PointerSpeed : NSObject

/// Shouldn't use this yet, as it's still buggy

//+ (void)setForAllDevices;
+ (void)setForDevice:(IOHIDDeviceRef)device;
+ (void)deconfigureDevice:(IOHIDDeviceRef)device;

@end

NS_ASSUME_NONNULL_END
