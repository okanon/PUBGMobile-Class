//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRNetworkSessionProvider-Protocol.h"

@class NSString;

@interface TWTRNetworkSessionProvider : NSObject <TWTRNetworkSessionProvider>
{
}

+ (id)userSessionWithAuthToken:(id)arg1 authTokenSecret:(id)arg2 fromResponseData:(id)arg3;
+ (void)callGuestCompletion:(CDUnknownBlockType)arg1 withSession:(id)arg2 error:(id)arg3;
+ (void)guestSessionWithAuthConfig:(id)arg1 APIServiceConfig:(id)arg2 accessToken:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)appSessionWithAuthConfig:(id)arg1 APIServiceConfig:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (id)sessionWithResponseDict:(id)arg1;
+ (void)callUserCompletionWithResponseDict:(id)arg1 withError:(id)arg2 completion:(CDUnknownBlockType)arg3;
+ (void)guestSessionWithAuthConfig:(id)arg1 APIServiceConfig:(id)arg2 URLSession:(id)arg3 accessToken:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)verifySessionWithAuthToken:(id)arg1 authSecret:(id)arg2 withAuthConfig:(id)arg3 APIServiceConfig:(id)arg4 URLSession:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)verifyUserSession:(id)arg1 withAuthConfig:(id)arg2 APIServiceConfig:(id)arg3 URLSession:(id)arg4 completion:(CDUnknownBlockType)arg5;
+ (void)userSessionWithAuthConfig:(id)arg1 APIServiceConfig:(id)arg2 errorLogger:(id)arg3 completion:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

