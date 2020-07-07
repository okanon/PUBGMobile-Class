//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HsExponentialBackoffBuilder;
@protocol HsRetryPolicy;

@interface HsHTTPBackoffBuilder : NSObject
{
    HsExponentialBackoffBuilder *_exponentialBackoffBuilder;
    id <HsRetryPolicy> _retryPolicy;
}

@property(retain, nonatomic) id <HsRetryPolicy> retryPolicy; // @synthesize retryPolicy=_retryPolicy;
@property(retain, nonatomic) HsExponentialBackoffBuilder *exponentialBackoffBuilder; // @synthesize exponentialBackoffBuilder=_exponentialBackoffBuilder;
- (void).cxx_destruct;
- (id)build;
- (id)init;

@end

