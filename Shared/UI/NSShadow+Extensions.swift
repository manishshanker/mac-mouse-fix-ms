//
// --------------------------------------------------------------------------
// NSShadow+Extensions.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

extension NSShadow {
    
    static var clearShadow: NSShadow {
        let s = NSShadow()
        s.shadowColor = .clear
        s.shadowOffset = .zero
        s.shadowBlurRadius = 0.0
        return s
    }
}
