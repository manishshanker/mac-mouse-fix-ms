//
// --------------------------------------------------------------------------
// CoolSUVersionComparator.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2024
// Licensed under MIT
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import "Sparkle/Sparkle.h"
#import "Sparkle/SUAppcast.h"

NS_ASSUME_NONNULL_BEGIN

@interface CoolSUComparator : NSObject <SUVersionComparison>

- (NSComparisonResult)compareVersion:(nonnull NSString *)versionA withBuildNumber:(NSObject *)buildNumberA
                           toVersion:(nonnull NSString *)versionB withBuildNumber:(NSObject *)buildNumberB;

@end

NS_ASSUME_NONNULL_END
