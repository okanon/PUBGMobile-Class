//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsUserMessageDM.h"

@class HsOptionInput;

@interface HsOptionInputMessageDM : HsUserMessageDM
{
    HsOptionInput *_input;
    unsigned long long _referredMessageType;
}

@property unsigned long long referredMessageType; // @synthesize referredMessageType=_referredMessageType;
@property(retain) HsOptionInput *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (id)initWithAgentMessageWithOptionInputDM:(id)arg1;
- (id)initWithFAQListMessageWithOptionInputDM:(id)arg1;

@end
