//
// --------------------------------------------------------------------------
// CoolSUUpdater.m
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2024
// Licensed under MIT
// --------------------------------------------------------------------------
//

#import "CoolSUUpdater.h"
#import "SparkleUpdaterController.h"

@implementation CoolSUUpdater

- (void)checkForUpdates:(id)sender {
    
    /// This is invoked, when the user chooses `Check for Updates...` from the menu bar.
    ///     (Make sure the .xib files actually connects to this subclass instead of SUUpdater)
    
    /// Delete skipped versions
    ///     Note: This should be here, otherwise I think there can be a message that says sth like "version (null) is the latest available version." when you choose `Check for Updates...` from the menu bar.
    [SparkleUpdaterController resetSkippedVersions];
    
    /// Call super
    [super checkForUpdates:sender];
}

@end
