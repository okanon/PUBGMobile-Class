//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;
@protocol TWTRAuthSession;

@protocol TWTRUserSessionStore <NSObject>
- (void)logOutUserID:(NSString *)arg1;
- (id <TWTRAuthSession>)session;
- (_Bool)hasLoggedInUsers;
- (NSArray *)existingUserSessions;
- (id <TWTRAuthSession>)sessionForUserID:(NSString *)arg1;
- (void)saveSessionWithAuthToken:(NSString *)arg1 authTokenSecret:(NSString *)arg2 completion:(void (^)(id <TWTRAuthSession>, NSError *))arg3;
- (void)saveSession:(id <TWTRAuthSession>)arg1 completion:(void (^)(id <TWTRAuthSession>, NSError *))arg2;
@end

