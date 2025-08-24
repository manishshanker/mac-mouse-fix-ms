//
// --------------------------------------------------------------------------
// HashablePair.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

typealias _HP = HashablePair
typealias _HT = HashableTriplet

struct HashablePair<X, Y>: Hashable where X: Hashable, Y: Hashable {
    /// Tuple isn't hashable so we use this instead
    
    let a: X
    let b: Y
    
    init(a: X, b: Y) {
        self.a = a
        self.b = b
    }
}

struct HashableTriplet<X, Y, Z>: Hashable where X: Hashable, Y: Hashable, Z: Hashable {
    /// Tuple isn't hashable so we use this instead
    
    let a: X
    let b: Y
    let c: Z
    
    init(a: X, b: Y, c: Z) {
        self.a = a
        self.b = b
        self.c = c
    }
}
