//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class FBAdPlacementDefinition, FBNativeAdDataModel, NSNumber;

@protocol FBAdDisplayable
@property(readonly, nonatomic) CDStruct_1b6d18a9 currentTime;
@property(nonatomic) _Bool canPlayVideo;
- (void)configureVolume:(double)arg1;
- (void)setPlaying:(_Bool)arg1 forced:(_Bool)arg2;
- (void)destroyAd;
- (void)showAd;
- (void)loadAdFromDataModel:(FBNativeAdDataModel *)arg1 placementDefinition:(FBAdPlacementDefinition *)arg2 carouselPageNumber:(NSNumber *)arg3 totalPages:(NSNumber *)arg4;
- (void)loadAdFromDataModel:(FBNativeAdDataModel *)arg1 placementDefinition:(FBAdPlacementDefinition *)arg2;
@end

