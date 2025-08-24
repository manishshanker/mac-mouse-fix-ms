//
// --------------------------------------------------------------------------
// MFSegmentedControl.m
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import "MFSegmentedControl.h"
#import <Carbon/Carbon.h>
#import "WannabePrefixHeader.h"

@interface MFSegmentedControl ()
@property (nonatomic) IBInspectable NSNumber *keyEquivKC;
@end

/*
 KeyCodes:
 - Delete -> kVK_Delete -> 0x33 -> 51
*/

@implementation MFSegmentedControl

- (BOOL)performKeyEquivalent:(NSEvent *)key {
    
    DDLogInfo(@"%d %@", key.keyCode, _keyEquivKC);
    
    if (key.keyCode == _keyEquivKC.intValue) {
        [self selectSegmentWithTag:-1];
        [self performClick:self];
        return YES;
    }
    return NO;
}

@end
