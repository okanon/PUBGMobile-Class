//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, VLConfigModel;
@protocol OS_dispatch_queue;

@interface VLEventLogHandler : NSObject
{
    _Bool _waitingToRequest;
    _Bool _isRequesting;
    VLConfigModel *_config;
    NSObject<OS_dispatch_queue> *_workerQueue;
    NSMutableArray *_eventLogs;
}

+ (id)sharedHandler;
@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) _Bool waitingToRequest; // @synthesize waitingToRequest=_waitingToRequest;
@property(retain, nonatomic) NSMutableArray *eventLogs; // @synthesize eventLogs=_eventLogs;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(nonatomic) __weak VLConfigModel *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)requestFinished:(id)arg1;
- (void)sendRequest;
- (void)triggerRequestIfNeed;
- (void)reportMediaClick:(id)arg1 ext:(id)arg2;
- (void)addEvent:(long long)arg1 itemId:(id)arg2 itemSub:(id)arg3 indexId:(id)arg4 subId:(id)arg5 questionId:(id)arg6 answerId:(id)arg7 moduleId:(id)arg8 ext:(id)arg9;
- (void)addEvent:(long long)arg1 itemId:(id)arg2 itemSub:(id)arg3 indexId:(id)arg4 subId:(id)arg5 ext:(id)arg6;
- (void)addClickEvent:(id)arg1 itemSub:(id)arg2 indexId:(id)arg3 subId:(id)arg4 questionId:(id)arg5 answerId:(id)arg6 ext:(id)arg7;
- (void)addExposureEvent:(id)arg1 itemSub:(id)arg2 indexId:(id)arg3 subId:(id)arg4 questionId:(id)arg5 answerId:(id)arg6 ext:(id)arg7;
- (void)clearReports;
- (id)init;

@end

