//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HSConversation;

@interface HsLocalConversationLoaderInfo : NSObject
{
    HSConversation *_conversation;
    unsigned long long _messageCount;
}

@property unsigned long long messageCount; // @synthesize messageCount=_messageCount;
@property(retain) HSConversation *conversation; // @synthesize conversation=_conversation;
- (void).cxx_destruct;
- (id)initWithConversation:(id)arg1 messageCount:(unsigned long long)arg2;

@end

