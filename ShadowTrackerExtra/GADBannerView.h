//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "GADAdSizeDelegate-Protocol.h"
#import "GADAdSizeDelegatePreview-Protocol.h"
#import "GADBannerViewDelegate-Protocol.h"

@class GADCorrelator, GADInternalBannerView, GADObserverCollection, GADRequest, GADResponseInfo, NSString, UIViewController;
@protocol GADAdSizeDelegate, GADBannerViewDelegate, GADInAppPurchaseDelegate;

@interface GADBannerView : UIView <GADBannerViewDelegate, GADAdSizeDelegate, GADAdSizeDelegatePreview>
{
    GADRequest *_lastRequest;
    _Bool _hasInitialized;
    GADObserverCollection *_observers;
    _Bool _autoloadEnabled;
    _Bool _hasAutoRefreshed;
    id <GADBannerViewDelegate> _delegate;
    id <GADAdSizeDelegate> _adSizeDelegate;
    id <GADInAppPurchaseDelegate> _inAppPurchaseDelegate;
    GADInternalBannerView *_bannerView;
    GADCorrelator *_correlator;
    struct GADAdSize _adSize;
}

+ (Class)bannerViewClass;
@property(retain, nonatomic) GADCorrelator *correlator; // @synthesize correlator=_correlator;
@property(readonly, nonatomic) GADInternalBannerView *bannerView; // @synthesize bannerView=_bannerView;
@property(nonatomic) __weak id <GADInAppPurchaseDelegate> inAppPurchaseDelegate; // @synthesize inAppPurchaseDelegate=_inAppPurchaseDelegate;
@property(readonly, nonatomic) _Bool hasAutoRefreshed; // @synthesize hasAutoRefreshed=_hasAutoRefreshed;
@property(nonatomic, getter=isAutoloadEnabled) _Bool autoloadEnabled; // @synthesize autoloadEnabled=_autoloadEnabled;
@property(nonatomic) __weak id <GADAdSizeDelegate> adSizeDelegate; // @synthesize adSizeDelegate=_adSizeDelegate;
@property(nonatomic) __weak id <GADBannerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
- (void).cxx_destruct;
- (void)adView:(id)arg1 willChangeAdSizeTo:(struct GADAdSize)arg2;
- (void)adViewIntrinsicContentSizeDidChange:(id)arg1;
- (void)adViewWillLeaveApplication:(id)arg1;
- (void)adViewDidDismissScreen:(id)arg1;
- (void)adViewWillDismissScreen:(id)arg1;
- (void)adViewWillPresentScreen:(id)arg1;
- (void)adView:(id)arg1 didFailToReceiveAdWithError:(id)arg2;
- (void)adViewDidReceiveAd:(id)arg1;
- (void)updateReceivedAdSizeWithPublicUpdate:(_Bool)arg1;
- (void)loadRequest:(id)arg1;
- (void)resize:(struct GADAdSize)arg1;
- (struct CGSize)sizeForAdSize:(struct GADAdSize)arg1;
- (struct GADAdSize)adSizeForSize:(struct CGSize)arg1;
@property(copy, nonatomic) CDUnknownBlockType paidEventHandler;
@property(readonly, nonatomic) __weak UIView *mediatedAdView;
@property(readonly, nonatomic) GADResponseInfo *responseInfo;
@property(readonly, nonatomic) NSString *adNetworkClassName;
@property(nonatomic) __weak UIViewController *rootViewController;
@property(copy, nonatomic) NSString *adUnitID;
@property(readonly, nonatomic) struct CGSize effectiveContentSize;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAdSize:(struct GADAdSize)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAdSize:(struct GADAdSize)arg1 origin:(struct CGPoint)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

