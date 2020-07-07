//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsBaseUIView.h"

@class UIActivityIndicatorView, UIButton, UILabel, UIView;
@protocol HsConversationHeaderViewDelegate;

@interface HsConversationHeaderView : HsBaseUIView
{
    unsigned long long _headerState;
    id <HsConversationHeaderViewDelegate> _delegate;
    UIView *_loadingView;
    UILabel *_loadingLabel;
    UIActivityIndicatorView *_loadingIndicator;
    UIView *_errorView;
    UILabel *_errorLabel;
    UIButton *_retryButton;
}

+ (id)createInstance;
@property(nonatomic) __weak UIButton *retryButton; // @synthesize retryButton=_retryButton;
@property(nonatomic) __weak UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(nonatomic) __weak UIView *errorView; // @synthesize errorView=_errorView;
@property(nonatomic) __weak UIActivityIndicatorView *loadingIndicator; // @synthesize loadingIndicator=_loadingIndicator;
@property(nonatomic) __weak UILabel *loadingLabel; // @synthesize loadingLabel=_loadingLabel;
@property(nonatomic) __weak UIView *loadingView; // @synthesize loadingView=_loadingView;
@property(nonatomic) __weak id <HsConversationHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long headerState; // @synthesize headerState=_headerState;
- (void).cxx_destruct;
- (void)reapplyTheming;
- (void)applyTheme;
- (void)didClickRetry:(id)arg1;
- (void)updateHeaderViewState;
- (void)setupView;
- (void)awakeFromNib;

@end

