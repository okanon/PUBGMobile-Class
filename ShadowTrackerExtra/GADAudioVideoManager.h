//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMapTable, NSMutableSet;

@interface GADAudioVideoManager : NSObject
{
    NSMutableSet *_playerIDsPlayingVideo;
    NSMutableSet *_playerIDsPlayingSound;
    NSMutableSet *_playerIDsPlayingUserInitiatedSound;
    NSMapTable *_playerIDsToPlayer;
    _Bool _audioSessionIsApplicationManaged;
    id <GADAudioVideoManagerDelegate> _delegate;
}

@property(nonatomic) _Bool audioSessionIsApplicationManaged; // @synthesize audioSessionIsApplicationManaged=_audioSessionIsApplicationManaged;
@property(nonatomic) __weak id <GADAudioVideoManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)playerWillDealloc:(id)arg1;
- (void)player:(id)arg1 didChangeStateToPlaying:(_Bool)arg2 muted:(_Bool)arg3 userInitiated:(_Bool)arg4;
- (void)player:(id)arg1 willChangeStateToPlaying:(_Bool)arg2 muted:(_Bool)arg3 userInitiated:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)playerWithID:(id)arg1 didChangeStateToPlaying:(_Bool)arg2 muted:(_Bool)arg3 userInitiated:(_Bool)arg4;
- (void)playerWithID:(id)arg1 willChangeStateToPlaying:(_Bool)arg2 muted:(_Bool)arg3 userInitiated:(_Bool)arg4 queue:(id)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)updateAudioSessionAfterAllVideoStopPlayingSound;
- (id)init;

@end

