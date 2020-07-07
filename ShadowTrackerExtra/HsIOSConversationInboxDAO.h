//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsConversationInboxDAO-Protocol.h"

@class HsConversationPersistentStorage, HsIOSKVStroreProvider, NSString;

@interface HsIOSConversationInboxDAO : NSObject <HsConversationInboxDAO>
{
    HsConversationPersistentStorage *_conversationStorage;
    HsIOSKVStroreProvider *_storeProvider;
}

- (void).cxx_destruct;
- (void)resetDataAfterConversationsDeletionForUser:(id)arg1 withError:(id *)arg2;
- (id)getLastConversationsRedactionTimeForUser:(id)arg1 withError:(id *)arg2;
- (void)saveLastConversationsRedactionTimeForUser:(id)arg1 value:(id)arg2 withError:(id *)arg3;
- (_Bool)getHasOlderMessagesForUser:(id)arg1 withError:(id *)arg2;
- (void)saveHasOlderMessagesForUser:(id)arg1 value:(id)arg2 withError:(id *)arg3;
- (long long)getRemoteNotificationCountForIssue:(id)arg1;
- (void)deleteUserData:(id)arg1 withError:(id *)arg2;
- (id)userReplyDraftForUserLocalId:(id)arg1 withError:(id *)arg2;
- (_Bool)savePersistMessageBox:(_Bool)arg1 forUserLocalId:(id)arg2 withError:(id *)arg3;
- (_Bool)persistMessageBoxForUserLocalId:(id)arg1 withError:(id *)arg2;
- (id)conversationInboxDTOBuilderForUserLocalId:(id)arg1 withError:(id *)arg2;
- (id)conversationInboxDTOForUserLocalId:(id)arg1 withError:(id *)arg2;
- (_Bool)saveConversationArchivalPrefillText:(id)arg1 userLocalId:(id)arg2 withError:(id *)arg3;
- (_Bool)saveConversationInboxDTO:(id)arg1 withError:(id *)arg2;
- (id)initWithPlatform:(id)arg1 withError:(id *)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

