//
//  TYSearchControllerAppearance.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/2/11.
//

#import <Foundation/Foundation.h>

#import "TYSearchBarAppearance.h"

NS_ASSUME_NONNULL_BEGIN

@interface TYSearchControllerAppearance : NSObject

@property (nonatomic, strong) TYSearchBarAppearance *searchBarAppearance;

@property (nonatomic) UIEdgeInsets searchBarBoundsInsets;

+ (instancetype)appearance;

@end

NS_ASSUME_NONNULL_END
