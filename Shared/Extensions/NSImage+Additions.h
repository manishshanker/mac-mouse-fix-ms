//
// --------------------------------------------------------------------------
// NSImage+Additions.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSImage (Additions)

- (NSImage *)coolTintedImage:(NSImage *)image color:(NSColor *)color;

@end

NS_ASSUME_NONNULL_END
