//
//  UIColor+TYRGBA.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/12/20.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @param r 0~255
 @param g 0~255
 @param b 0~255
 @param a 0~255
 */
extern UIColor * TY_RGBAColor(CGFloat r, CGFloat g, CGFloat b, CGFloat a);
extern UIColor * TY_RGBColor(CGFloat r, CGFloat g, CGFloat b);

NS_ASSUME_NONNULL_END
