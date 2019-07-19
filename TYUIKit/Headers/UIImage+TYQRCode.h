//
//  UIImage+TYQRCode.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/5/11.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIImage (TYQRCode)

+ (UIImage *)ty_qrCodeWithString:(NSString *)str width:(CGFloat)width;

@end

NS_ASSUME_NONNULL_END
