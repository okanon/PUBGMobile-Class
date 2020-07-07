//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSOperationQueue;

@interface FIRMessagingPubSubRegistrar : NSObject
{
    NSOperationQueue *_topicOperations;
    NSError *_operationInProgressError;
}

@property(retain, nonatomic) NSError *operationInProgressError; // @synthesize operationInProgressError=_operationInProgressError;
@property(readonly, nonatomic) NSOperationQueue *topicOperations; // @synthesize topicOperations=_topicOperations;
- (void).cxx_destruct;
- (void)updateSubscriptionToTopic:(id)arg1 withToken:(id)arg2 options:(id)arg3 shouldDelete:(_Bool)arg4 handler:(CDUnknownBlockType)arg5;
- (void)stopAllSubscriptionRequests;
- (id)init;

@end

