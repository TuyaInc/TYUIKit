//
//  UIColor+TYHex.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/12/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @param hex             like 0x00FF00, 0xFFFFF
 */
extern UIColor * TY_HexColor(NSInteger hex);


@interface UIColor (TYHex)

/**
 * @param hex           like 0x00FF00, 0xFFFFF
 */
+ (UIColor *)ty_colorWithHex:(NSUInteger)hex;
/**
 * @param hex           like 0xFFFFF
 * @param alpha         0 <= alpha <= 1
 */
+ (UIColor *)ty_colorWithHex:(NSInteger)hex alpha:(CGFloat)alpha;

/**
 * @param hexString     like "#FF00FF00", "#00FF00"
 */
+ (UIColor *)ty_colorWithStringHex:(NSString *)hexString;
/**
 * @param hexString     like "#00FF00"
 * @param alpha         0 <= alpha <= 1
 */
+ (UIColor *)ty_colorWithStringHex:(NSString *)hexString alpha:(CGFloat)alpha;

@end

NS_ASSUME_NONNULL_END
