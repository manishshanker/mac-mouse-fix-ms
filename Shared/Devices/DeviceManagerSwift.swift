//
// --------------------------------------------------------------------------
// DeviceManagerSwift.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

extension DeviceManager {
    
    static var attachedDevices: NSArray {
        return __SWIFT_UNBRIDGED_attachedDevices() as! NSArray
    }
}
