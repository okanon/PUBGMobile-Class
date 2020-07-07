//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class APMAlarm, APMPersistedConfig;

@interface APMSearchAdReporter : NSObject
{
    APMAlarm *_searchAdReporterAlarm;
    APMPersistedConfig *_persistedConfig;
    _Bool _searchAdReporterEnabled;
}

@property(nonatomic, getter=isSearchAdReporterEnabled) _Bool searchAdReporterEnabled; // @synthesize searchAdReporterEnabled=_searchAdReporterEnabled;
- (void).cxx_destruct;
- (void)lookUpAdConversionDetails;
- (void)logCampaignEventWithSearchAdCampaign:(_Bool)arg1 campaign:(id)arg2 term:(id)arg3;
- (id)adClientInstance;
- (void)cancelScheduling;
- (void)scheduleSearchAdReport;
- (void)maybeLogIAdCampaignEvent;
- (void)dealloc;
- (void)start;
- (id)initWithWorkerQueue:(id)arg1 persistedConfig:(id)arg2;

@end

