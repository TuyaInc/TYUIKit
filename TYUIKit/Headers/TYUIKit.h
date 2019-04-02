//
//  TYUIKit.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/12/20.
//

#ifndef TYUIKit_h
#define TYUIKit_h

#import "UIColor+TYCategory.h"
#import "UIDevice+TYCategory.h"
#import "UIImage+TYCategory.h"
#import "UIScreen+TYCategory.h"
#import "UIView+TYCategory.h"
#import "UIFont+TYCategory.h"

#import "TYImpactEngine.h"
#import "TYSegmentedControl.h"

#if __has_include(<TYNavigationController/UIViewController+TYNavigation.h>)
#import <TYNavigationController/UIViewController+TYNavigation.h>
#elif __has_include("UIViewController+TYNavigation.h")
#import "UIViewController+TYNavigation.h"
#endif

#endif /* TYUIKit_h */
