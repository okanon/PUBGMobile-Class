//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsAutoRetriableMessageDM.h"

@class NSString;

@interface HsReviewRequestAcceptedMessageDM : HsAutoRetriableMessageDM
{
    NSString *_refersToMessageId;
}

@property(retain, nonatomic) NSString *refersToMessageId; // @synthesize refersToMessageId=_refersToMessageId;
- (void).cxx_destruct;
- (void)sendAutoRetriableDMWithUser:(id)arg1 conversationServerInfo:(id)arg2 withError:(id *)arg3;
- (_Bool)isUISupported;
- (void)merge:(id)arg1;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 refersToMessageId:(id)arg4 messageSyncState:(unsigned long long)arg5;

@end

