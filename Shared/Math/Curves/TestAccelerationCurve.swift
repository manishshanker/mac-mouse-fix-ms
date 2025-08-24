//
// --------------------------------------------------------------------------
// TestAccelerationCurve.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

/// Use this to test how x values relate to physical speed of mouse 

import Foundation

class TestAccelerationCurve: Curve {
    
    let thresholdSpeed: Double
    let firstSens: Double
    let secondSens: Double
    
    required init(thresholdSpeed: Double, firstSens: Double, secondSens: Double) {
        self.thresholdSpeed = thresholdSpeed
        self.firstSens = firstSens
        self.secondSens = secondSens
        super.init()
    }
    
    override func evaluate(at x: Double) -> Double {
        return x < thresholdSpeed ? firstSens : secondSens
    }
}
