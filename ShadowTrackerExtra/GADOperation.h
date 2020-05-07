//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, NSObject<OS_dispatch_group>, NSString;

@interface GADOperation : NSObject
{
    CDUnknownBlockType _operationBlock;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasStarted
    NSObject<OS_dispatch_group> *_completionGroup;
    id _result;
    NSError *_error;
    NSString *_operationName;
    _Bool _timedOut;
    CDUnknownBlockType _completionBlock;
    double _timeout;
}

@property(readonly, nonatomic) _Bool timedOut; // @synthesize timedOut=_timedOut;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
- (void).cxx_destruct;
- (id)resultAfterWaitingWithError:(id *)arg1;
- (void)waitForCompletion;
- (void)start;
- (void)dealloc;
- (id)init;
- (id)initWithOperationName:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

