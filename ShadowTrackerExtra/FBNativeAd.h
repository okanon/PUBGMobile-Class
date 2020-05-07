//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FBNativeAdBase.h"

#import "FBNativeAdBaseDelegate.h"
#import "NSCopying.h"

@class FBAdImage, NSString;

@interface FBNativeAd : FBNativeAdBase <NSCopying, FBNativeAdBaseDelegate>
{
    id <FBNativeAdDelegate> _delegate;
}

+ (id)fakeNativeAd;
@property(nonatomic) __weak id <FBNativeAdDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nativeAdBaseDidFinishHandling:(id)arg1;
- (void)nativeAdBaseDidClick:(id)arg1;
- (void)nativeAdBase:(id)arg1 didFailWithError:(id)arg2;
- (void)nativeAdBaseWillLogImpression:(id)arg1;
- (void)nativeAdBaseDidDownloadMedia:(id)arg1;
- (void)nativeAdBaseDidLoad:(id)arg1;
- (id)generateLoggingDataWithExtraData:(id)arg1;
- (void)tellDelegateMediaViewIsNotSet;
@property(readonly, nonatomic) FBAdImage *coverImage;
- (void)downloadMedia;
- (void)registerViewForInteraction:(id)arg1 viewController:(id)arg2 clickableViews:(id)arg3 mediaView:(id)arg4;
- (void)registerViewForInteraction:(id)arg1 mediaView:(id)arg2 iconImageView:(id)arg3 viewController:(id)arg4 clickableViews:(id)arg5;
- (void)registerViewForInteraction:(id)arg1 mediaView:(id)arg2 iconImageView:(id)arg3 viewController:(id)arg4;
- (void)registerViewForInteraction:(id)arg1 mediaView:(id)arg2 iconView:(id)arg3 viewController:(id)arg4 clickableViews:(id)arg5;
- (void)registerViewForInteraction:(id)arg1 mediaView:(id)arg2 iconView:(id)arg3 viewController:(id)arg4;
- (id)initWithPlacementID:(id)arg1;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPlacementID:(id)arg1 adProvider:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

