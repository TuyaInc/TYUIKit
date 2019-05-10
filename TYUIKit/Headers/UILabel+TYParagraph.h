//
//  UILabel+TYParagraph.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UILabel (TYParagraph)

@property (nonatomic) CGFloat ty_lineSpace;
@property (nonatomic) CGFloat ty_wordSpace;

@property (nonatomic, strong) NSMutableParagraphStyle *ty_paragraphStyle;

- (void)ty_refreshParagraphStyleImmediately;

@end

NS_ASSUME_NONNULL_END
