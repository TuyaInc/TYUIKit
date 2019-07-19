//
//  TYTextView.h
//  TYFoundationKit
//
//  Created by TuyaInc on 2019/5/16.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface TYTextView : UITextView

/**
 The string that is displayed when there is no other text in the text view. This property reads and writes the
 attributed variant.
 The default value is `nil`.
 */
@property (nonatomic, strong) NSString *placeholder;

/**
 The attributed string that is displayed when there is no other text in the text view.
 The default value is `nil`.
 */
@property (nonatomic, strong) NSAttributedString *attributedPlaceholder;

/**
 Returns the drawing rectangle for the text views’s placeholder text.
 @param bounds The bounding rectangle of the receiver.
 @return The computed drawing rectangle for the placeholder text.
 */
- (CGRect)placeholderRectForBounds:(CGRect)bounds;

@end

NS_ASSUME_NONNULL_END
