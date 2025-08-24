//
// --------------------------------------------------------------------------
// NSDictionary+Additions.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2020
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSDictionary (Additions)
- (NSObject * _Nullable)objectForCoolKeyPath:(NSString *)keyPath;
+ (NSMutableDictionary *)doDeepMutateDictionary:(NSDictionary *)dict;
@end

@interface NSMutableDictionary (Additions)
- (void)removeObjectForCoolKeyPath:(NSString *)keyPath;
- (void)setObject:(NSObject * _Nullable)object forCoolKeyPath:(NSString *)keyPath;
- (void)setObject:(NSObject * _Nullable)object forCoolKeyArray:(NSArray *)keys;
@end

NS_ASSUME_NONNULL_END
