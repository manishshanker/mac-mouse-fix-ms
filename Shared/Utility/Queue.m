//
// --------------------------------------------------------------------------
// Queue.m
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2020
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import "Queue.h"

@implementation Queue

NSMutableArray *_storage;

+ (id)queue {
    return [[Queue alloc] init];
}

- (instancetype)init
{
    self = [super init];
    if (self) {
        _storage = [NSMutableArray array];
    }
    return self;
}

- (void)enqueue:(id)obj {
    [_storage insertObject:obj atIndex:0];
}
- (id)dequeue {
    id obj = [_storage lastObject];
    [_storage removeLastObject];
    return obj;
}
- (id)peek {
    return [_storage lastObject];
}
- (BOOL)isEmpty {
    return _storage.count == 0;
}
- (int64_t)count {
    return _storage.count;
}
@end
