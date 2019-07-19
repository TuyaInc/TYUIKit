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
UIKIT_EXTERN BOOL TY_IsNotchScreen(void);

#pragma mark - ScreenSize
/**
 @return [UIScreen mainScreen].bounds
 */
UIKIT_EXTERN CGRect TY_ScreenBounds(void);
/**
 @return [UIScreen mainScreen].bounds.size.width
 */
UIKIT_EXTERN CGFloat TY_ScreenWidth(void);
/**
 @return [UIScreen mainScreen].bounds.size.height
 */
UIKIT_EXTERN CGFloat TY_ScreenHeight(void);

#pragma mark - SareArea
/**
 @return [UIApplication sharedApplication].keyWindow.safeAreaInsets
 */
UIKIT_EXTERN UIEdgeInsets TY_ScreenSafeInsets(void);
/**
 @return [UIApplication sharedApplication].keyWindow.safeAreaInsets.top
 */
UIKIT_EXTERN CGFloat TY_ScreenSafeTop(void);
/**
 @return [UIApplication sharedApplication].keyWindow.safeAreaInsets.bottom
 */
UIKIT_EXTERN CGFloat TY_ScreenSafeBottom(void);

#pragma mark - NaviBarHeight / StatusBarHeight / TabBarHeight
UIKIT_EXTERN CGFloat TY_NaviBarHeight(void);
UIKIT_EXTERN CGFloat TY_StatusBarHeight(void);
UIKIT_EXTERN CGFloat TY_TabBarHeight(void);

#pragma mark - ScreenAdaption
/**
 adapt to 375.0
 */
UIKIT_EXTERN CGFloat TY_ScreenAdaptionLength(CGFloat length);
UIKIT_EXTERN CGPoint TY_ScreenAdaptionPoint(CGPoint point);
UIKIT_EXTERN CGSize TY_ScreenAdaptionSize(CGSize size);
UIKIT_EXTERN CGRect TY_ScreenAdaptionRect(CGRect rect);
