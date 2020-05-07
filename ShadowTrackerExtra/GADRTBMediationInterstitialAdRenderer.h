//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADAdPresenting.h"
#import "GADAdRendering.h"
#import "GADMediationInterstitialAdEventDelegate.h"

@class GADInterstitialAd, GADMediatedIntermission, GADMediationInterstitialAdConfiguration, NSString;

@interface GADRTBMediationInterstitialAdRenderer : NSObject <GADAdPresenting, GADMediationInterstitialAdEventDelegate, GADAdRendering>
{
    id <GADMediationAdapter> _loadingAdapter;
    GADInterstitialAd *_interstitialAd;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _clickEventReceived
    id <GADMediationInterstitialAd> _mediatedAd;
    GADMediationInterstitialAdConfiguration *_mediatedConfiguration;
    GADMediatedIntermission *_intermission;
}

- (void).cxx_destruct;
- (void)didFailToPresentWithError:(id)arg1;
- (void)willBackgroundApplication;
- (void)didDismissFullScreenView;
- (void)willDismissFullScreenView;
- (void)willPresentFullScreenView;
- (void)reportClick;
- (void)reportImpression;
- (void)presentFromViewController:(id)arg1;
- (_Bool)canPresentFromViewController:(id)arg1;
- (id)adEventDelegateForAdapter:(id)arg1 completedLoadWithAd:(id)arg2 adConfiguration:(struct NSDictionary *)arg3 transaction:(id)arg4 renderCompletionHandler:(CDUnknownBlockType)arg5;
- (void)renderWithServerTransaction:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 completionHandler:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

