//
// --------------------------------------------------------------------------
// IOUtility.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import <IOKit/hidsystem/IOHIDServiceClient.h>

NS_ASSUME_NONNULL_BEGIN

@interface IOUtility : NSObject

+ (void)iterateParentsOfEntry:(io_registry_entry_t)entry forEach:(Boolean (^)(io_registry_entry_t))workload;
+ (io_registry_entry_t)createChildOfRegistryEntry:(io_registry_entry_t)entry withName:(NSString *)name;
+ (void)afterDelay:(double)delay runBlock:(void(^)(void))block;
+ (NSString *)registryPathForServiceClient:(IOHIDServiceClientRef)service;
@end

NS_ASSUME_NONNULL_END
