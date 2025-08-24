//
// --------------------------------------------------------------------------
// Smoother.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

@objc protocol Smoother {
    
    @objc func smooth(value: Double) -> Double
    @objc func reset()
    
}
