//
// --------------------------------------------------------------------------
// MFKeystrokeCaptureView.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Cocoa/Cocoa.h>
#import "Constants.h"

NS_ASSUME_NONNULL_BEGIN

typedef void (^CaptureHandler) (CGKeyCode keyCode, MFSystemDefinedEventType type, CGEventFlags flags); /// Either keyCode or type will be set, the other one will be USHRT_MAX or UINT_MAX respectively
typedef void (^CancelHandler) (void);

@interface KeyCaptureView : NSTextView <NSTextViewDelegate>

- (void)setupWithCaptureHandler:(CaptureHandler)captureHandler
                  cancelHandler:(CancelHandler)cancelHandler;

+ (void)handleKeyCaptureModeFeedbackWithPayload:(NSDictionary *)payload isSystemDefinedEvent:(BOOL)isSystem;

@end

NS_ASSUME_NONNULL_END
