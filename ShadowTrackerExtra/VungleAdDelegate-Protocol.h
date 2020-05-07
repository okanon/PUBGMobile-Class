//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VunglePlacement;

@protocol VungleAdDelegate <NSObject>
- (void)willBackgroundAdViewControllerForPlacement:(VunglePlacement *)arg1 reportable:(id <VungleReportable>)arg2;
- (void)didDismissInterstitialAdViewControllerForPlacement:(VunglePlacement *)arg1 reportable:(id <VungleReportable>)arg2;
- (void)willDismissInterstitialAdViewControllerForPlacement:(VunglePlacement *)arg1 reportable:(id <VungleReportable>)arg2;
- (void)didPresentInterstitialAdViewControllerForPlacement:(VunglePlacement *)arg1;
- (void)willPresentInterstitialAdViewControllerForPlacement:(VunglePlacement *)arg1 reportable:(id <VungleReportable>)arg2;
- (void)didFinishAdViewForPlacement:(VunglePlacement *)arg1 withSuccess:(_Bool)arg2;
@end

