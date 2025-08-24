//
// --------------------------------------------------------------------------
// Actions.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2020
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import "Constants.h"
#import "WannabePrefixHeader.h"

NS_ASSUME_NONNULL_BEGIN

typedef enum {
    kMFActionPhaseStart,
    kMFActionPhaseEnd,
    kMFActionPhaseCombined,
} MFActionPhase;

@interface Actions : NSObject

+ (void)executeActionArray:(NSArray *)actionArray phase:(MFActionPhase)phase MF_SWIFT_HIDDEN;
+ (void)__SWIFT_UNBRIDGED_executeActionArray:(id)actionArray phase:(MFActionPhase)phase;

@end

NS_ASSUME_NONNULL_END
