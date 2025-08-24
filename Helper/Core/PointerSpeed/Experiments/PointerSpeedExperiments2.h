//
// --------------------------------------------------------------------------
// PointerSpeed2.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import <IOKit/hid/IOHIDBase.h>

NS_ASSUME_NONNULL_BEGIN

@interface PointerSpeedExperiments2 : NSObject

+ (void)setSensitivityTo:(int)sensitivity onDevice:(IOHIDDeviceRef)dev;

@end

NS_ASSUME_NONNULL_END
