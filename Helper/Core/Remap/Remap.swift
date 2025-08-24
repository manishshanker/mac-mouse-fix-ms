//
// --------------------------------------------------------------------------
// Remap.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

extension Remap {
    
    static var remaps: NSDictionary {
        return __SWIFT_UNBRIDGED_remaps() as! NSDictionary
    }
    static func modifications(withModifiers modifiers: NSDictionary) -> NSDictionary? {
        return __SWIFT_UNBRIDGED_modifications(withModifiers: modifiers) as! NSDictionary?
    }
    static func sendAddModeFeedback(_ payload: NSDictionary) {
        __SWIFT_UNBRIDGED_sendAddModeFeedback(payload)
    }
}
