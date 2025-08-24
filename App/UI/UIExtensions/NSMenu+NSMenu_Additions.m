//
// --------------------------------------------------------------------------
// NSMenu+NSMenu_Additions.m
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import "NSMenu+NSMenu_Additions.h"

@implementation NSMenu (NSMenu_Additions)

/// Retrieve items by identifier

- (NSMenuItem * _Nullable)itemWithIdentifier:(NSUserInterfaceItemIdentifier)identifier {
    
    for (NSMenuItem *item in self.itemArray) {
        if ([item.identifier isEqual:identifier]) {
            return item;
        }
    }
    
    return nil;
}

@end

@implementation NSPopUpButton (NSMenu_Additions)

/// Retrieve items by identifier

- (NSMenuItem * _Nullable)itemWithIdentifier:(NSUserInterfaceItemIdentifier)identifier {
    return [self.menu itemWithIdentifier: identifier];
}

- (void)selectItemWithIdentifier:(NSUserInterfaceItemIdentifier)identifier {
    NSMenuItem *itemToSelect = [self itemWithIdentifier:identifier];
    [self selectItem: itemToSelect];
}

@end
