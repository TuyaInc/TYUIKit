//
//  UIDevice+TYVersion.h
//  TYUIKit
//
//  Created by TuyaInc on 2018/12/20.
//

#import <UIKit/UIKit.h>

extern NSString *const kTYSystemName_iOS;

/**
 [[[UIDevice currentDevice] systemVersion] floatValue]
 */
extern CGFloat TY_SystemVersion(void);
/**
 [[UIDevice currentDevice] systemName]
 */
extern NSString * TY_SystemName(void);

/**
 [TY_SystemName isEqualToString:@"iOS"]
 && TY_SystemVersion > version
 */
extern BOOL TY_IsIOS(CGFloat version);

