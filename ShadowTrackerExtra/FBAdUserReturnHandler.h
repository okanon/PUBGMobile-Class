//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBAdUserReturnHandler : NSObject
{
}

+ (id)shared;
+ (void)logLocalUserReturnEventWithToken:(id)arg1 openInterval:(unsigned long long)arg2 closeInterval:(unsigned long long)arg3;
+ (void)logUserReturnEventIfNeeded;
+ (void)moveOutOfApp:(_Bool)arg1 withToken:(id)arg2;
- (void)removeEventDictionary;
- (void)storeEventDictionary:(id)arg1;
- (id)eventDictionary;
- (id)timestampNowString;
- (void)logEventWithToken:(id)arg1 extraData:(id)arg2;
- (void)logEventWithToken:(id)arg1 isLocal:(_Bool)arg2 leaveTimestampString:(id)arg3 backTimestampString:(id)arg4 outcomeString:(id)arg5;
- (void)logLocalUserReturnEventWithToken:(id)arg1 openInterval:(unsigned long long)arg2 closeInterval:(unsigned long long)arg3;
- (void)logUserReturnEventIfNeeded;
- (void)moveOutOfApp:(_Bool)arg1 withToken:(id)arg2;
- (void)onDidBecomeActiveNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

