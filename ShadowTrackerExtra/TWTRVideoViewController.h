//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "TWTRMediaContainerPresentable-Protocol.h"
#import "TWTRVideoCTAViewDelegate-Protocol.h"
#import "TWTRVideoPlayerScribeDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSLayoutConstraint, NSString, TWTRTweet, TWTRVideoControlsView, TWTRVideoControlsViewSynchronizer, TWTRVideoPlaybackConfiguration, TWTRVideoPlayerView, UIGestureRecognizer, UIImage, UIView;

@interface TWTRVideoViewController : UIViewController <UIGestureRecognizerDelegate, TWTRVideoPlayerScribeDelegate, TWTRVideoCTAViewDelegate, TWTRMediaContainerPresentable>
{
    TWTRTweet *_tweet;
    TWTRVideoPlaybackConfiguration *_playbackConfiguration;
    UIImage *_thumbnailImage;
    TWTRVideoPlayerView *_videoPlayerView;
    TWTRVideoControlsView *_videoControlsView;
    TWTRVideoControlsViewSynchronizer *_synchronizer;
    UIView *_bottomBarContainer;
    UIView *_mediaContainer;
    UIGestureRecognizer *_backgroundTapGestureRecognizer;
    UIGestureRecognizer *_videoTapGestureRecognizer;
    NSLayoutConstraint *_CTATopConstraint;
    NSLayoutConstraint *_CTABottomConstraint;
    UIView *_CTAView;
}

@property(readonly, nonatomic) UIView *CTAView; // @synthesize CTAView=_CTAView;
@property(readonly, nonatomic) NSLayoutConstraint *CTABottomConstraint; // @synthesize CTABottomConstraint=_CTABottomConstraint;
@property(readonly, nonatomic) NSLayoutConstraint *CTATopConstraint; // @synthesize CTATopConstraint=_CTATopConstraint;
@property(readonly, nonatomic) UIGestureRecognizer *videoTapGestureRecognizer; // @synthesize videoTapGestureRecognizer=_videoTapGestureRecognizer;
@property(readonly, nonatomic) UIGestureRecognizer *backgroundTapGestureRecognizer; // @synthesize backgroundTapGestureRecognizer=_backgroundTapGestureRecognizer;
@property(readonly, nonatomic) UIView *mediaContainer; // @synthesize mediaContainer=_mediaContainer;
@property(readonly, nonatomic) UIView *bottomBarContainer; // @synthesize bottomBarContainer=_bottomBarContainer;
@property(readonly, nonatomic) TWTRVideoControlsViewSynchronizer *synchronizer; // @synthesize synchronizer=_synchronizer;
@property(readonly, nonatomic) TWTRVideoControlsView *videoControlsView; // @synthesize videoControlsView=_videoControlsView;
@property(readonly, nonatomic) TWTRVideoPlayerView *videoPlayerView; // @synthesize videoPlayerView=_videoPlayerView;
@property(readonly, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property(readonly, nonatomic) TWTRVideoPlaybackConfiguration *playbackConfiguration; // @synthesize playbackConfiguration=_playbackConfiguration;
@property(readonly, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
- (void).cxx_destruct;
- (void)transitionDidComplete;
- (void)transitionWillBegin;
- (struct CGRect)transitionImageTargetFrame;
- (id)transitionImage;
- (void)didDismissInMediaContainer;
- (void)willShowInMediaContainer;
- (void)videoCTAView:(id)arg1 willDeeplinkToTargetURL:(id)arg2;
- (void)videoPlayer:(id)arg1 didPlayPercentOfMedia:(unsigned long long)arg2 playbackConfiguration:(id)arg3;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)backgroundGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)videoGestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (double)aspectRatioForMediaContainer;
- (struct CGRect)mediaContainerTargetFrame;
- (void)setChromeVisible:(_Bool)arg1 animated:(_Bool)arg2;
- (_Bool)isChromeVisible;
- (void)handleVideoTap;
- (void)handleBackgroundTap;
- (void)prepareVideoSynchronizer;
- (void)installGestureRecognizers;
- (id)makeCTAViewWithConfiguration:(id)arg1;
- (void)prepareMediaContainer;
- (void)addVideoControlsToBottomBar:(id)arg1;
- (void)prepareCallToActionView;
- (void)prepareBottomBar;
- (void)prepareSubviews;
- (void)viewDidLoad;
- (id)initWithTweet:(id)arg1 playbackConfiguration:(id)arg2 previewImage:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

