//
// --------------------------------------------------------------------------
// ModifierInputReceiver.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2019
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

typedef enum {
    kMFScrollInputModificationNone,
    kMFScrollInputModificationPrecise,
    kMFScrollInputModificationQuick,
    
} MFScrollInputModification;

typedef enum {
    kMFScrollEffectModificationNone,
    kMFScrollEffectModificationZoom,
    kMFScrollEffectModificationHorizontalScroll,
    kMFScrollEffectModificationRotate,
    kMFScrollEffectModificationFourFingerPinch,
    kMFScrollEffectModificationCommandTab,
    kMFScrollEffectModificationThreeFingerSwipeHorizontal,
    kMFScrollEffectModificationAddModeFeedback,
} MFScrollEffectModification;

typedef struct {
    MFScrollInputModification inputMod;
    MFScrollEffectModification effectMod;
} MFScrollModificationResult;

/// `scrollModsAreEqual` function defined elsewhere

/// v For the old Objc implementation of ScrollModifers

#import <CoreGraphics/CoreGraphics.h>
//#import <Foundation/Foundation.h>

@interface ScrollModifiers_old_ : NSObject

//+ (BOOL)horizontalScrolling;
//+ (BOOL)magnificationScrolling;
//
//+ (void)handleMagnificationScrollWithAmount:(double)amount;
//
//+ (void)start;
//+ (void)stop;

@end

