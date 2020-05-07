//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBBotDetectionWhiteOpsHelpers : NSObject
{
}

+ (void)logEventWithAppSessionId:(id)arg1 signalType:(id)arg2 eventId:(id)arg3 productType:(unsigned long long)arg4 eventType:(id)arg5 jsonData:(id)arg6 errorDescription:(id)arg7;
+ (id)javaScriptSafeCreate:(id)arg1;
+ (void)currentUserAgentWithBlock:(CDUnknownBlockType)arg1;
+ (id)convertKeysToSignalNamesForDict:(id)arg1;
+ (id)constructNativeSignalsJsonWithSessionId:(id)arg1 withProductType:(unsigned long long)arg2 withEventType:(id)arg3 withEventId:(id)arg4 withNetworkSignalsResponseDict:(id)arg5 withSignalsDict:(id)arg6 andErrorsDict:(id)arg7;
+ (id)createQueryStringFromParameters:(id)arg1;
+ (id)urlRequestWithURL:(id)arg1 eventId:(id)arg2 sessionID:(id)arg3 eventType:(id)arg4 productType:(unsigned long long)arg5;
+ (id)dataSession;
+ (void)sendBotDetectionSignalsForEventId:(id)arg1 sessionID:(id)arg2 productType:(unsigned long long)arg3 eventType:(id)arg4 withSignalsAndErrorsDict:(id)arg5 withLoggerDelegate:(id)arg6 withConfigDelegate:(id)arg7 withDynamicLibraryProviderDelegate:(id)arg8;

@end

