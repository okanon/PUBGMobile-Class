//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MidasIAPCallBack : NSObject
{
}

+ (void)_appendMetaData2Resp:(id)arg1 orderInfo:(id)arg2;
+ (void)onUpdateInterWorkingStep:(int)arg1 requestInfo:(id)arg2;
+ (void)clearCacheAndUIStack:(CDUnknownBlockType)arg1 orderInfo:(id)arg2 userInfo:(id)arg3 fromBackground:(_Bool)arg4;
+ (void)onMidasNetCallback:(id)arg1 delegate:(id)arg2 orderInfo:(id)arg3 userInfo:(id)arg4;
+ (void)onMidasContinuePay:(id)arg1 delegate:(id)arg2 orderInfo:(id)arg3 userInfo:(id)arg4;
+ (void)onMidasPaySuccess:(id)arg1 delegate:(id)arg2 fromBackground:(_Bool)arg3 orderInfo:(id)arg4 userInfo:(id)arg5;
+ (void)onMidasPayError:(id)arg1 delegate:(id)arg2 fromBackground:(_Bool)arg3 orderInfo:(id)arg4 userInfo:(id)arg5;
+ (void)onMidasLoginExpire:(id)arg1 fromBackground:(_Bool)arg2 orderInfo:(id)arg3 userInfo:(id)arg4;

@end

