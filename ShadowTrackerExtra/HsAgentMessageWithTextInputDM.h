//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsAgentMessageDM.h"

@class HsTextInput;

@interface HsAgentMessageWithTextInputDM : HsAgentMessageDM
{
    _Bool _isMessageEmpty;
    HsTextInput *_input;
}

@property _Bool isMessageEmpty; // @synthesize isMessageEmpty=_isMessageEmpty;
@property(retain) HsTextInput *input; // @synthesize input=_input;
- (void).cxx_destruct;
- (_Bool)canBeCountedAsUnseen;
- (void)merge:(id)arg1;
- (id)initWithBody:(id)arg1 createdAt:(id)arg2 authorName:(id)arg3 placeholder:(id)arg4 botInfo:(id)arg5 required:(_Bool)arg6 inputLabel:(id)arg7 skipLabel:(id)arg8 keyboardType:(unsigned long long)arg9 isMessageEmpty:(_Bool)arg10;

@end

