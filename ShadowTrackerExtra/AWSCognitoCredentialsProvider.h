//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AWSCredentialsProvider.h"

@class AWSCognitoIdentity, AWSCredentials, AWSExecutor, AWSSTS, AWSUICKeyChainStore, NSDictionary, NSObject<OS_dispatch_semaphore>, NSString;

@interface AWSCognitoCredentialsProvider : NSObject <AWSCredentialsProvider>
{
    _Bool _useEnhancedFlow;
    _Bool _refreshingCredentials;
    AWSCredentials *_internalCredentials;
    id <AWSCognitoCredentialsProviderHelper> _identityProvider;
    NSString *_authRoleArn;
    NSString *_unAuthRoleArn;
    AWSSTS *_sts;
    AWSCognitoIdentity *_cognitoIdentity;
    AWSUICKeyChainStore *_keychain;
    AWSExecutor *_refreshExecutor;
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSDictionary *_cachedLogins;
}

+ (_Bool)shouldResetIdentityId:(id)arg1 authenticated:(_Bool)arg2;
@property(retain, nonatomic) NSDictionary *cachedLogins; // @synthesize cachedLogins=_cachedLogins;
@property(getter=isRefreshingCredentials) _Bool refreshingCredentials; // @synthesize refreshingCredentials=_refreshingCredentials;
@property _Bool useEnhancedFlow; // @synthesize useEnhancedFlow=_useEnhancedFlow;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // @synthesize semaphore=_semaphore;
@property(retain, nonatomic) AWSExecutor *refreshExecutor; // @synthesize refreshExecutor=_refreshExecutor;
@property(retain, nonatomic) AWSUICKeyChainStore *keychain; // @synthesize keychain=_keychain;
@property(retain, nonatomic) AWSCognitoIdentity *cognitoIdentity; // @synthesize cognitoIdentity=_cognitoIdentity;
@property(retain, nonatomic) AWSSTS *sts; // @synthesize sts=_sts;
@property(retain, nonatomic) NSString *unAuthRoleArn; // @synthesize unAuthRoleArn=_unAuthRoleArn;
@property(retain, nonatomic) NSString *authRoleArn; // @synthesize authRoleArn=_authRoleArn;
@property(readonly, nonatomic) id <AWSCognitoCredentialsProviderHelper> identityProvider; // @synthesize identityProvider=_identityProvider;
- (void).cxx_destruct;
@property(retain, nonatomic) AWSCredentials *internalCredentials; // @synthesize internalCredentials=_internalCredentials;
- (void)setIdentityId:(id)arg1;
@property(readonly, nonatomic) NSString *identityId;
@property(readonly, nonatomic) NSString *identityPoolId;
- (void)setIdentityProvider:(id)arg1;
- (void)setIdentityProviderManagerOnce:(id)arg1;
- (void)clearCredentials;
- (void)clearKeychain;
- (id)getIdentityId;
- (void)invalidateCachedTemporaryCredentials;
- (id)credentials;
- (id)getCredentialsWithCognito:(id)arg1 authenticated:(_Bool)arg2 customRoleArn:(id)arg3;
- (id)getCredentialsWithSTS:(id)arg1 authenticated:(_Bool)arg2;
- (void)setUpWithRegionType:(long long)arg1 identityProvider:(id)arg2 unauthRoleArn:(id)arg3 authRoleArn:(id)arg4;
- (id)initWithRegionType:(long long)arg1 identityPoolId:(id)arg2 unauthRoleArn:(id)arg3 authRoleArn:(id)arg4 identityProviderManager:(id)arg5;
- (id)initWithRegionType:(long long)arg1 unauthRoleArn:(id)arg2 authRoleArn:(id)arg3 identityProvider:(id)arg4;
- (id)initWithRegionType:(long long)arg1 identityProvider:(id)arg2;
- (id)initWithRegionType:(long long)arg1 identityPoolId:(id)arg2 identityProviderManager:(id)arg3;
- (id)initWithRegionType:(long long)arg1 identityPoolId:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

