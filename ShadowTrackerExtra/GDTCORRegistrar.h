//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTCORLifecycleProtocol.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString;

@interface GDTCORRegistrar : NSObject <GDTCORLifecycleProtocol>
{
    NSMutableDictionary *_targetToUploader;
    NSMutableDictionary *_targetToPrioritizer;
    NSObject<OS_dispatch_queue> *_registrarQueue;
}

+ (id)sharedInstance;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *registrarQueue; // @synthesize registrarQueue=_registrarQueue;
- (void).cxx_destruct;
- (void)appWillTerminate:(id)arg1;
- (void)appWillForeground:(id)arg1;
- (void)appWillBackground:(id)arg1;
@property(readonly) NSMutableDictionary *targetToPrioritizer;
@property(readonly) NSMutableDictionary *targetToUploader;
- (void)registerPrioritizer:(id)arg1 target:(long long)arg2;
- (void)registerUploader:(id)arg1 target:(long long)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

