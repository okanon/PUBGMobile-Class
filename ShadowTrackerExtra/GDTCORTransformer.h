//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GDTCORLifecycleProtocol.h"

@class GDTCORStorage, NSObject<OS_dispatch_queue>, NSString;

@interface GDTCORTransformer : NSObject <GDTCORLifecycleProtocol>
{
    NSObject<OS_dispatch_queue> *_eventWritingQueue;
    GDTCORStorage *_storageInstance;
}

+ (id)sharedInstance;
@property(retain, nonatomic) GDTCORStorage *storageInstance; // @synthesize storageInstance=_storageInstance;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *eventWritingQueue; // @synthesize eventWritingQueue=_eventWritingQueue;
- (void).cxx_destruct;
- (void)appWillTerminate:(id)arg1;
- (void)transformEvent:(id)arg1 withTransformers:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

