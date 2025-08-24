//
// --------------------------------------------------------------------------
// AlertCreator.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface AlertCreator : NSObject

+ (void)showStrangeHelperMessageWithStrangeURL:(NSString *)strangeURL;
+ (void)showPersistenNotificationWithTitle:(NSString *)title markdownBody:(NSString *)bodyRaw maxWidth:(int)maxWidth stayOnTop:(BOOL)isAlwaysOnTop asSheet:(BOOL)asSheet;

@end

NS_ASSUME_NONNULL_END
