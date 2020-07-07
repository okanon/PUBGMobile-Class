//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSArray, NSData, NSDictionary, NSError, NSObject, NSURL, NSURLResponse, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

@interface XCDURLHEADOperation : NSOperation
{
    _Bool _isExecuting;
    _Bool _isFinished;
    NSURL *_url;
    NSDictionary *_info;
    NSArray *_cookies;
    NSData *_data;
    NSURLResponse *_response;
    NSError *_error;
    NSURLSessionDataTask *_dataTask;
    NSURLSession *_session;
    NSObject<OS_dispatch_semaphore> *_operationStartSemaphore;
}

+ (_Bool)automaticallyNotifiesObserversForKey:(id)arg1;
@property(readonly) NSObject<OS_dispatch_semaphore> *operationStartSemaphore; // @synthesize operationStartSemaphore=_operationStartSemaphore;
@property(retain) NSURLSession *session; // @synthesize session=_session;
@property(retain) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property _Bool isFinished; // @synthesize isFinished=_isFinished;
@property _Bool isExecuting; // @synthesize isExecuting=_isExecuting;
@property(retain) NSError *error; // @synthesize error=_error;
@property(retain) NSURLResponse *response; // @synthesize response=_response;
@property(retain) NSData *data; // @synthesize data=_data;
@property(readonly, copy) NSArray *cookies; // @synthesize cookies=_cookies;
@property(readonly, copy) NSDictionary *info; // @synthesize info=_info;
@property(readonly) NSURL *url; // @synthesize url=_url;
- (void).cxx_destruct;
- (id)description;
- (void)cancel;
- (void)start;
- (_Bool)isAsynchronous;
- (id)initWithURL:(id)arg1 info:(id)arg2 cookes:(id)arg3;

@end

