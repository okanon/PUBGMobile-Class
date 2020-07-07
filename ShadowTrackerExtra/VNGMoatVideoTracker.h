//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VNGMoatBaseTracker.h"

@class NSArray, NSMutableDictionary, NSTimer, UIView, VNGMoatWebView;

@interface VNGMoatVideoTracker : VNGMoatBaseTracker
{
    _Bool _misTracking;
    _Bool _initialized;
    _Bool _isDestroyed;
    float _lastVolume;
    int _nanLoops;
    id _player;
    UIView *_attachmentView;
    double _lastPlayhead;
    double _duration;
    unsigned long long _playerState;
    NSMutableDictionary *_adIds;
    NSMutableDictionary *_oneTimeEventsDispatched;
    NSArray *_quartileEvents;
    VNGMoatWebView *_mWebView;
    NSTimer *_timer;
    struct CGRect _playerDims;
}

+ (id)trackerWithPartnerCode:(id)arg1;
@property _Bool isDestroyed; // @synthesize isDestroyed=_isDestroyed;
@property _Bool initialized; // @synthesize initialized=_initialized;
@property _Bool misTracking; // @synthesize misTracking=_misTracking;
@property(retain) NSTimer *timer; // @synthesize timer=_timer;
@property int nanLoops; // @synthesize nanLoops=_nanLoops;
@property(retain) VNGMoatWebView *mWebView; // @synthesize mWebView=_mWebView;
@property(retain) NSArray *quartileEvents; // @synthesize quartileEvents=_quartileEvents;
@property(retain) NSMutableDictionary *oneTimeEventsDispatched; // @synthesize oneTimeEventsDispatched=_oneTimeEventsDispatched;
@property(retain) NSMutableDictionary *adIds; // @synthesize adIds=_adIds;
@property struct CGRect playerDims; // @synthesize playerDims=_playerDims;
@property unsigned long long playerState; // @synthesize playerState=_playerState;
@property double duration; // @synthesize duration=_duration;
@property double lastPlayhead; // @synthesize lastPlayhead=_lastPlayhead;
@property float lastVolume; // @synthesize lastVolume=_lastVolume;
@property __weak UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property __weak id player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)destroy;
- (void)dealloc;
- (_Bool)isTracking;
- (float)getSystemVolume;
- (void)handleMPNotification:(id)arg1;
- (void)updateScreenMode:(id)arg1;
- (void)handleMPStop:(id)arg1;
- (void)handleAVStop:(id)arg1;
- (void)sendLastEventThreadSafe:(id)arg1;
- (void)sendLastEvent:(id)arg1;
- (id)getLastEvent;
- (void)dispatchEventThreadSafe:(id)arg1;
- (void)dispatchEvent:(id)arg1;
- (void)checkPlayback:(id)arg1;
- (void)checkMPPlayback;
- (void)checkAVPlayBack;
- (id)getMPParams:(id)arg1;
- (id)getAVParams:(id)arg1;
- (void)startMPVideoLoop;
- (void)startAVVideoLoop;
- (void)startTracking:(double)arg1;
- (_Bool)setTrackingParams:(id)arg1 playerDims:(struct CGRect)arg2 attachmentView:(id)arg3 targetLayer:(id)arg4;
- (_Bool)checkOkToTrack;
- (id)initTracker:(id)arg1;
- (void)stopTracking;
- (void)changeTargetLayer:(id)arg1 withContainingView:(id)arg2;
- (_Bool)trackVideoAd:(id)arg1 usingAVMoviePlayer:(id)arg2 withLayer:(id)arg3 withContainingView:(id)arg4;
- (_Bool)trackVideoAd:(id)arg1 usingMPMoviePlayer:(id)arg2;

@end

