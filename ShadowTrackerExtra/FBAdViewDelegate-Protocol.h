//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAdView, NSError, UIViewController;

@protocol FBAdViewDelegate <NSObject>

@optional
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
- (void)adViewWillLogImpression:(FBAdView *)arg1;
- (void)adView:(FBAdView *)arg1 didFailWithError:(NSError *)arg2;
- (void)adViewDidLoad:(FBAdView *)arg1;
- (void)adViewDidFinishHandlingClick:(FBAdView *)arg1;
- (void)adViewDidClick:(FBAdView *)arg1;
@end

