//
// --------------------------------------------------------------------------
// ExponentialSmoothing.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

/// Implemented according to https://en.wikipedia.org/wiki/Moving_average#Exponential_moving_average

import Cocoa

class ExponentialSmoother: NSObject, Smoother {

    /// Params
    
    var a: Double
    var initialValue: Double?
    
    /// Init
    
    @objc convenience init(a: Double, initialValue: Double) {
        self.init(privateA: a, initialValue: initialValue)
    }
    @objc convenience init(a: Double) {
        self.init(privateA: a, initialValue: nil)
    }
    
    /** Main init
     - Parameters:
     - a: Weight for input value aka "data smoothing factor"
            - If you set this to 1 there is no smoothing, if you set it to 0 the output never changes
     - initialValue:
        - From my understanding, the algorithm needs 1 input to establish the initial value.
        - The first input will just be returned without alteration
        - So to prevent misuse, we're requiring the initialValue on initialization
     */
    private init(privateA: Double, initialValue: Double?) {
        
        self.a = privateA
        self.initialValue = initialValue
        
        super.init()
        
        self.reset()
    }
    
    /// Dynamic vars
    
    var Lprev: Double = -1
    var usageCounter: Int = 0
    
    /// Main
    
    @objc func reset() {
        usageCounter = 0
        
        if let initialValue = self.initialValue {
            _ = smooth(value: initialValue);
        }
    }
    
    @objc func smooth(value: Double) -> Double {
        /**
         From my understanding, this needs 1 input to establish the initial value.
         - The first input will just be returned without alteration.
         */
        
        let Y = value /// Input value

        var L: Double; /// Smoothed value
        
        if usageCounter == 0 {
            L = Y
        } else {
            L = a * Y  + (1 - a) * Lprev
        }
        
        usageCounter += 1;
        
        Lprev = L
        
        return L
    }
    
    @objc func lastSmoothedValue() -> Double {
        if usageCounter >= 1 {
            return Lprev
        }
        fatalError()
    }
}
