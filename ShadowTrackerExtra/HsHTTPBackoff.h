//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HsExponentialBackoff;
@protocol HsRetryPolicy;

@interface HsHTTPBackoff : NSObject
{
    HsExponentialBackoff *_exponentialBackoff;
    id <HsRetryPolicy> _retryPolicy;
}

@property(retain, nonatomic) id <HsRetryPolicy> retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property(retain, nonatomic) HsExponentialBackoff *exponentialBackoff; // @synthesize exponentialBackoff=_exponentialBackoff;
- (void).cxx_destruct;
- (_Bool)shouldRetryForStatusCode:(int)arg1;
- (double)nextIntervalForStatusCode:(long long)arg1;
- (void)reset;
- (id)initWithBuilder:(id)arg1;

@end

