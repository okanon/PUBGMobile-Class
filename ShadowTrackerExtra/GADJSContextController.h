//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADActiveViewContext, GADNativeAdContext, GADObserverCollection, GADSDKCoreContext, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface GADJSContextController : NSObject
{
    GADSDKCoreContext *_activeSDKCoreContext;
    GADSDKCoreContext *_nextSDKCoreContext;
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSMutableArray *_SDKCoreLoadCompletionHandlers;
    struct atomic_flag _SDKCoreContextLoadInProgress;
    GADObserverCollection *_SDKCoreObservers;
    GADObserverCollection *_observers;
    NSMutableDictionary *_SDKCoreContextReferencedIDs;
    _Bool _activeViewContextLoadInProgress;
    NSMutableArray *_activeViewLoadCompletionHandlers;
    double _lastSDKCoreRetryTime;
    long long _consecutiveSDKCoreTimeouts;
    struct atomic_flag _nativeAdContextLoadInProgress;
    NSMutableArray *_nativeAdLoadCompletionHandlers;
    GADActiveViewContext *_activeViewContext;
    GADNativeAdContext *_nativeAdContext;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) GADNativeAdContext *nativeAdContext; // @synthesize nativeAdContext=_nativeAdContext;
@property(readonly, nonatomic) GADActiveViewContext *activeViewContext; // @synthesize activeViewContext=_activeViewContext;
- (void).cxx_destruct;
- (void)loadNativeAdContext;
- (void)setNativeAdContext:(id)arg1;
- (void)asyncNativeAdContext:(CDUnknownBlockType)arg1;
- (void)setActiveViewContext:(id)arg1;
- (void)refreshActiveViewContext;
- (void)asyncActiveViewContext:(CDUnknownBlockType)arg1;
- (void)handleRefreshAction:(id)arg1;
- (void)refreshSDKCoreContext;
- (void)asyncSDKCoreContext:(CDUnknownBlockType)arg1;
- (void)setSDKCoreContext:(id)arg1;
- (id)activeSDKCoreContext;
- (void)updateActiveSDKCoreContext;
- (void)handleSDKCoreProcessDidTerminate:(id)arg1;
- (void)buildAdURLDidTimeOut:(id)arg1;
- (void)buildAdURLDidComplete;
@property(readonly, nonatomic) GADSDKCoreContext *SDKCoreContext;
- (id)init;

@end

