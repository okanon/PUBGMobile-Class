//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSUserDAO.h"

@class HsSQLDbHelper, NSString;

@interface HSiOSUserDAO : NSObject <HSUserDAO>
{
    Class _userQueryBuilder;
    Class _userRawResultConvertor;
    HsSQLDbHelper *_dataBaseHelper;
}

@property(retain, nonatomic) HsSQLDbHelper *dataBaseHelper; // @synthesize dataBaseHelper=_dataBaseHelper;
@property(retain, nonatomic) Class userRawResultConvertor; // @synthesize userRawResultConvertor=_userRawResultConvertor;
@property(retain, nonatomic) Class userQueryBuilder; // @synthesize userQueryBuilder=_userQueryBuilder;
- (void).cxx_destruct;
- (_Bool)dropTable;
- (id)executeFetchQuery:(id)arg1 withParameters:(id)arg2;
- (_Bool)executeUpdateQuery:(id)arg1 withParameters:(id)arg2;
- (_Bool)updateActiveState:(_Bool)arg1 forUserLocalId:(id)arg2;
- (_Bool)deleteUser:(id)arg1;
- (_Bool)activateUser:(id)arg1;
- (_Bool)updateName:(id)arg1 email:(id)arg2 forUserLocalId:(id)arg3;
- (_Bool)updateSyncState:(unsigned long long)arg1 forUserLocalId:(id)arg2;
- (_Bool)updateIssueExists:(_Bool)arg1 forUserLocalId:(id)arg2;
- (_Bool)updateName:(id)arg1 forUserLocalId:(id)arg2;
- (_Bool)updateAuthToken:(id)arg1 forUserLocalId:(id)arg2;
- (_Bool)updatePushTokenSyncStatus:(_Bool)arg1 forUserLocalId:(id)arg2;
- (id)anonymousUser;
- (id)activeUser;
- (id)fetchUserByIdentifier:(id)arg1 email:(id)arg2;
- (id)fetchUser:(id)arg1;
- (id)fetchUsers;
- (id)createUser:(id)arg1;
- (_Bool)createUserTable;
- (id)initWithUserDBHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

