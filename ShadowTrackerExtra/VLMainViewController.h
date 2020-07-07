//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "VLDialogDelegate-Protocol.h"
#import "VLMessageDataHandlerDelegate-Protocol.h"
#import "VLRequestHandlerDelegate-Protocol.h"
#import "VLSideMenuDelegate-Protocol.h"
#import "VLTopControllerProtocol-Protocol.h"

@class NSString, VLConfigModel, VLDialogViewController, VLMainView, VLMessageDataHandler, VLMessageRequestHandler, VLSideMenuViewController;

@interface VLMainViewController : UIViewController <VLMessageDataHandlerDelegate, VLSideMenuDelegate, VLDialogDelegate, VLRequestHandlerDelegate, VLTopControllerProtocol>
{
    _Bool _isShowFromFeeds;
    VLConfigModel *_config;
    VLMessageRequestHandler *_requestHandler;
    VLMessageDataHandler *_messageHandler;
    VLDialogViewController *_dialogVC;
    VLSideMenuViewController *_sideMenuVC;
}

@property(nonatomic) __weak VLSideMenuViewController *sideMenuVC; // @synthesize sideMenuVC=_sideMenuVC;
@property(nonatomic) __weak VLDialogViewController *dialogVC; // @synthesize dialogVC=_dialogVC;
@property(retain, nonatomic) VLMessageDataHandler *messageHandler; // @synthesize messageHandler=_messageHandler;
@property(retain, nonatomic) VLMessageRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;
@property(nonatomic) _Bool isShowFromFeeds; // @synthesize isShowFromFeeds=_isShowFromFeeds;
@property(retain, nonatomic) VLConfigModel *config; // @synthesize config=_config;
- (void).cxx_destruct;
@property(readonly, nonatomic) VLMainView *mainView;
- (void)closeButtonPresed;
- (void)collectPackage:(id)arg1 groupId:(id)arg2 amsId:(id)arg3 answerId:(id)arg4;
- (void)messageDidLoadHistory:(long long)arg1;
- (void)fetchHistory;
- (void)jumpToWeb:(id)arg1;
- (void)questionURLPressed:(id)arg1 questionId:(id)arg2;
- (void)resend:(id)arg1;
- (void)optionPressed:(id)arg1 questionId:(id)arg2;
- (void)jumpToTip:(id)arg1 divItems:(id)arg2;
- (void)playVideoInWeb:(id)arg1 videoId:(id)arg2;
- (void)jumpToVideo:(id)arg1 videoId:(id)arg2;
- (void)jumpToImage:(id)arg1 index:(long long)arg2;
- (void)sideMenuItemPressed:(id)arg1 questionId:(id)arg2;
- (void)messageNeedReload:(long long)arg1;
- (void)optionsDidChange;
- (void)messageDidChange:(struct _NSRange)arg1;
- (void)hotTipsDidChange;
- (void)showConnecting:(long long)arg1;
- (void)certificateExpired;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)registerNotifications;
- (_Bool)handleSpecialInput:(id)arg1;
- (void)setInitResult:(id)arg1;
- (void)clearImageMemoryCache;
- (void)sendText:(id)arg1 questionId:(id)arg2 type:(unsigned long long)arg3;
- (void)reconnect;
- (void)configViews;
- (void)close;
- (_Bool)showInVC:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
