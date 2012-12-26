//
//  SSAppDelegate.h
//  SSSDK
//
//  Created by 刘 佳 on 12-12-26.
//  Copyright (c) 2012年 刘 佳. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SSViewController;

@interface SSAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) SSViewController *viewController;

@end
