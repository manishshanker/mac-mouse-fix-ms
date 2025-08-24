//
// --------------------------------------------------------------------------
// AppDelegate.m
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2019
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import "AppDelegate.h"
#import "DeviceManager.h"

@interface AppDelegate ()
@property (strong) IBOutlet NSWindow *addedWindow;
@end

@implementation AppDelegate

- (void)applicationDidFinishLaunching:(NSNotification *)notification {
    /// The effective entry point of this app is at [AccessibilityCheck load]
}

- (void)applicationWillTerminate:(NSNotification *)notification {
    /// This doesn't seem to get called when the Helper is terminated through launchd.
    /// Instead use `signal_handler` in `AccessibiltyCheck` to catch SIGTERM.
    
}

@end
