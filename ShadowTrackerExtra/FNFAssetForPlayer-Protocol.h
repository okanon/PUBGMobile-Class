//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, NSError, NSString;
@protocol FNFAssetEventListener;

@protocol FNFAssetForPlayer
@property(readonly, nonatomic) int pauseReason;
@property(readonly, nonatomic) CDStruct_1b6d18a9 minBufferTime;
@property(readonly, nonatomic) CDStruct_1b6d18a9 maxBufferTime;
@property(readonly, nonatomic) long long status;
- (_Bool)isProtectedContent;
- (void)setIsSoundMuted:(_Bool)arg1;
- (void)setAssetEventListener:(id <FNFAssetEventListener>)arg1;
- (double)prepareToSeekWithPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)isDurationFinal;
- (_Bool)decompressedFramebuffer;
- (NSString *)qualityLabel;
- (NSString *)debugDetails;
- (struct CGAffineTransform)preferredTransform;
- (CDStruct_1b6d18a9)timeAfterSeek;
- (void)playbackStarted;
- (void)playbackPauseRequested:(int)arg1;
- (_Bool)resetAssetToBeginningIfNeeded;
- (_Bool)seekToPosition:(CDStruct_1b6d18a9)arg1;
- (_Bool)shouldBufferVideoAsSoonAsPossible;
- (_Bool)stallingForTrack:(long long)arg1;
- (_Bool)shouldRestartAfterStalling;
- (_Bool)shouldPauseForStallingWithNextCheckCallback:(void (^)(void))arg1 stallReason:(int)arg2;
- (void)updatePlaybackTime:(CDStruct_1b6d18a9)arg1;
- (void)advanceFrameForTrack:(long long)arg1;
- (const char *)currentFrameDataForTrack:(long long)arg1;
- (struct FNFFrameMetadata)currentFrameMetadataForTrack:(long long)arg1;
- (_Bool)trackHasMoreFrames:(long long)arg1;
- (_Bool)mpdContainsAttributeUsingASRCaptions;
- (NSString *)mpdAccessibilityDescription;
- (NSString *)audioRepresentationId;
- (NSString *)representationId;
- (void)addErrorToLog:(NSError *)arg1 shouldStopPlayback:(_Bool)arg2;
- (_Bool)containsTrack:(long long)arg1;
- (CDStruct_1b6d18a9)duration;
- (NSString *)audioChannelConfiguration;
- (NSString *)projection;
- (NSDictionary *)audioStreamExtraParameters;
- (struct AudioStreamBasicDescription)asbd;
- (struct opaqueCMFormatDescription *)formatDesc;
@end

