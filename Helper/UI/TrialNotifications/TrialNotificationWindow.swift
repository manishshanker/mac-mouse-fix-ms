//
// --------------------------------------------------------------------------
// TrialNotificationWindow.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

/**
 We want to __increase corner radius__ to somewhat match appearance of system notifications.
 See:
 - https://developer.apple.com/forums/thread/125232
 */

import Cocoa

class TrialNotificationWindow: NSWindow {
    
    override var canBecomeKey: Bool {
        /// This is so the shadow doesn't change when you click on it
        false
    }
}
