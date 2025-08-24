//
// --------------------------------------------------------------------------
// RemapSwizzler.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef RemapsOverrider_h
#define RemapsOverrider_h

@import Foundation;

@interface RemapSwizzler : NSObject

+ (NSDictionary *_Nullable)swizzleRemaps:(NSDictionary *_Nonnull)remaps activeModifiers:(NSDictionary *_Nonnull)modifiers;

@end

#endif /* RemapsOverrider_h */
