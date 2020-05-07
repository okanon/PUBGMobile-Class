//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAdProviderDelegate.h"
#import "FBDisplayAdAdapterDelegate.h"

@class FBAdCandidate, FBAdEnvironmentData, FBAdPlacementDefinition, FBAdProvider, FBAdTimer, FBDisplayAdAdapter, FBRewardedVideoRewardData, NSString;

@interface FBDisplayAdAdapterController : NSObject <FBAdProviderDelegate, FBDisplayAdAdapterDelegate>
{
    _Bool _flexibleAdSize;
    id <FBDisplayAdAdapterControllerDelegate> _delegate;
    FBDisplayAdAdapter *_adapter;
    FBAdCandidate *_adCandidate;
    FBAdPlacementDefinition *_placementDefinition;
    FBAdProvider *_adProvider;
    FBAdEnvironmentData *_environment;
    FBAdTimer *_adapterTimeoutTimer;
    FBRewardedVideoRewardData *_rewardData;
    double _adapterLoadTime;
    long long _retryCount;
    struct CGSize _actualAdSize;
    struct FBAdSize _adSizeType;
}

+ (id)placementTypeToAdFormatMap;
+ (id)adFormatWithPlacementType:(long long)arg1;
@property(nonatomic) long long retryCount; // @synthesize retryCount=_retryCount;
@property(nonatomic) double adapterLoadTime; // @synthesize adapterLoadTime=_adapterLoadTime;
@property(nonatomic) struct FBAdSize adSizeType; // @synthesize adSizeType=_adSizeType;
@property(nonatomic) struct CGSize actualAdSize; // @synthesize actualAdSize=_actualAdSize;
@property(retain, nonatomic) FBRewardedVideoRewardData *rewardData; // @synthesize rewardData=_rewardData;
@property(nonatomic, getter=isFlexibleAdSize) _Bool flexibleAdSize; // @synthesize flexibleAdSize=_flexibleAdSize;
@property(retain, nonatomic) FBAdTimer *adapterTimeoutTimer; // @synthesize adapterTimeoutTimer=_adapterTimeoutTimer;
@property(retain, nonatomic) FBAdEnvironmentData *environment; // @synthesize environment=_environment;
@property(retain, nonatomic) FBAdProvider *adProvider; // @synthesize adProvider=_adProvider;
@property(retain, nonatomic) FBAdPlacementDefinition *placementDefinition; // @synthesize placementDefinition=_placementDefinition;
@property(retain, nonatomic) FBAdCandidate *adCandidate; // @synthesize adCandidate=_adCandidate;
@property(retain, nonatomic) FBDisplayAdAdapter *adapter; // @synthesize adapter=_adapter;
@property(nonatomic) __weak id <FBDisplayAdAdapterControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)adapterServerRewardFailed:(id)arg1;
- (void)adapterServerRewardSuccess:(id)arg1;
- (void)adapterVideoDidComplete:(id)arg1;
- (void)adapterDidUnload:(id)arg1;
- (void)adapterWillUnload:(id)arg1;
- (void)adapterDidFinishHandlingClick:(id)arg1;
- (void)adapterWillLogImpression:(id)arg1;
- (void)adapterDidClick:(id)arg1 url:(id)arg2 playerHandles:(_Bool)arg3;
- (void)adapterDidLoad:(id)arg1;
- (void)adapter:(id)arg1 didFailWithError:(id)arg2;
- (void)logAdapterFailureWithAdapter:(id)arg1 error:(id)arg2;
- (void)onAdRequestSuccess:(id)arg1;
- (void)onAdRequestError:(id)arg1;
- (id)adapterForPlacementType:(long long)arg1;
- (void)invalidateCurrentAd;
- (_Bool)loadWithAdCandidate:(id)arg1;
- (void)setInitialAdViewSize:(struct FBAdSize)arg1;
- (void)retry;
- (void)loadAd;
- (void)invalidateInProgressAd;
- (void)scheduleTimeout:(long long)arg1;
- (void)invalidateTimeoutTimer;
- (void)loadAdapter;
- (_Bool)startAdFromRootViewController:(id)arg1 animated:(_Bool)arg2;
- (_Bool)updateRewardData:(id)arg1;
- (void)refresh;
- (void)dealloc;
- (void)loadAdWithProvider:(id)arg1 withEnvironment:(id)arg2 withRewardData:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

