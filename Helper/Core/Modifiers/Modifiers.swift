//
// --------------------------------------------------------------------------
// Modifiers.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

extension Modifiers {
    
    static func modifiers(with event: CGEvent?) -> NSMutableDictionary {
        return __SWIFT_UNBRIDGED_modifiers(with: event) as! NSMutableDictionary
    }
    
    static func buttonModsChanged(to newMods: NSMutableArray) {
        __SWIFT_UNBRIDGED_buttonModsChanged(to: newMods)
    }
}
