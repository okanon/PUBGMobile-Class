//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

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

