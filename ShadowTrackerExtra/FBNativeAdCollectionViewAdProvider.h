//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBNativeAdDelegate.h"
#import "FBNativeAdsManagerDelegate.h"

@class FBAdExtraHint, FBNativeAdsManager, NSMutableDictionary, NSString;

@interface FBNativeAdCollectionViewAdProvider : NSObject <FBNativeAdDelegate, FBNativeAdsManagerDelegate>
{
    id <FBNativeAdDelegate> _delegate;
    FBNativeAdsManager *_manager;
    NSMutableDictionary *_currentIndexPathToAdMap;
}

@property(retain, nonatomic) NSMutableDictionary *currentIndexPathToAdMap; // @synthesize currentIndexPathToAdMap=_currentIndexPathToAdMap;
@property(retain, nonatomic) FBNativeAdsManager *manager; // @synthesize manager=_manager;
@property(nonatomic) __weak id <FBNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nativeAdWillLogImpression:(id)arg1;
- (void)nativeAdDidFinishHandlingClick:(id)arg1;
- (void)nativeAdDidClick:(id)arg1;
- (unsigned long long)adjustCount:(unsigned long long)arg1 forStride:(unsigned long long)arg2;
- (id)adjustNonAdCellIndexPath:(id)arg1 forStride:(unsigned long long)arg2;
- (_Bool)isAdCellAtIndexPath:(id)arg1 forStride:(unsigned long long)arg2;
- (id)collectionView:(id)arg1 nativeAdForRowAtIndexPath:(id)arg2;
- (void)nativeAdsFailedToLoadWithError:(id)arg1;
- (void)nativeAdsLoaded;
@property(retain, nonatomic) FBAdExtraHint *extraHint;
- (id)initWithManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

