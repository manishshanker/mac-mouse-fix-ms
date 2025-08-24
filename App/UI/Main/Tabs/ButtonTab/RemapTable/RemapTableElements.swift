//
// --------------------------------------------------------------------------
// RemapTableButton.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Cocoa

@objc class RemapTableButton: NSButton {

    @objc var host: NSTableCellView? = nil
}

@objc class RemapTableMenuItem: NSMenuItem {
    
    @objc var host: NSTableCellView? = nil
}
