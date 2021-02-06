/**
 * titanium-firebase-cloud-messaging
 *
 * Created by Hans Knoechel
 * Copyright (c) 2017 Your Company. All rights reserved.
 */

#import "TiModule.h"
#import <UserNotifications/UserNotifications.h>

@import FirebaseMessaging;

@interface FirebaseCloudmessagingModule : TiModule<FIRMessagingDelegate, UIApplicationDelegate, UNUserNotificationCenterDelegate>

- (NSString *)fcmToken;

- (void)setApnsToken:(NSString *)apnsToken;

- (void)appDidReceiveMessage:(id)arguments;

- (void)subscribeToTopic:(id)topic;

- (void)unsubscribeFromTopic:(id)topic;

- (void)fetchToken:(id)callback;

- (void)deleteToken:(id)callback;

- (void)deleteTokenForSenderID:(id)args;

@end
