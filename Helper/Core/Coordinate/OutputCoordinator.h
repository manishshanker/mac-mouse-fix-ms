//
// --------------------------------------------------------------------------
// OutputCoordinator.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef OutputCoordinator_h
#define OutputCoordinator_h

typedef enum {
    kTouchDriverScroll,
    kTouchDriverModifiedDrag,
    kTouchDriverGestureScrollSimulator
} TouchDriver;

typedef void(^DriverUnsuspender)(void);

#endif /* OutputCoordinator_h */
