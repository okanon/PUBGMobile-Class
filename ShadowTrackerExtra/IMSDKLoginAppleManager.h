//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "ASAuthorizationControllerDelegate-Protocol.h"
#import "IMSDKLoginDelegate-Protocol.h"

@class NSString;

@interface IMSDKLoginAppleManager : NSObject <ASAuthorizationControllerDelegate, IMSDKLoginDelegate>
{
    NSString *_permissions;
    CDUnknownBlockType _loginHandle;
    unsigned long long _state;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedInstance;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
@property(copy, nonatomic) CDUnknownBlockType loginHandle; // @synthesize loginHandle=_loginHandle;
@property(retain, nonatomic) NSString *permissions; // @synthesize permissions=_permissions;
- (void).cxx_destruct;
- (id)getFullName:(id)arg1;
- (id)getNickName:(id)arg1;
- (id)getRefreshTokenUrl;
- (id)convertErrorByCredentialState:(long long)arg1;
- (id)convertError:(id)arg1;
- (void)performAppleLoginRequests:(id)arg1;
- (void)quickLogin;
- (void)convertLoginResult:(id)arg1;
- (void)handleNoSuporRet;
- (void)loginWithState:(unsigned long long)arg1 permissions:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithError:(id)arg2;
- (void)authorizationController:(id)arg1 didCompleteWithAuthorization:(id)arg2;
- (void)quickLoginWithHandle:(CDUnknownBlockType)arg1;
- (void)logout;
- (void)bindWithSubChannel:(id)arg1 extra:(id)arg2 complete:(CDUnknownBlockType)arg3;
- (void)checkAndLoginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (void)loginWithPermissions:(id)arg1 handle:(CDUnknownBlockType)arg2;
- (id)initSingleton;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

