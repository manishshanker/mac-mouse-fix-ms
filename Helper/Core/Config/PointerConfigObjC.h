//
// --------------------------------------------------------------------------
// PointerConfigObjC.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#ifndef PointerConfigObjC_h
#define PointerConfigObjC_h

/// These parameters describe an accelerationCurve in the acceleration algorithm of Apples driver.
///     -> Also see
///         - IOHIPointing.cpp -> This is where the acceleration algorithm that uses this is implemented
///         - IOHIDParameter.h
///         - NotePlan "MMF - Scraps - macOS Pointer Acceleration Investigation 11.06.2022"
///     The curve describes a function outputSpeed(inputSpeed). It's derivative is a function sensitivity(inputSpeed).
/// Parameters:
///     - The gain values are coefficients for an IOQuarticFunction()
///         - See the curve on desmos: https://www.desmos.com/calculator/vimqz0vsob
///     - capSpeedLinear is the input speed at which to cap sensitivity
///         - This is the same as continuing the outputSpeed(inputSpeed) function with a tangent line starting at inputSpeed = capSpeedLinear. Hence the name.
///     - capSpeedParabolicRoot is the input speed at which to decrease sensitivity?
///         - I'm not sure what this does, but looking at IOHIPointing, it seems to be expected that capSpeedLinear < capSpeedParabolicRoot
///     - There are also keys for cubicRoot and quarticRoot capping, but they seem to be unused in IOHIPointing.cpp
typedef struct {
    double linearGain;
    double parabolicGain;
    double cubicGain;
    double quarticGain;
    double capSpeedLinear;
    double capSpeedParabolicRoot;
} MFAppleAccelerationCurveParams;

#endif /* PointerConfigObjC_h */
