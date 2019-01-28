//
//  UIScreen+TYFrame.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/12/20.
//

#import <UIKit/UIKit.h>

#pragma mark - NotchScreen
/**
 @return iPhone with Notch Screen ? Like iPhoneX
 */
extern BOOL TY_IsNotchScreen(void);

#pragma mark - ScreenSize
/**
 @return [UIScreen mainScreen].bounds
 */
extern CGRect TY_ScreenBounds(void);
/**
 @return [UIScreen mainScreen].bounds.size.width
 */
extern CGFloat TY_ScreenWidth(void);
/**
 @return [UIScreen mainScreen].bounds.size.height
 */
extern CGFloat TY_ScreenHeight(void);

#pragma mark - SareArea
/**
 @return [UIApplication sharedApplication].keyWindow.safeAreaInsets
 */
extern UIEdgeInsets TY_ScreenSafeInsets(void);
/**
 @return [UIApplication sharedApplication].keyWindow.safeAreaInsets.top
 */
extern CGFloat TY_ScreenSafeTop(void);
/**
 @return [UIApplication sharedApplication].keyWindow.safeAreaInsets.bottom
 */
extern CGFloat TY_ScreenSafeBottom(void);

#pragma mark - NaviBarHeight / TabBarHeight
extern CGFloat TY_NaviBarHeight(void);
extern CGFloat TY_TabBarHeight(void);
