//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TWTRAttributedLabelDelegate-Protocol.h"
#import "TWTRProfileHeaderViewDelegate-Protocol.h"
#import "TWTRSubscriber-Protocol.h"
#import "TWTRTweetMediaViewDelegate-Protocol.h"
#import "UIAppearanceContainer-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, TWTRLikeButton, TWTRShareButton, TWTRTweet, TWTRTweetContentView, TWTRTweetPresenter, TWTRTweetViewMetrics, TWTRUser, UIColor, UIViewController;
@protocol TWTRTweetViewDelegate;

@interface TWTRTweetView : UIView <TWTRAttributedLabelDelegate, TWTRProfileHeaderViewDelegate, TWTRTweetMediaViewDelegate, UIGestureRecognizerDelegate, UITextViewDelegate, TWTRSubscriber, UIAppearanceContainer>
{
    _Bool _showBorder;
    _Bool _showActionButtons;
    _Bool _calculationOnly;
    _Bool _doneInitializing;
    TWTRTweet *_tweet;
    UIColor *_backgroundColor;
    UIColor *_primaryTextColor;
    UIColor *_linkTextColor;
    unsigned long long _theme;
    unsigned long long _style;
    id <TWTRTweetViewDelegate> _delegate;
    UIViewController *_presenterViewController;
    UIView *_attachmentContainer;
    TWTRTweetContentView *_attachmentContentView;
    NSLayoutConstraint *_attachmentTopMarginConstraint;
    NSLayoutConstraint *_attachmentBottomMarginConstraint;
    UIView *_actionContainer;
    TWTRLikeButton *_likeButton;
    TWTRShareButton *_shareButton;
    TWTRTweetPresenter *_tweetPresenter;
    TWTRTweetContentView *_contentView;
    TWTRTweetViewMetrics *_metrics;
    TWTRUser *_profileUserToDisplay;
    NSLayoutConstraint *_imageTopConstraint;
    NSLayoutConstraint *_imageBottomConstraint;
    NSLayoutConstraint *_actionsHeightConstraint;
    NSLayoutConstraint *_actionsBottomConstraint;
}

+ (id)borderColorForTheme:(unsigned long long)arg1;
+ (id)linkTextColorForTheme:(unsigned long long)arg1;
+ (id)primaryTextColorForTheme:(unsigned long long)arg1;
+ (id)backgroundColorForTheme:(unsigned long long)arg1;
+ (id)layoutForTweetViewStyle:(unsigned long long)arg1 metrics:(id)arg2;
+ (void)initialize;
@property(retain, nonatomic) NSLayoutConstraint *actionsBottomConstraint; // @synthesize actionsBottomConstraint=_actionsBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *actionsHeightConstraint; // @synthesize actionsHeightConstraint=_actionsHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageBottomConstraint; // @synthesize imageBottomConstraint=_imageBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *imageTopConstraint; // @synthesize imageTopConstraint=_imageTopConstraint;
@property(retain, nonatomic) TWTRUser *profileUserToDisplay; // @synthesize profileUserToDisplay=_profileUserToDisplay;
@property(retain, nonatomic) TWTRTweetViewMetrics *metrics; // @synthesize metrics=_metrics;
@property(nonatomic) _Bool doneInitializing; // @synthesize doneInitializing=_doneInitializing;
@property(nonatomic) _Bool calculationOnly; // @synthesize calculationOnly=_calculationOnly;
@property(readonly, nonatomic) TWTRTweetContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) TWTRTweetPresenter *tweetPresenter; // @synthesize tweetPresenter=_tweetPresenter;
@property(retain, nonatomic) TWTRShareButton *shareButton; // @synthesize shareButton=_shareButton;
@property(retain, nonatomic) TWTRLikeButton *likeButton; // @synthesize likeButton=_likeButton;
@property(readonly, nonatomic) UIView *actionContainer; // @synthesize actionContainer=_actionContainer;
@property(readonly, nonatomic) NSLayoutConstraint *attachmentBottomMarginConstraint; // @synthesize attachmentBottomMarginConstraint=_attachmentBottomMarginConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *attachmentTopMarginConstraint; // @synthesize attachmentTopMarginConstraint=_attachmentTopMarginConstraint;
@property(retain, nonatomic) TWTRTweetContentView *attachmentContentView; // @synthesize attachmentContentView=_attachmentContentView;
@property(readonly, nonatomic) UIView *attachmentContainer; // @synthesize attachmentContainer=_attachmentContainer;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(nonatomic) __weak id <TWTRTweetViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) unsigned long long theme; // @synthesize theme=_theme;
@property(nonatomic) _Bool showActionButtons; // @synthesize showActionButtons=_showActionButtons;
@property(nonatomic) _Bool showBorder; // @synthesize showBorder=_showBorder;
@property(retain, nonatomic) UIColor *linkTextColor; // @synthesize linkTextColor=_linkTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
- (void).cxx_destruct;
- (void)dealloc;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (id)viewControllerToPresentFromTweetMediaView:(id)arg1;
- (void)allowDelegateToHandlePresentationOfVideo:(id)arg1;
- (_Bool)shouldAllowDelegateToHandlePresentationOfVideo;
- (void)allowDelegateToHandlePresentationOfImageMediaEntity:(id)arg1;
- (_Bool)shouldAllowDelegateToHandlePresentationOfImageMediaEntity;
- (_Bool)tweetMediaView:(id)arg1 shouldPresentVideoForConfiguration:(id)arg2;
- (_Bool)tweetMediaView:(id)arg1 shouldPresentImageForMediaEntity:(id)arg2;
- (void)profileHeaderView:(id)arg1 didTapProfileForUser:(id)arg2;
- (void)attributedLabel:(id)arg1 didTapTweetUserMentionEntity:(id)arg2;
- (void)attributedLabel:(id)arg1 didTapTweetCashtagEntity:(id)arg2;
- (void)attributedLabel:(id)arg1 didTapTweetHashtagEntity:(id)arg2;
- (void)attributedLabel:(id)arg1 didTapTweetURLEntity:(id)arg2;
- (id)videoMetaData;
- (void)handleTappingTweet:(id)arg1;
- (void)quoteTweetTapped;
- (void)backgroundTapped;
- (void)updateConstraintConstants;
- (void)updateConstraints;
- (void)setupActionBarConstraints;
- (void)setupContainerViewConstraints;
- (void)setupConstraints;
- (void)updateAttachmentViewWithTweet:(id)arg1;
- (void)configureWithTweet:(id)arg1;
- (id)tweetToDisplay;
- (void)objectUpdated:(id)arg1;
- (void)updateComputedColorsForContentView:(id)arg1;
- (void)setNeedsComputedColorsUpdate;
- (void)updateBorder;
- (void)setupGestureRecognizers;
@property(readonly, copy) NSString *debugDescription;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithTweet:(id)arg1 style:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithTweet:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

