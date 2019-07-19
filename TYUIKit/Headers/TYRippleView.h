//
//  TYRippleView.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/11/6.
//

#import <UIKit/UIKit.h>

@class TYRippleView;

@protocol TYRippleLayerProtocol <NSObject>

@required
+ (instancetype)layer;
- (CAAnimation *)lifeAnimationForLayer:(CGFloat)lifeTime withRippleView:(TYRippleView *)rippleView;

@end

@protocol TYRippleViewDelegateProtocol <NSObject>

- (void)rippleView:(TYRippleView *)rippleView willLaunchLayer:(CALayer<TYRippleLayerProtocol> *)layer;

@end

@interface TYRippleView : UIView

@property (nonatomic, weak) id<TYRippleViewDelegateProtocol> delegate;

/**
 波纹的类
 需要遵循 TYRippleLayerProtocol
 当没有可用的波纹时，会通过 +layer 方法创建
 */
@property (nonatomic, strong) Class<TYRippleLayerProtocol> rippleLayerClass;

/**
 发射器的位置
 default: (0.5, 0.5)
 */
@property (nonatomic) CGPoint emitterLocation;
/**
 发射器的样式
 */
@property (nonatomic, strong) UIView *emitterView;

/**
 波纹的生存时间
 default: 5
 */
@property (nonatomic) CGFloat lifeTime;
/**
 多长时间发射一个
 default: 3.5
 */
@property (nonatomic) CGFloat birthRate;

/**
 按组发射时，一组的数量
 为 0 则按 birthRate 连续发射
 为 1 则按 groupDuration 连续发射
 */
@property (nonatomic) NSInteger groupCount;
/**
 每一组的总时间
 需满足 groupDuration >= birthRate * groupCount
 */
@property (nonatomic) CGFloat groupDuration;

@property (nonatomic, readonly) BOOL isWorking;

- (void)start;
- (void)stop;

@end
