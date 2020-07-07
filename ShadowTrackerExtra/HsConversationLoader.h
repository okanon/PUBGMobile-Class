//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HsDomain, HsLocalConversationLoader, HsNetworkConversationLoader, HsPaginationCursor;
@protocol HsConversationLoaderListener;

@interface HsConversationLoader : NSObject
{
    id <HsConversationLoaderListener> _listener;
    HsLocalConversationLoader *_localLoader;
    HsNetworkConversationLoader *_networkLoader;
    HsPaginationCursor *_cursor;
    HsDomain *_domain;
}

@property(retain) HsDomain *domain; // @synthesize domain=_domain;
@property(retain) HsPaginationCursor *cursor; // @synthesize cursor=_cursor;
@property(retain) HsNetworkConversationLoader *networkLoader; // @synthesize networkLoader=_networkLoader;
@property(retain) HsLocalConversationLoader *localLoader; // @synthesize localLoader=_localLoader;
@property __weak id <HsConversationLoaderListener> listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (void)fetchConversationsFromNetworkForUser:(id)arg1 cursor:(id)arg2 withError:(id *)arg3;
- (_Bool)hasOlderMessagesForUser:(id)arg1;
- (void)loadNetworkConversationsBeforeCursor:(id)arg1 forUser:(id)arg2;
- (void)loadConversationsForUser:(id)arg1;
- (id)initialLoadForUser:(id)arg1 withError:(id *)arg2;
- (id)initWithLocalLoader:(id)arg1 networkLoader:(id)arg2 domain:(id)arg3;

@end

