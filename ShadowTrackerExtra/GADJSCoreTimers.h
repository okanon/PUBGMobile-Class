//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADJSCoreTimersProtocol.h"

@class GADJSCoreJSContext, NSMutableDictionary, NSObject<OS_dispatch_queue>;

@interface GADJSCoreTimers : NSObject <GADJSCoreTimersProtocol>
{
    GADJSCoreJSContext *_JSCoreJSContext;
    int _counter;
    NSMutableDictionary *_timers;
    NSObject<OS_dispatch_queue> *_lockQueue;
}

- (void).cxx_destruct;
- (id)getClearInterval;
- (id)getClearTimeout;
- (id)JSFunctionForClearTimer;
- (id)getSetInterval;
- (id)getSetTimeout;
- (id)JSFunctionForSetTimerWithRepeats:(_Bool)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithJSCoreJSContext:(id)arg1;

@end

