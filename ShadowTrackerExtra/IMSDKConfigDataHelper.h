//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface IMSDKConfigDataHelper : NSObject
{
}

+ (id)checkConfigSignValidity:(id)arg1;
+ (void)resetConfigs;
+ (_Bool)isFunctionDisable:(id)arg1;
+ (id)getLocalConfig;
+ (void)serverRefreshConfig:(id)arg1 isAllUpdate:(_Bool)arg2;
+ (void)userRefreshConfig:(id)arg1 isAllUpdate:(_Bool)arg2;
+ (void)refreshConfig:(id)arg1 isAllUpdate:(_Bool)arg2 withType:(long long)arg3;
+ (id)getLocalSign;
+ (void)saveSign:(id)arg1;

@end

