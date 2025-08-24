//
// --------------------------------------------------------------------------
// RemapTableUtility.h
// Created for Mac Mouse Fix (https://github.com/manishshanker/mac-mouse-fix-activated)
// Created by Noah mshank in 2021
// Licensed under the MMF License (https://github.com/manishshanker/mac-mouse-fix-activated/blob/master/License)
// --------------------------------------------------------------------------
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>
#import "Constants.h"


NS_ASSUME_NONNULL_BEGIN

@interface RemapTableUtility : NSObject

+ (NSInteger)rowOfCell:(NSTableCellView *)cell inTableView:(NSTableView *)tv;
+ (MFMouseButtonNumber)triggerButtonForRow:(NSDictionary *)rowDict;
+ (NSPopUpButton *)getPopUpButtonAtRow:(NSUInteger)popUpRow fromTableView:(NSTableView *)tv;
+ (NSDictionary *)buttonGroupRowDict;
+ (NSInteger)baseDataModelIndexFromGroupedDataModelIndex:(NSInteger)groupedModelIndex withGroupedDataModel:(NSArray *)groupedDataModel;
+ (NSSet<NSNumber *> *)getCapturedButtons;
@end

NS_ASSUME_NONNULL_END
