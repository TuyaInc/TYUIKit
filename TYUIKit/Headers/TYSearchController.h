//
//  TYSearchController.h
//  TYUIKit
//
//  Created by TuyaInc on 2019/1/23.
//


/*
 How to use TYSearchController
 
 Step1:
 @interface YourViewController : TYSearchController
 @end
 
 Step2:
 implement table data source in YourViewController.m
 
 Step3:
 Have fun 😉
 */

#import <UIKit/UIKit.h>

#if __has_include(<TYNavigationController/UIViewController+TYNavigation.h>)
#import <TYNavigationController/UIViewController+TYNavigation.h>
#elif __has_include("UIViewController+TYNavigation.h")
#import "UIViewController+TYNavigation.h"
#endif

#import "TYSearchBar.h"

#import "TYSearchControllerAppearance.h"

@class TYSearchController;

typedef enum : NSUInteger {
    TYSearchControllerStatus_Normal,        // normal data display
    TYSearchControllerStatus_Ready,         // search actived but no input
    TYSearchControllerStatus_Result,        // search result display
} TYSearchControllerStatus;

@protocol TYSearchReadyControllerProtocol <NSObject>

@property (nonatomic, weak) TYSearchController *searchController;

@optional
- (void)viewControllerWillAppearWithAnimation:(BOOL)animate;
- (void)viewControllerWillDisappearWithAnimation:(BOOL)animate;

- (void)viewControllerDidAppear;
- (void)viewControllerDidDisappear;

@end



NS_ASSUME_NONNULL_BEGIN

/**
 Available After TuyaSmart 3.9.0+
 */
@interface TYSearchController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, TYSearchBarDelegate>

/**
 disable searchTableClass config in TYSearchControllerAppearance
 default is NO
 */
@property (nonatomic) BOOL disableApperanceTableClass;

/**
 table use to display normal data
 tableView.delegate = self, tableView.dataSource = self
 */
@property (nonatomic, strong, readonly) UITableView *tableView;
@property (nonatomic) UITableViewStyle tableStyle;

/**
 searbar will add to table header view
 searbar.delegate = self
 */
@property (nonatomic, strong, readonly) TYSearchBar *searchBar;

@property (nonatomic, readonly) TYSearchControllerStatus searchStatus;

/**
 view controller to display for ready status
 default is black with transparent, set to nil can remove it
 */
@property (nonatomic, strong) __kindof UIViewController<TYSearchReadyControllerProtocol> * _Nullable searchReadyController;
/**
 view controller to display search result
 if search result controller is nil, will use self.tableView to display search result
 */
@property (nonatomic, strong) __kindof UIViewController<TYSearchReadyControllerProtocol> * _Nullable searchResultController;


#pragma mark - Callback
/**
 call back when search status changed
 */
- (void)searchControllerStatusDidChanged;

/**
 call back when search bar right button (like cancel button) initial
 cancel button will not create until it show
 */
- (void)searchControllerRightButtonInitial;

/**
 call back when init table, you can create table by yourself in this method and set with kvc key "_tableView"
 */
- (void)searchControllerTableViewInitial;

/**
 you can use keyboard notification to adjust your view controller contentInset
 */
- (void)searchControllerKeyboardWillShow:(NSNotification *)notif;
- (void)searchControllerKeyboardDidShow:(NSNotification *)notif;
- (void)searchControllerkeyboardWillHide:(NSNotification *)notif;
- (void)searchControllerKeyboardDidHide:(NSNotification *)notif;


#pragma mark - Methods Need Super
// if you override these methods in subclass, you have to call super

- (void)observeValueForKeyPath:(nullable NSString *)keyPath ofObject:(nullable id)object change:(nullable NSDictionary<NSKeyValueChangeKey, id> *)change context:(nullable void *)context NS_REQUIRES_SUPER;

- (void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate NS_REQUIRES_SUPER;

- (BOOL)searchBarShouldBeginEditing:(UISearchBar *)searchBar NS_REQUIRES_SUPER;
- (void)searchBarCancelButtonClicked:(UISearchBar *)searchBar NS_REQUIRES_SUPER;
- (void)searchBar:(UISearchBar *)searchBar textDidChange:(NSString *)searchText NS_REQUIRES_SUPER;

@end

NS_ASSUME_NONNULL_END
