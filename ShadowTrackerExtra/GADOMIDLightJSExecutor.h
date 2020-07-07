//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GADOMIDJSExecutor-Protocol.h"
#import "GADOMIDJSInvoker-Protocol.h"

@class GADOMIDJSNetworkBridge, GADOMIDJSTimer, JSContext, NSString;
@protocol OS_dispatch_queue;

@interface GADOMIDLightJSExecutor : NSObject <GADOMIDJSExecutor, GADOMIDJSInvoker>
{
    JSContext *_jsContext;
    GADOMIDJSTimer *_timer;
    GADOMIDJSNetworkBridge *_networkBridge;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
}

+ (id)lightJSExecutor;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(readonly, nonatomic) GADOMIDJSNetworkBridge *networkBridge; // @synthesize networkBridge=_networkBridge;
@property(readonly, nonatomic) GADOMIDJSTimer *timer; // @synthesize timer=_timer;
@property(readonly, nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
- (void).cxx_destruct;
- (void)invokeScript:(id)arg1;
- (void)invokeCallback:(id)arg1 argument:(id)arg2;
- (void)invokeCallback:(id)arg1;
- (void)injectJavaScriptFromString:(id)arg1;
@property(readonly, nonatomic) id jsEnvironment;
@property(readonly, nonatomic) _Bool supportBackgroundThread;
- (id)initWithTimer:(id)arg1 networkBridge:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

