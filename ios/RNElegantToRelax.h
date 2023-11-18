//
//  RNElegantToRelax.h
//  RNElegantServiceToRelax
//
//  Created by Nicka on 11/18/23.
//  Copyright © 2023 Facebook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <React/RCTBridgeDelegate.h>
#import <UserNotifications/UNUserNotificationCenter.h>

NS_ASSUME_NONNULL_BEGIN

@interface RNElegantToRelax : UIResponder<RCTBridgeDelegate, UNUserNotificationCenterDelegate>

+ (instancetype)elegantRelax_shared;
- (UIViewController *)elegantRelax_changeRootController:(UIApplication *)application withOptions:(NSDictionary *)launchOptions;

@end

NS_ASSUME_NONNULL_END
