//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADVideoControlling.h"

@class GADObserverCollection, NSObject<OS_dispatch_queue>, NSString;

@interface GADVideoController : NSObject <GADVideoControlling>
{
    id <GADVideoControlling> _internalVideoController;
    GADObserverCollection *_collection;
    NSObject<OS_dispatch_queue> *_lockQueue;
    CDUnknownBlockType _playbackEndedBlock;
    id <GADVideoControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <GADVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startObservingAdVideoController;
- (_Bool)clickToExpandEnabled;
- (long long)videoPlaybackState;
- (_Bool)customControlsEnabled;
- (_Bool)isMuted;
- (double)currentTime;
- (double)duration;
- (void)setInitialStateWithConfigurations:(id)arg1;
- (double)aspectRatio;
- (_Bool)hasVideoContent;
- (void)setMute:(_Bool)arg1;
- (void)stop;
- (void)pause;
- (void)play;
@property(retain) id <GADVideoControlling> internalVideoController;
- (void)setVideoPlaybackEndedBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

