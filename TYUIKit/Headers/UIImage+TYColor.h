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

/**
 Available After TuyaSmart 3.9.0+
 */
+ (UIImage *)ty_imageWithGradient:(CAGradientLayerType)type colors:(NSArray<UIColor *> *)colors locations:(NSArray<NSNumber *> *)locations startPoint:(CGPoint)start endPoint:(CGPoint)end size:(CGSize)size;

@end

NS_ASSUME_NONNULL_END
