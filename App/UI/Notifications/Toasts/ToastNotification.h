//
// --------------------------------------------------------------------------
// ToastNotification.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Cocoa/Cocoa.h>
#import "ToastNotificationController.h"

NS_ASSUME_NONNULL_BEGIN

@interface ToastNotification : NSPanel
@property ToastNotificationController *controller;
@end

NS_ASSUME_NONNULL_END
