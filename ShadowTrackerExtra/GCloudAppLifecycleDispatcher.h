//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GCloudAppLifecycleDispatcher : NSObject
{
}

+ (void)load;
- (unsigned long long)gcloud_application:(id)arg1 supportedInterfaceOrientationsForWindow:(id)arg2;
- (_Bool)gcloud_application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(CDUnknownBlockType)arg3;
- (void)gcloud_application:(id)arg1 didReceiveLocalNotification:(id)arg2;
- (void)gcloud_application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)gcloud_application:(id)arg1 didReceiveRemoteNotification:(id)arg2 fetchCompletionHandler:(CDUnknownBlockType)arg3;
- (void)gcloud_application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)gcloud_application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (void)gcloud_applicationDidReceiveMemoryWarning:(id)arg1;
- (void)gcloud_applicationWillTerminate:(id)arg1;
- (void)gcloud_applicationWillResignActive:(id)arg1;
- (void)gcloud_applicationDidBecomeActive:(id)arg1;
- (void)gcloud_applicationWillEnterForeground:(id)arg1;
- (void)gcloud_applicationDidEnterBackground:(id)arg1;
- (_Bool)gcloud_application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)gcloud_application:(id)arg1 openURL:(id)arg2 options:(id)arg3;
- (_Bool)gcloud_handleOpenURL:(id)arg1;
- (_Bool)gcloud_application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;

@end

