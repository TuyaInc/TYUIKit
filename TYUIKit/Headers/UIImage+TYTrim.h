//
//  UIImage+TYTrim.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/12/20.
//

#import <UIKit/UIKit.h>

@interface UIImage (TYTrim)

#pragma mark - Resize
- (UIImage *)ty_imageApplyingScale:(CGFloat)scale;
- (UIImage *)ty_imageApplyingSize:(CGSize)newSize;
- (UIImage *)ty_imageApplyingSize:(CGSize)newSize withCntentMode:(UIViewContentMode)contentMode;

#pragma mark - Crop
- (UIImage *)ty_imageApplyingCropRect:(CGRect)rect;

#pragma mark - Corner/Border
- (UIImage *)ty_imageApplyingCornerRadius:(CGFloat)radius;
- (UIImage *)ty_imageApplyingCornerRadius:(CGFloat)radius withBorderWidth:(CGFloat)borderWidth borderColor:(UIColor *)borderColor;

#pragma mark - Rotation
- (UIImage *)ty_imageApplyingHorizontalFlip;
- (UIImage *)ty_imageApplyingVerticalFlip;

#pragma mark - TintColor
- (UIImage *)ty_imageApplyingTintColor:(UIColor *)color;

#pragma mark - Alpha
- (UIImage *)ty_imageApplyingAlpha:(CGFloat)alpha;



@end
