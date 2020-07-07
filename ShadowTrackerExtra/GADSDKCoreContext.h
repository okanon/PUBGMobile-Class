//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADJSContext, GADPersistentStateMonitor, NSMutableArray;

@interface GADSDKCoreContext : NSObject
{
    GADJSContext *_context;
    NSMutableArray *_monitors;
    GADPersistentStateMonitor *_persistentStateMonitor;
}

+ (void)loadWithEventContext:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)updateSDKCoreConstants:(id)arg1;
- (void)requestSDKCoreConstantsUpdate;
- (void)reloadSavedState;
- (void)activate;
- (void)fetchRemoteConfigurationWithSignals:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)runGcacheWithArguments:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)notifyBlockedOpenActionWithParameters:(id)arg1;
- (void)encryptSignalDictionary:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)adDictionaryFromSignals:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)normalizeAdBody:(id)arg1 headers:(id)arg2 statusCode:(long long)arg3 serverRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)setJSContext:(id)arg1;
@property(readonly, nonatomic) id messageSource;

@end

