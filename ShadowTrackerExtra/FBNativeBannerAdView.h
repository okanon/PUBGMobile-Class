//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBNativeAdBaseView.h"

#import "FBNativeBannerAdDelegate-Protocol.h"

@class FBNativeBannerAd, NSString;

@interface FBNativeBannerAdView : FBNativeAdBaseView <FBNativeBannerAdDelegate>
{
    long long _type;
    FBNativeBannerAd *_nativeBannerAd;
}

+ (Class)classFromType:(long long)arg1;
+ (id)nativeBannerAdViewWithNativeBannerAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3;
+ (id)nativeBannerAdViewWithNativeBannerAd:(id)arg1 withType:(long long)arg2;
@property(retain, nonatomic) FBNativeBannerAd *nativeBannerAd; // @synthesize nativeBannerAd=_nativeBannerAd;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)updateAttributes:(id)arg1;
- (void)registerView;
- (id)nativeAdBase;
- (void)populate:(id)arg1;
- (void)setType:(long long)arg1;
- (id)initWithNativeAd:(id)arg1 withType:(long long)arg2 withAttributes:(id)arg3;
- (id)initWithNativeAd:(id)arg1 withType:(long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

