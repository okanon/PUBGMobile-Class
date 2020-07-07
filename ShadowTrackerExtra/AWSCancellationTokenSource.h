//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSCancellationToken;

@interface AWSCancellationTokenSource : NSObject
{
    AWSCancellationToken *_token;
}

+ (id)cancellationTokenSource;
@property(readonly, nonatomic) AWSCancellationToken *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (void)dispose;
- (void)cancelAfterDelay:(int)arg1;
- (void)cancel;
@property(readonly, nonatomic, getter=isCancellationRequested) _Bool cancellationRequested;
- (id)init;

@end

