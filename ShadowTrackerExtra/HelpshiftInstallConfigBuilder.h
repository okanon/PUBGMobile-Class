//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary;

@interface HelpshiftInstallConfigBuilder : NSObject
{
    _Bool _enableDefaultFallbackLanguage;
    _Bool _disableEntryExitAnimations;
    _Bool _enableInboxPolling;
    _Bool _enableInAppNotifications;
    _Bool _enableLogging;
    _Bool _enableAutomaticThemeSwitching;
    _Bool _disableAutomaticPushHandling;
    int _addFaqsToDeviceSearch;
    NSDictionary *_extraConfig;
}

@property(retain, nonatomic) NSDictionary *extraConfig; // @synthesize extraConfig=_extraConfig;
@property(nonatomic) _Bool disableAutomaticPushHandling; // @synthesize disableAutomaticPushHandling=_disableAutomaticPushHandling;
@property(nonatomic) _Bool enableAutomaticThemeSwitching; // @synthesize enableAutomaticThemeSwitching=_enableAutomaticThemeSwitching;
@property(nonatomic) int addFaqsToDeviceSearch; // @synthesize addFaqsToDeviceSearch=_addFaqsToDeviceSearch;
@property(nonatomic) _Bool enableLogging; // @synthesize enableLogging=_enableLogging;
@property(nonatomic) _Bool enableInAppNotifications; // @synthesize enableInAppNotifications=_enableInAppNotifications;
@property(nonatomic) _Bool enableInboxPolling; // @synthesize enableInboxPolling=_enableInboxPolling;
@property(nonatomic) _Bool disableEntryExitAnimations; // @synthesize disableEntryExitAnimations=_disableEntryExitAnimations;
@property(nonatomic) _Bool enableDefaultFallbackLanguage; // @synthesize enableDefaultFallbackLanguage=_enableDefaultFallbackLanguage;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end

