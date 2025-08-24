//
// --------------------------------------------------------------------------
// ReactiveRemaps.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation
import ReactiveSwift

@objc class ReactiveRemaps: NSObject {
    
    /// Singleton
    @objc static let shared = ReactiveRemaps()
    
    /// Reactive core
    private var signal: Signal<NSDictionary, Never>
    private var observer: Signal<NSDictionary, Never>.Observer
    
    /// Init
    override init() {
        let (o, i) = Signal<NSDictionary, Never>.pipe()
        signal = o
        observer = i
    }
    
    /// Main interface
    var remaps: SignalProducer<NSDictionary, Never> {
        return signal.producer.prefix(value: Remap.remaps) // .skipRepeats()
    }
    
    /// ObjC interface
    @objc func handleRemapsDidChange() {
//        observer.send(value: Remap.remaps)
        SwitchMaster.shared.remapsChanged(remaps: Remap.remaps)
    }
}

