//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class FBAdIconButton;

@interface FBAdWebViewNavigationPanel : UIView
{
    _Bool _goBackButtonEnabled;
    _Bool _goForwardButtonEnabled;
    id <FBAdWebViewNavigationPanelDelegate> _delegate;
    FBAdIconButton *_backButton;
    FBAdIconButton *_forwardButton;
    FBAdIconButton *_openInExternalBrowserButton;
}

@property(nonatomic) __weak FBAdIconButton *openInExternalBrowserButton; // @synthesize openInExternalBrowserButton=_openInExternalBrowserButton;
@property(nonatomic) __weak FBAdIconButton *forwardButton; // @synthesize forwardButton=_forwardButton;
@property(nonatomic) __weak FBAdIconButton *backButton; // @synthesize backButton=_backButton;
@property(nonatomic, getter=isGoForwardButtonEnabeld) _Bool goForwardButtonEnabled; // @synthesize goForwardButtonEnabled=_goForwardButtonEnabled;
@property(nonatomic, getter=isGoBackButtonEnabeld) _Bool goBackButtonEnabled; // @synthesize goBackButtonEnabled=_goBackButtonEnabled;
@property(nonatomic) __weak id <FBAdWebViewNavigationPanelDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)openInExternalBrowserButtonTap:(id)arg1;
- (void)backButtonTap:(id)arg1;
- (void)forwardButtonTap:(id)arg1;
- (void)setupViews;
- (void)setupOpenInExternalBrowserButton;
- (void)setupForwardButton;
- (void)setupBackButton;
- (id)initWithDelegate:(id)arg1;

@end

