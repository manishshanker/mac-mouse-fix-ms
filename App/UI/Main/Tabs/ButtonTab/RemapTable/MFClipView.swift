//
// --------------------------------------------------------------------------
// MFClipView.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

/// Not sure if this is necessary. Built for automatic resizing of the action table

import Cocoa

class MFClipView: NSClipView {

    override func draw(_ dirtyRect: NSRect) {
        super.draw(dirtyRect)

        // Drawing code here.
    }
    
    override func viewBoundsChanged(_ notification: Notification) {
        self.translatesAutoresizingMaskIntoConstraints = false
        self.documentView?.translatesAutoresizingMaskIntoConstraints = false
        super.viewBoundsChanged(notification)
    }
    
    override func viewFrameChanged(_ notification: Notification) {
        self.translatesAutoresizingMaskIntoConstraints = false
        self.documentView?.translatesAutoresizingMaskIntoConstraints = false
        super.viewFrameChanged(notification)
    }
}
