//
//  UIImage+TYColor.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/11/27.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (TYColor)

+ (UIImage *)ty_imageWithColor:(UIColor *)color;
+ (UIImage *)ty_imageWithColor:(UIColor *)color size:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
