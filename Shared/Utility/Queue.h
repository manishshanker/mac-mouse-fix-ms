//
// --------------------------------------------------------------------------
// Queue.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2020
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Queue<T> : NSObject
+ (Queue<T> *)queue;
- (void)enqueue:(T)obj;
- (T)dequeue;
- (T)peek;
- (BOOL)isEmpty;
- (int64_t)count;
@end

NS_ASSUME_NONNULL_END
