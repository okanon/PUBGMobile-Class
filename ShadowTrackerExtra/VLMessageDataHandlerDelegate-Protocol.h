//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol VLMessageDataHandlerDelegate <NSObject>
- (void)messageDidLoadHistory:(long long)arg1;
- (void)messageNeedReload:(long long)arg1;
- (void)hotTipsDidChange;
- (void)optionsDidChange;
- (void)messageDidChange:(struct _NSRange)arg1;
@end

