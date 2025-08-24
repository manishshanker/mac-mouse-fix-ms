//
// --------------------------------------------------------------------------
// NSScreen+Additions.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSScreen (Additions)

+ (NSScreen * _Nullable)screenUnderMousePointerWithEvent:(CGEventRef _Nullable)event;
+ (NSScreen * _Nullable)screenWithDisplayID:(CGDirectDisplayID)displayID;
- (CGDirectDisplayID)displayID;

@end

NS_ASSUME_NONNULL_END
