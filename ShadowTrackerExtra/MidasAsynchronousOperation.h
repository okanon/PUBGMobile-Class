//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface MidasAsynchronousOperation : NSOperation
{
    _Bool _finished;
    _Bool _executing;
}

@property(nonatomic, getter=isFinished) _Bool finished; // @synthesize finished=_finished;
@property(nonatomic, getter=isExecuting) _Bool executing; // @synthesize executing=_executing;
- (_Bool)isAsynchronous;
- (void)completeOperation;
- (void)main;
- (void)start;
- (id)init;

@end

