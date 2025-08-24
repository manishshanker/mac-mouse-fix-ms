//
// --------------------------------------------------------------------------
// ReactiveModifiers.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation
import ReactiveSwift

@objc class ReactiveModifiers: NSObject {
    
    /// Singleton
    @objc static let shared = ReactiveModifiers()
    
    /// Reactive Core
    private var signal: Signal<NSDictionary, Never>
    private var observer: Signal<NSDictionary, Never>.Observer
    
    /// Init
    override init() {
        (signal, observer) = Signal<NSDictionary, Never>.pipe()
    }
/// Main interface
    var modifiers: SignalProducer<NSDictionary, Never> {
        return signal.producer.prefix(value: Modifiers.modifiers(with: nil)) // .skipRepeats()
    }
    
    /// ObjC Interface
    @objc func handleModifiersDidChange(to newModifiers: NSDictionary) {
//        observer.send(value: newModifiers)
        SwitchMaster.shared.modifiersChanged(modifiers: newModifiers)
    }
    
}
