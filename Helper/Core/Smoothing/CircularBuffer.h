//
// --------------------------------------------------------------------------
// CircularBufferObjc.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CircularBuffer<T> : NSObject

- (instancetype)init NS_UNAVAILABLE;
- (instancetype)initWithCapacity:(NSInteger)n;

- (void)reset;
- (void)add:(T)obj;
- (NSArray<T> *)content;

- (NSInteger)capacity;
- (NSInteger)filled;

@end

NS_ASSUME_NONNULL_END
