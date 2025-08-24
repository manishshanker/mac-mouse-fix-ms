//
// --------------------------------------------------------------------------
// Hyperlink.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2019
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Cocoa/Cocoa.h>


@interface Hyperlink : NSTextField

+ (instancetype)hyperlinkWithTitle:(NSString *)title url:(NSString *)href alwaysTracking:(BOOL)alwaysTracking leftPadding:(int)leftPadding;

@end
