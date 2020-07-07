//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKErrorRecoveryAttempting-Protocol.h"

@class NSString;

@interface FBSDKErrorRecoveryAttempter : NSObject <FBSDKErrorRecoveryAttempting>
{
}

+ (id)recoveryAttempterFromConfiguration:(id)arg1;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 delegate:(id)arg3 didRecoverSelector:(SEL)arg4 contextInfo:(void *)arg5;
- (void)completeRecovery:(_Bool)arg1 delegate:(id)arg2 didRecoverSelector:(SEL)arg3 contextInfo:(void *)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

