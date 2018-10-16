//
//  TPNavigationController.m
//  TYLibraryExample
//
//  Created by Tuya on 16/2/18.
//  Copyright © 2016年 Tuya. All rights reserved.
//

#import "TPNavigationController.h"

@interface TPNavigationController() <UINavigationControllerDelegate>

@property (nonatomic, assign) BOOL isDisable;

@end

@implementation TPNavigationController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.delegate = self;
}

- (void)pushViewController:(UIViewController *)viewController animated:(BOOL)animated {
     if (self.childViewControllers.count > 0) {
         viewController.hidesBottomBarWhenPushed = YES;
     }
    
    [super pushViewController:viewController animated:animated];
    
    // iPhoneX等刘海屏手机，在push和pop的时候，有可能出现tabbar上移的情况
    CGRect frame = self.tabBarController.tabBar.frame;
    frame.origin.y = [UIScreen mainScreen].bounds.size.height - frame.size.height;
    self.tabBarController.tabBar.frame = frame;
}

- (void)navigationController:(UINavigationController *)navigationController didShowViewController:(UIViewController *)viewController animated:(BOOL)animated {
    
    
    if (!_isDisable) {
        // 自定义返回按钮时候需要处理
        if (viewController == self.viewControllers[0]) {
            self.interactivePopGestureRecognizer.delegate = nil;
            // 不失效的话有问题
            self.interactivePopGestureRecognizer.enabled = NO;
            
        } else {
            self.interactivePopGestureRecognizer.delegate = (id)self;
            self.interactivePopGestureRecognizer.enabled = YES;
        }
    } else {
        self.interactivePopGestureRecognizer.delegate = nil;
        // 不失效的话有问题
        self.interactivePopGestureRecognizer.enabled = NO;
    }
}

- (void)enablePopGesture {
    _isDisable = NO;
    self.interactivePopGestureRecognizer.delegate = (id)self;
    self.interactivePopGestureRecognizer.enabled = YES;
}

- (void)disablePopGesture {
    _isDisable = YES;
    self.interactivePopGestureRecognizer.delegate = nil;
    self.interactivePopGestureRecognizer.enabled = NO;
}

- (UIViewController *)childViewControllerForStatusBarStyle {
    return self.topViewController;
}

- (UIViewController *)childViewControllerForStatusBarHidden {
    return self.topViewController;
}

- (BOOL)shouldAutorotate {
    return [self.topViewController shouldAutorotate];
}

- (UIInterfaceOrientationMask)supportedInterfaceOrientations {
    return [self.topViewController supportedInterfaceOrientations];
}

@end
