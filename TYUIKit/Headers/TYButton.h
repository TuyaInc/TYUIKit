//
//  TYButton.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/7/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef enum : NSUInteger {
    TYButtonImageLocationLeft,
    TYButtonImageLocationRight,
    TYButtonImageLocationTop,
    TYButtonImageLocationBottom
} TYButtonImageLocation;


@interface TYButton : UIButton

@property (nonatomic) TYButtonImageLocation ty_imageLocation;
@property (nonatomic) CGFloat ty_imageTitleSpace;   /**< space between image and title */

@end

NS_ASSUME_NONNULL_END
