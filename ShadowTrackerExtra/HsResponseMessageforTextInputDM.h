//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsUserMessageDM.h"

@class NSNumber, NSString;

@interface HsResponseMessageforTextInputDM : HsUserMessageDM
{
    _Bool _skipped;
    _Bool _isMessageEmpty;
    NSString *_referredMessageId;
    NSString *_botInfo;
    unsigned long long _keyboardType;
    NSNumber *_dateInMillis;
    NSString *_timeZoneID;
}

@property(copy, nonatomic) NSString *timeZoneID; // @synthesize timeZoneID=_timeZoneID;
@property(copy, nonatomic) NSNumber *dateInMillis; // @synthesize dateInMillis=_dateInMillis;
@property _Bool isMessageEmpty; // @synthesize isMessageEmpty=_isMessageEmpty;
@property unsigned long long keyboardType; // @synthesize keyboardType=_keyboardType;
@property _Bool skipped; // @synthesize skipped=_skipped;
@property(retain) NSString *botInfo; // @synthesize botInfo=_botInfo;
@property(retain) NSString *referredMessageId; // @synthesize referredMessageId=_referredMessageId;
- (void).cxx_destruct;
- (id)parseResponse:(id)arg1 withError:(id *)arg2;
- (id)requestDict;
- (id)referredMessageIdString;
- (id)messageTypeString;
- (void)merge:(id)arg1;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 agentMessageWithTextInput:(id)arg4 isSkipped:(_Bool)arg5;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 keyboardType:(unsigned long long)arg4 botInfo:(id)arg5 skipped:(_Bool)arg6 referredMessageId:(id)arg7 isMessageEmpty:(_Bool)arg8;

@end

