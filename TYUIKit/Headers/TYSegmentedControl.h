//
//  TYSegmentedControl
//  Forked from HMSegmentedControl https://github.com/HeshamMegid/HMSegmentedControl
//

#import <UIKit/UIKit.h>
#import "TYSegmentCell.h"

@class TYSegmentedControl;

typedef enum : NSUInteger {
    TYSegmentIndicatorStyleLine,
    TYSegmentIndicatorStyleNone
} TYSegmentIndicatorStyle;

typedef enum : NSUInteger {
    TYSegmentIndicatorAnimationTranslate,
    TYSegmentIndicatorAnimationExtend
} TYSegmentIndicatorAnimation;


typedef enum : NSUInteger {
    TYSegmentIndicatorPositionTop,
    TYSegmentIndicatorPositionBottom
} TYSegmentIndicatorPosition;

typedef enum : NSUInteger {
    TYSegmentAlignmentLeft,
    TYSegmentAlignmentCenter,
    TYSegmentAlignmentRight
} TYSegmentAlignment;

typedef CGFloat TYSegmentLength;

extern TYSegmentLength const TYSegmentLengthDynamic;

@protocol TYSegmentControlDelegate <NSObject>

- (void)segmentedControl:(TYSegmentedControl *)segmentControl didSelectAtIndex:(NSInteger)index;

@end

@interface TYSegmentedControl : UIView

#pragma mark - TYSegmentedControl

@property (nonatomic, strong, nullable) UIScrollView *contentScrollView;

/** Default is 0 index */
@property (nonatomic, assign) NSInteger    defaultSelectedIndex;

/** Default is 0.f */
@property (nonatomic, assign) CGFloat      contentEdgeInsetLeft;

/** Default is 0.f */
@property (nonatomic, assign) CGFloat      contentEdgeInsetRight;

/**
 when content's size.width < self.width, the alignment of content
 Default: TYSegmentAlignmentLeft
 */
@property (nonatomic, assign) TYSegmentAlignment         contentAlignment;

@property (nonatomic, weak) id<TYSegmentControlDelegate> delegate;

@property (nonatomic, assign, readonly) NSInteger        selectedIndex;

@property (nonatomic, strong, readonly) UICollectionView *collectionView;


#pragma mark - item properties

@property (nonatomic, assign) CGFloat itemWidthIncrement;

@property (nonatomic, assign) CGFloat itemSpacing;

@property (nonatomic, assign) BOOL    averageCellSpacingEnabled;

@property (nonatomic, assign) BOOL    itemWidthZoomScrollGradientEnabled;

@property (nonatomic, assign) BOOL    selectedAnimationEnabled;


@property (nonatomic, assign) TYSegmentLength itemWidth;

@property (nonatomic, assign) NSTimeInterval  selectedAnimationDuration;

#pragma mark - indicator properties

@property (nonatomic, assign) CGFloat         indicatorVerticalOffset;

@property (nonatomic, strong) UIColor         *indicatorColor;

@property (nonatomic, assign) TYSegmentLength indicatorWidth;

@property (nonatomic, assign) TYSegmentLength indicatorLineViewHeight;

@property (nonatomic, assign) TYSegmentIndicatorStyle    indicatorStyle;

@property (nonatomic, assign) TYSegmentIndicatorPosition indicatorPosition;


#pragma mark - title properties

@property (nonatomic, strong) NSArray <NSString *> *titles;

@property (nonatomic, strong) UIFont   *titleFont;

@property (nonatomic, strong) UIColor  *titleColor;

@property (nonatomic, strong) UIFont   *titleSelectedFont;

@property (nonatomic, strong) UIColor  *titleSelectedColor;

@property (nonatomic, assign) BOOL    titleLabelMaskEnabled;

@property (nonatomic, assign) BOOL    titleLabelZoomEnabled;

@property (nonatomic, assign) BOOL    titleLabelStrokeWidthEnabled;

@property (nonatomic, assign) CGFloat titleLabelSelectedStrokeWidth;

@property (nonatomic, assign) BOOL    titleColorGradientEnabled;

@property (nonatomic, assign) BOOL    titleLabelZoomScrollGradientEnabled;

#pragma mark - seperateor properties

@property (nonatomic, assign) CGSize  separatorLineSize;

@property (nonatomic, strong) UIColor *separatorLineColor;

@property (nonatomic, assign) BOOL    separatorLineShowEnabled;

#pragma mark - background color properties

@property (nonatomic, strong) UIColor *cellBackgroundSelectedColor;

@property (nonatomic, strong) UIColor *cellBackgroundUnselectedColor;

@property (nonatomic, assign) BOOL    cellBackgroundColorGradientEnabled;


/**
 Select at index
 will not tiger delegate callback

 @param index index
 */
- (void)selectAtIndex:(NSInteger)index;

/**
 Select at index
 will tiger delegate callback
 
 @param index index
 */
- (void)clickSelectItemAtIndex:(NSInteger)index;

/**
 Select at index
 only type is TYSegmentItemSelectTypeClick, will tiger delegate callback
 
 @param index index
 */
- (void)selectCellAtIndex:(NSInteger)index selectedType:(TYSegmentItemSelectType)TYSegmentItemSelectTypeScroll;

@end


