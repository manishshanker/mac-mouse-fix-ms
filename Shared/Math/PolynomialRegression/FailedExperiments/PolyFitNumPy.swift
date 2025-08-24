//
// --------------------------------------------------------------------------
// PolyFitNumPy.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

//import Foundation
//import PythonKit
//import PythonSupport ///
//import NumPySupport
//
//func fit(points: [P], polynomialDegree: Int) -> [Double] {
//    
//    /// Init stuff
//    PythonSupport.initialize()
//    NumPySupport.sitePackagesURL.insertPythonPath()
//    let numpy = Python.import("numpy")
//    
//    /// Use numpy polyfit
//    let coefficients = numpy.polyfit(points.map { $0.x }, points.map { $0.y }, polynomialDegree)
//    
//    /// Return
//    return Array<Double>(coefficients)!
//}
