//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "FBNativeBannerAdView.h"

@class FBAdBannerTemplateHeaderView, FBNativeAdDetailsView, FBNativeAdHeaderView, NSNumber, UILabel;

@interface FBNativeBannerAdTemplateView : FBNativeBannerAdView
{
    NSNumber *_headerSize;
    NSNumber *_mediaViewSize;
    NSNumber *_detailsSize;
    UILabel *_headerTitleLabel;
    UILabel *_headerBodyLabel;
    FBNativeAdHeaderView *_headerView;
    FBNativeAdDetailsView *_detailsView;
    FBAdBannerTemplateHeaderView *_bannerHeaderView;
}

+ (id)defaultAttributes;
@property(nonatomic) __weak FBAdBannerTemplateHeaderView *bannerHeaderView; // @synthesize bannerHeaderView=_bannerHeaderView;
@property(nonatomic) __weak FBNativeAdDetailsView *detailsView; // @synthesize detailsView=_detailsView;
@property(nonatomic) __weak FBNativeAdHeaderView *headerView; // @synthesize headerView=_headerView;
@property(nonatomic) __weak UILabel *headerBodyLabel; // @synthesize headerBodyLabel=_headerBodyLabel;
@property(nonatomic) __weak UILabel *headerTitleLabel; // @synthesize headerTitleLabel=_headerTitleLabel;
@property(retain, nonatomic) NSNumber *detailsSize; // @synthesize detailsSize=_detailsSize;
@property(retain, nonatomic) NSNumber *mediaViewSize; // @synthesize mediaViewSize=_mediaViewSize;
@property(retain, nonatomic) NSNumber *headerSize; // @synthesize headerSize=_headerSize;
- (void).cxx_destruct;
- (void)setBodyTextEnabled:(_Bool)arg1;
- (_Bool)isBodyTextEnabled;
- (_Bool)shouldUseNewTemplateLayout;
- (void)updateView:(_Bool)arg1;
- (void)constructCallToActionButton;
- (void)constructIconView;
- (long long)nativeBannerAdViewType;
- (void)constructBodyView;

@end

