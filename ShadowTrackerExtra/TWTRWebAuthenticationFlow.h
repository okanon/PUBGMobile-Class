//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TWTRLoginURLParser, TWTRSessionStore;

@interface TWTRWebAuthenticationFlow : NSObject
{
    TWTRSessionStore *_sessionStore;
    CDUnknownBlockType _controllerPresentation;
    CDUnknownBlockType _completion;
    CDUnknownBlockType _redirectCompletionBlock;
    TWTRLoginURLParser *_loginURLParser;
}

@property(readonly, nonatomic) TWTRLoginURLParser *loginURLParser; // @synthesize loginURLParser=_loginURLParser;
@property(copy, nonatomic) CDUnknownBlockType redirectCompletionBlock; // @synthesize redirectCompletionBlock=_redirectCompletionBlock;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType controllerPresentation; // @synthesize controllerPresentation=_controllerPresentation;
@property(readonly, nonatomic) TWTRSessionStore *sessionStore; // @synthesize sessionStore=_sessionStore;
- (void).cxx_destruct;
- (void)succeedWithSession:(id)arg1;
- (void)failWithError:(id)arg1;
- (void)saveSession:(id)arg1;
- (void)presentWebAuthenticationViewController:(id)arg1;
- (void)requestAuthenticationToken:(CDUnknownBlockType)arg1;
- (_Bool)resumeAuthenticationWithRedirectURL:(id)arg1;
- (void)beginAuthenticationFlow:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSessionStore:(id)arg1;

@end

