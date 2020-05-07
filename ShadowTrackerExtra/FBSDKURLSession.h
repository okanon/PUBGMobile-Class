//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSOperationQueue, NSURLSession;

@interface FBSDKURLSession : NSObject
{
    NSURLSession *_session;
    id <NSURLSessionDataDelegate> _delegate;
    NSOperationQueue *_delegateQueue;
}

@property(retain, nonatomic) NSOperationQueue *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property(nonatomic) __weak id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain) NSURLSession *session; // @synthesize session=_session;
- (void).cxx_destruct;
- (_Bool)valid;
- (void)invalidateAndCancel;
- (void)updateSessionWithBlock:(CDUnknownBlockType)arg1;
- (void)executeURLRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithDelegate:(id)arg1 delegateQueue:(id)arg2;

@end

