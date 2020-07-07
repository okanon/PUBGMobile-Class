//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class LineSDKConfiguration;
@protocol LineSDKAuthenticationRefreshDelegate;

@interface LineSDKSocialAPI : NSObject
{
    id <LineSDKAuthenticationRefreshDelegate> _delegate;
    LineSDKConfiguration *_configuration;
}

@property(retain, nonatomic) LineSDKConfiguration *configuration; // @synthesize configuration=_configuration;
@property(nonatomic) __weak id <LineSDKAuthenticationRefreshDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)getProfileWithCompletion:(CDUnknownBlockType)arg1;
- (void)sendWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfiguration:(id)arg1;

@end

