//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPlayer, AVPlayerItem, NSObject, TWTRVideoPlaybackConfiguration, TWTRVideoPlayerViewLayer, UIActivityIndicatorView, UIImageView;
@protocol OS_dispatch_queue, TWTRVideoPlayerScribeDelegate, TWTRVideoPlayerViewDelegate;

@interface TWTRVideoPlayerView : UIView
{
    _Bool _didRegisterForNotifications;
    _Bool _playerHasBecomeReady;
    _Bool _shouldAutoPlay;
    _Bool _shouldAutoLoop;
    id <TWTRVideoPlayerViewDelegate> _delegate;
    id <TWTRVideoPlayerScribeDelegate> _scribeDelegate;
    long long _playbackState;
    AVPlayerItem *_playerItem;
    AVPlayer *_player;
    NSObject<OS_dispatch_queue> *_serialConfigurationQueue;
    id _playerObserver;
    TWTRVideoPlayerViewLayer *_playerLayerView;
    TWTRVideoPlaybackConfiguration *_configuration;
    UIActivityIndicatorView *_loadingView;
    UIImageView *_previewImageView;
}

+ (CDStruct_1b6d18a9)standardTotalTrimAmount;
+ (CDStruct_1b6d18a9)standardTrim;
+ (id)seamlessLoopingVinePlayerItemFromURL:(id)arg1;
@property(readonly, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(readonly, nonatomic) UIActivityIndicatorView *loadingView; // @synthesize loadingView=_loadingView;
@property(readonly, nonatomic) TWTRVideoPlaybackConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly, nonatomic) TWTRVideoPlayerViewLayer *playerLayerView; // @synthesize playerLayerView=_playerLayerView;
@property(retain, nonatomic) id playerObserver; // @synthesize playerObserver=_playerObserver;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialConfigurationQueue; // @synthesize serialConfigurationQueue=_serialConfigurationQueue;
@property(readonly, nonatomic) AVPlayer *player; // @synthesize player=_player;
@property(readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;
@property(nonatomic) long long playbackState; // @synthesize playbackState=_playbackState;
@property(nonatomic) __weak id <TWTRVideoPlayerScribeDelegate> scribeDelegate; // @synthesize scribeDelegate=_scribeDelegate;
@property(nonatomic) __weak id <TWTRVideoPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldAutoLoop; // @synthesize shouldAutoLoop=_shouldAutoLoop;
@property(nonatomic) _Bool shouldAutoPlay; // @synthesize shouldAutoPlay=_shouldAutoPlay;
- (void).cxx_destruct;
- (double)timeIntervalFromTime:(CDStruct_1b6d18a9)arg1;
@property(readonly, nonatomic) double videoDuration;
- (double)elapsedTime;
- (void)seekToPosition:(double)arg1;
- (void)proceedToNextPlaybackState;
- (void)pause;
- (void)play;
- (void)restart;
- (_Bool)isVideoReadyToPlay;
- (void)playerDidBecomeReady;
- (void)handlePlayerDidReachEndNotification:(id)arg1;
- (void)handlePlayerStatusChange:(id)arg1;
- (void)unregisterAnalyticsObservers;
- (void)registerAnalyticsObservers;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)unregisterObservers;
- (void)registerObservers;
@property(readonly, nonatomic) struct CGRect videoRect;
- (void)loadVideo;
- (void)performOnMain:(CDUnknownBlockType)arg1;
- (void)configureVideoPlayerInSerialQueue;
- (void)configureVideoPlayer;
- (void)prepareSubviewsWithPreviewImage:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 videoPlaybackConfiguration:(id)arg2 previewImage:(id)arg3 shouldLoadVideo:(_Bool)arg4;

@end

