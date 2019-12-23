//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSOperationQueue;

@interface HsSRDelegateController : NSObject
{
    struct HsSRDelegateAvailableMethods _availableDelegateMethods;
    id <HsSRWebSocketDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSOperationQueue *_operationQueue;
    NSObject<OS_dispatch_queue> *_accessQueue;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property struct HsSRDelegateAvailableMethods availableDelegateMethods; // @synthesize availableDelegateMethods=_availableDelegateMethods;
- (void).cxx_destruct;
- (void)performDelegateQueueBlock:(CDUnknownBlockType)arg1;
- (void)performDelegateBlock:(CDUnknownBlockType)arg1;
@property(retain, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property(nonatomic) __weak id <HsSRWebSocketDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;

@end
