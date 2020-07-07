//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADMediatedNativeAd-Protocol.h"

@class GADNativeAdImage, NSArray, NSString, UIView;

@protocol GADMediatedNativeContentAd <GADMediatedNativeAd>
- (NSString *)advertiser;
- (NSString *)callToAction;
- (GADNativeAdImage *)logo;
- (NSArray *)images;
- (NSString *)body;
- (NSString *)headline;

@optional
- (_Bool)hasVideoContent;
- (UIView *)mediaView;
- (UIView *)adChoicesView;
@end

