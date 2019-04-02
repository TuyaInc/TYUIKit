//
//  TYImpactEngine.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/1/7.
//

#import <Foundation/Foundation.h>

@interface TYImpactEngine : NSObject

/**
 A wrapper of UIImpactFeedbackGenerator.
 working with iOS10+

 @param style UIImpactFeedbackStyle
 */
+ (void)impactWithStyle:(UIImpactFeedbackStyle)style;

@end

