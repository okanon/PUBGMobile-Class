//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSThread.h>

@class NSRunLoop;

@interface FNFRenderingThread : NSThread
{
    NSRunLoop *_runLoop;
    double _priority;
}

+ (id)renderingThreadAllowingAppInactivePlayback:(_Bool)arg1;
@property(nonatomic) double priority; // @synthesize priority=_priority;
@property(readonly, nonatomic) NSRunLoop *runLoop; // @synthesize runLoop=_runLoop;
- (void).cxx_destruct;
- (void)main;
- (void)_addDisplayLinkInternal:(id)arg1;
- (void)dispatchSync:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)addDisplayLink:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_applicationDidBecomeActive:(id)arg1;
- (id)initAllowingAppInactivePlayback:(_Bool)arg1;

@end

