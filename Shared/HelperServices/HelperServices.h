//
// --------------------------------------------------------------------------
// HelperServices.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2019
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface HelperServices : NSObject

+ (void)disableHelperFromHelper;

+ (BOOL)helperIsActive;
+ (void)enableHelperAsUserAgent:(BOOL)enable onComplete:(void (^ _Nullable)(NSError * _Nullable error))onComplete NS_SWIFT_NAME(enableHelperAsUserAgent(_:onComplete:));

+ (void)killAllHelpers;

+ (void)restartHelperWithDelay:(double)delay;
+ (NSDate *)possibleRestartTime;

//BOOL buildNumberMatchesMainApp(NSString *buildNumber);

+ (NSString *)launchHelperInstanceWithMessage:(NSString *)message;

@end

#define MFHelperServicesErrorDomain @"MFHelperServicesErrorDomain"
typedef enum {
    kMFHelperServicesErrorEnableFromHelper,
//    kMFHelperServicesErrorMismatchedHelper
} MFHelperServicesError;

NS_ASSUME_NONNULL_END
