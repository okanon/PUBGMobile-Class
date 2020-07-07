//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FNFAVPlayerLayer-Protocol.h"

@class NSValue;
@protocol FNFPlayerDisplayLayerDelegate;

@protocol FNFPlayerDisplayLayer <FNFAVPlayerLayer>
@property(nonatomic) __weak id <FNFPlayerDisplayLayerDelegate> displayLayerDelegate;
- (void)setShouldApplyRotationTransform:(_Bool)arg1;
- (void)resetRendering;
- (void)clearBuffers;
- (void)flushDisplayLayer:(_Bool)arg1;
- (void)updateDisplayLayer;
- (void)displayEmptyBuffer:(_Bool)arg1 preventPlayback:(_Bool)arg2 lastDisplayedSampleBuffer:(struct __CVBuffer *)arg3;
- (void)displayPixelBuffer:(struct __CVBuffer *)arg1 preferredTransform:(struct CGAffineTransform)arg2 preventPlayback:(_Bool)arg3;
- (void)initializeDisplayLayer;
- (void)setPreferredTransform:(NSValue *)arg1;
@end

