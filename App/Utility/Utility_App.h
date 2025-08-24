//
// --------------------------------------------------------------------------
// Utility_App.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2019
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>


NS_ASSUME_NONNULL_BEGIN

@interface Utility_App : NSObject

+ (void)centerWindow:(NSWindow *)win atPoint:(NSPoint)pt;
+ (void)openWindowWithFadeAnimation:(NSWindow *)window fadeIn:(BOOL)fadeIn fadeTime:(NSTimeInterval)time;
+ (NSPoint)getCenterOfRect:(NSRect)rect;
+ (BOOL)appIsInstalled:(NSString *)bundleID;
+ (NSImage *)tintedImage:(NSImage *)image withColor:(NSColor *)tint;
+ (CGFloat)actualTextViewWidth:(NSTextView *)textView;
//+ (CGFloat)actualTextFieldWidth:(NSTextField *)textField;
+ (NSArray <NSNumber *> * _Nullable)cpuUsageIncludingNice:(BOOL)includeNice;

@end

NS_ASSUME_NONNULL_END
