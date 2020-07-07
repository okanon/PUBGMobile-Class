//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSError, NSString, UIView, UIViewController, VungleMRAIDAd, VungleMRAIDController;
@protocol VungleReportable;

@protocol VungleMRAIDControllerDelegate <NSObject>
- (void)vungleMRAIDControllerIsEnteringBackgroundWithReportable:(id <VungleReportable>)arg1;
- (void)vungleMRAIDControllerDidCloseAdExperienceWithReportable:(id <VungleReportable>)arg1;
- (void)vungleMRAIDControllerWillCloseAdExperienceWithReportable:(id <VungleReportable>)arg1;
- (void)vungleMRAIDControllerWillStartAdExperienceWithReportable:(id <VungleReportable>)arg1;
- (void)vungleMRAIDControllerSuccessfulView:(_Bool)arg1 reportable:(id <VungleReportable>)arg2;
- (void)vungleMRAIDControllerPresentStoreView;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 prepareStoreViewWithAppStoreID:(NSString *)arg2;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 executeRequestWithTPATURLArray:(NSArray *)arg2;
- (unsigned long long)vungleMRAIDControllerOrientationMask;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 setOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 didLoadAdInContainerView:(UIView *)arg2;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 didFailToLoadAd:(VungleMRAIDAd *)arg2 error:(NSError *)arg3;
- (UIViewController *)controllerToPresentModalAdView;
@end

