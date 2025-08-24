//
// --------------------------------------------------------------------------
// ToastNotificationOverlayController.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface ToastNotificationController : NSWindowController <NSWindowDelegate>

#define kMFToastDurationAutomatic -1.0

typedef enum {
    kToastNotificationAlignmentTopMiddle,
    kToastNotificationAlignmentBottomRight,
    kToastNotificationAlignmentBottomMiddle,
} ToastNotificationAlignment;

+ (void)attachNotificationWithMessage:(NSAttributedString *)message toWindow:(NSWindow *)window forDuration:(NSTimeInterval)showDuration;
+ (void)attachNotificationWithMessage:(NSAttributedString *)message toWindow:(NSWindow *)attachWindow forDuration:(NSTimeInterval)showDuration alignment:(ToastNotificationAlignment)alignment;

+ (void)closeNotificationWithFadeOut;

+ (NSFont *)defaultFont;

@end

NS_ASSUME_NONNULL_END
