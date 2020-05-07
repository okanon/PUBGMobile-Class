//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAdDebugLogging : NSObject
{
}

+ (void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 info:(id)arg3;
+ (void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 exception:(id)arg3;
+ (void)logDebugEventWithType:(id)arg1 code:(unsigned long long)arg2 description:(id)arg3;
+ (void)initialize;
+ (void)logDSLErrorForRequestId:(id)arg1 adFormat:(id)arg2 creativeType:(id)arg3 data:(id)arg4;
+ (void)logAdapterFailedForAdFormat:(id)arg1 requestId:(id)arg2 reason:(id)arg3;
+ (void)logAdLoadedForAdFormat:(id)arg1 requestId:(id)arg2;
+ (void)logCreativeDownloadFailure:(id)arg1 creative:(id)arg2 requestId:(id)arg3;
+ (void)logInMemoryCacheFailedForAdFormat:(id)arg1 creative:(id)arg2 requestId:(id)arg3;
+ (void)logVideoWrapperCachedWithVideoMissingForAdFormat:(id)arg1 requestId:(id)arg2;
+ (void)logCacheOnDiskWipeEventWithSize:(unsigned long long)arg1 reason:(id)arg2 success:(_Bool)arg3;
+ (void)logCacheOnDiskWipeSuccess:(unsigned long long)arg1;
+ (void)logCacheOnDiskWipeFailure:(unsigned long long)arg1 reason:(id)arg2;
+ (void)logCacheWriteToDiskFailureForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4 reason:(id)arg5;
+ (void)logCacheWriteToDiskSuccessForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4;
+ (void)logCacheMissForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4;
+ (void)logCacheHitForAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4;
+ (id)mutableDictionaryWithAdFormat:(id)arg1 creative:(id)arg2 cacheContext:(id)arg3 requestId:(id)arg4;
+ (_Bool)recalculateCacheDebugEventsSamplingRate;
+ (unsigned int)randomPercentage;
+ (_Bool)shouldLogCacheDebugEventsForCurrentSession;

@end

