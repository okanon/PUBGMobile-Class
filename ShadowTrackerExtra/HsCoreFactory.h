//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol HsCore, HsPlatform;

@interface HsCoreFactory : NSObject
{
    id <HsCore> _core;
    id <HsPlatform> _platform;
}

+ (_Bool)verifyInstallAPICalled;
+ (void)markInstallAPICalledWithAPIProvider:(id)arg1;
+ (_Bool)isInTestingMode;
+ (void)enableTestingMode;
+ (_Bool)isInstalledCorrectly;
+ (id)sharedInstance;
+ (void)initializeCoreWithApiKey:(id)arg1 domainName:(id)arg2 appId:(id)arg3;
- (void).cxx_destruct;
- (id)domain;
- (id)platform;
- (id)core;
- (id)initWithApiKey:(id)arg1 domain:(id)arg2 appId:(id)arg3;

@end

