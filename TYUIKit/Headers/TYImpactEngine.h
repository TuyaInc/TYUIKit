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

 @param style UIImpactFeedbackStyle
 */
+ (void)impactWithStyle:(UIImpactFeedbackStyle)style NS_AVAILABLE_IOS(10_0);

@end

