//
// --------------------------------------------------------------------------
// RemapTableCellView.swift
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

import Foundation

@objc class RemapTableCellView: NSTableCellView {
    
    let columnPadding = 8.0;
    
    @objc func coolInitAsTriggerCell(columnWidth: Double) {
        
//        /// TODO: We should really move this to RemapTableView where it is called. It's super tighly coupled and only used in one place.
//        
//        /// Make it use autolayout.
//        ///     We could also do this without subclassing
//        
//        self.translatesAutoresizingMaskIntoConstraints = false
//        
//        /// Add in superview constraints
//        ///     Tried to add these in IB like the other constraints but I couldn't find a way
//        ///     The superview is the rowView, so we don't want to attach to the trailing edge
//        
//        self.trailingAnchor.constraint(equalTo: self.superview!.trailingAnchor, constant: -columnPadding).isActive = false
//        
//        self.leadingAnchor.constraint(equalTo: self.superview!.leadingAnchor, constant: columnPadding).isActive = true
//        self.topAnchor.constraint(equalTo: self.superview!.topAnchor).isActive = true
//        self.bottomAnchor.constraint(equalTo: self.superview!.bottomAnchor).isActive = true
//        
//        /// Add in width constraint
//        ///     priority 999 because otherwise weird 'NSView-Encapsulated-Layout-Width' constraint added by the tableView will break the layout
//        if (columnWidth != -1) {
//            let c = self.widthAnchor.constraint(equalToConstant: columnWidth)
//            c.priority = .init(999)
//            c.isActive = true
//        }
    }
    
    @objc func coolInitAsEffectCell(columnWidth: Double) {
        
//        /// Make it use autolayout.
//        ///     Could do this without subclassing
//        
//        /// Edit: We turned off the trailingConstraint because it was interfering with the rowViews autoresizingMask constraints - and it still looks the same!
//        ///     So this stuff is like not even really active I think? Just don't touch it. It works.
//        
//        self.translatesAutoresizingMaskIntoConstraints = false
//        
//        /// Superview is rowView so we don't want to attach the leading edge
//        
//        self.leadingAnchor.constraint(equalTo: self.superview!.leadingAnchor, constant: columnPadding).isActive = false
//        
////        self.trailingAnchor.constraint(equalTo: self.superview!.trailingAnchor, constant: -columnPadding).isActive = true
//        self.topAnchor.constraint(equalTo: self.superview!.topAnchor).isActive = true
//        self.bottomAnchor.constraint(equalTo: self.superview!.bottomAnchor).isActive = true
//        
//        if (columnWidth != -1) {
//            let c = self.widthAnchor.constraint(equalToConstant: columnWidth)
//            c.priority = .init(999)
//            c.isActive = true
//        }
    }
}
