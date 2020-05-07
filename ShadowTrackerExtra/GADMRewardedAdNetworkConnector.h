//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdPresenting.h"
#import "GADMediationRewardedAdEventDelegate.h"
#import "GADRewardedConnector.h"

@class GADInterstitialAd, GADMediatedIntermission, GADMediationRewardBasedVideoAdRenderer, NSDictionary, NSString;

@interface GADMRewardedAdNetworkConnector : NSObject <GADMediationRewardedAdEventDelegate, GADAdPresenting, GADRewardedConnector>
{
    id <GADMediationAdapter> _rewardedAdAdapter;
    NSString *_adapterClassName;
    GADInterstitialAd *_rewardedAd;
    id <GADMediationRewardedAd> _mediationRewardedAd;
    GADMediatedIntermission *_intermission;
    GADMediationRewardBasedVideoAdRenderer *_renderer;
    NSDictionary *_adConfiguration;
}

@property(copy, nonatomic) NSDictionary *adConfiguration; // @synthesize adConfiguration=_adConfiguration;
@property(nonatomic) __weak GADMediationRewardBasedVideoAdRenderer *renderer; // @synthesize renderer=_renderer;
- (void).cxx_destruct;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresentFromViewController:(id)arg1;
- (void)willDismissFullScreenView;
- (void)reportImpression;
- (void)didRewardUserWithReward:(id)arg1;
- (void)didEndVideo;
- (void)didStartVideo;
- (void)reportClick;
- (void)didDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)rewardedAdDidFailToLoadWithError:(id)arg1;
- (void)rewardedAdDidLoad;
- (void)didFailToPresentWithError:(id)arg1;
@property(readonly, copy, nonatomic) NSString *adapterName;
- (void)requestRewardBasedVideoAd;
- (void)setRewardBasedVideoAd:(id)arg1;
- (id)initWithAdNetworkConfiguration:(id)arg1 adapterClassName:(id)arg2 renderer:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

