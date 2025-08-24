//
// --------------------------------------------------------------------------
// AppState.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface AppState : NSObject

AppState *appState(void);

// This is set to YES by SparkleUpdaterDelegate, if the app was launched through Sparkle updater.
//  So if this is YES then this is the first launch after an update.
@property BOOL updaterDidRelaunchApplication;

@end

NS_ASSUME_NONNULL_END
