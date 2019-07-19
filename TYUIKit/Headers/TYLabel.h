//
//  TYLabel.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/5/13.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYLabel : UILabel

#pragma mark - EdgeInsets
@property (nonatomic) UIEdgeInsets ty_edgeInsets;


#pragma ParagraphStyle
@property (nonatomic) CGFloat ty_lineSpace;
@property (nonatomic) CGFloat ty_wordSpace;

@property (nonatomic, strong) NSMutableParagraphStyle *ty_paragraphStyle;

- (void)ty_refreshParagraphStyleImmediately;

@end

NS_ASSUME_NONNULL_END
