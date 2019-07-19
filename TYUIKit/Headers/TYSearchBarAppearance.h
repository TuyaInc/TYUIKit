//
//  TYSearchBarAppearance.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/2/11.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYSearchBarAppearance : NSObject

/*
 Be careful to use insets
 UISearchBar height is 44 in iOS 10 less, but 56 in iOS11.0+
 */
@property (nonatomic, strong) UIColor *backgroundColor;
@property (nonatomic, strong) UIColor *separatorColor;
@property (nonatomic) CGFloat separatorHeight;
@property (nonatomic) BOOL translucent;

@property (nonatomic, strong) UIColor *tintColor;
@property (nonatomic, copy) NSString *placeholder;

@property (nonatomic) UIEdgeInsets searchFieldInsets;
@property (nonatomic, strong) UIColor *searchFieldBackgroundColor;
@property (nonatomic) CGFloat searchFieldCorner;    /**< -1 menus use system default */

@property (nonatomic, strong) UIFont *searchTextFont;
@property (nonatomic, strong) UIColor *searchTextColor;
@property (nonatomic) UIOffset searchTextOffset;

@property (nonatomic) UIEdgeInsets cancelButtonInsets;
@property (nonatomic, strong) UIFont *cancelButtonFont;
@property (nonatomic, strong) UIColor *cancelButtonNormalColor;
@property (nonatomic, strong) UIColor *cancelButtonHighlightColor;
@property (nonatomic, strong) UIColor *cancelButtonDisableColor;

/**
 AccessibilityIdentifier of search bar, default is @"search"
 */
@property (nonatomic, strong) NSString *searchAccessibilityIdentifier;
/**
 AccessibilityIdentifier of search cancel button, default is @"search_cancel"
 */
@property (nonatomic, strong) NSString *cancelAccessibilityIdentifier;

+ (instancetype)appearance;

@end

NS_ASSUME_NONNULL_END
