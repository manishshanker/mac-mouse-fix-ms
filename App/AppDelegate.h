//
// --------------------------------------------------------------------------
// AppDelegate.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2019
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <PreferencePanes/PreferencePanes.h>
//#import "MoreSheet.h"
#import "OverridePanel.h"
#import "RemapTableController.h"
#import "RemapTableView.h"
#import "AppState.h"

@interface AppDelegate : NSObject<NSApplicationDelegate, NSWindowDelegate>

+ (AppDelegate *)instance;

@end
