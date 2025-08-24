//
// --------------------------------------------------------------------------
// ButtonModifiers.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2022
// Licensed under Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import "Constants.h"

NS_ASSUME_NONNULL_BEGIN

@interface ButtonModifiers : NSObject

- (void)updateWithButton:(MFMouseButtonNumber)button clickLevel:(NSInteger)clickLevel downNotUp:(BOOL)mouseDown;
- (void)killButton:(MFMouseButtonNumber)button;

@end

NS_ASSUME_NONNULL_END
