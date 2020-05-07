//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "FBAdEndCardAppStoreViewDelegate.h"
#import "FBAdEndCardNoMediaViewDelegate.h"
#import "FBAdEndCardScreenshotViewDelegate.h"
#import "FBAdGoToEndcardTransitionable.h"
#import "FBAdReportingCoordinatorDelegate.h"

@class FBAdDetailsAndCTAButtonContainerView, FBAdEndCardAppStoreView, FBAdEndCardNoMediaView, FBAdEndCardScreenshotView, FBAdReportingCoordinator, FBInterstitialAdToolbarView, NSString;

@interface FBAdEndCardViewController : UIViewController <FBAdReportingCoordinatorDelegate, FBAdEndCardScreenshotViewDelegate, FBAdEndCardNoMediaViewDelegate, FBAdEndCardAppStoreViewDelegate, FBAdGoToEndcardTransitionable>
{
    _Bool _shouldFadeInCloseButton;
    _Bool _isAutoRotateEnabled;
    _Bool _hasAppearedBefore;
    _Bool _useNewToolbar;
    _Bool _isAppStoreEndCard;
    id <FBAdEndCardViewControllerDelegate> _delegate;
    FBAdEndCardAppStoreView *_endCardAppStoreView;
    FBAdEndCardScreenshotView *_endCardScreenshotView;
    FBAdEndCardNoMediaView *_endCardNoMediaView;
    FBInterstitialAdToolbarView *_toolbarView;
    FBAdReportingCoordinator *_reportingCoordinator;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) FBAdReportingCoordinator *reportingCoordinator; // @synthesize reportingCoordinator=_reportingCoordinator;
@property(nonatomic) _Bool isAppStoreEndCard; // @synthesize isAppStoreEndCard=_isAppStoreEndCard;
@property(nonatomic) _Bool useNewToolbar; // @synthesize useNewToolbar=_useNewToolbar;
@property(nonatomic) _Bool hasAppearedBefore; // @synthesize hasAppearedBefore=_hasAppearedBefore;
@property(nonatomic) _Bool isAutoRotateEnabled; // @synthesize isAutoRotateEnabled=_isAutoRotateEnabled;
@property(retain, nonatomic) FBInterstitialAdToolbarView *toolbarView; // @synthesize toolbarView=_toolbarView;
@property(nonatomic) __weak FBAdEndCardNoMediaView *endCardNoMediaView; // @synthesize endCardNoMediaView=_endCardNoMediaView;
@property(nonatomic) __weak FBAdEndCardScreenshotView *endCardScreenshotView; // @synthesize endCardScreenshotView=_endCardScreenshotView;
@property(retain, nonatomic) FBAdEndCardAppStoreView *endCardAppStoreView; // @synthesize endCardAppStoreView=_endCardAppStoreView;
@property(nonatomic) __weak id <FBAdEndCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool shouldFadeInCloseButton; // @synthesize shouldFadeInCloseButton=_shouldFadeInCloseButton;
- (void).cxx_destruct;
- (void)setupNotifications;
@property(readonly, nonatomic) __weak FBAdDetailsAndCTAButtonContainerView *adDetailsAndCTAButtonContainerView;
- (void)adReportingCoordinatorDidCancelFlow:(id)arg1;
- (void)adReportingCoordinatorDidCompleteFlow:(id)arg1 reason:(id)arg2 flowType:(long long)arg3;
- (void)endCardAppStoreViewWillClose:(id)arg1;
- (void)endCardAppStoreView:(id)arg1 didFailWithError:(id)arg2;
- (void)endCardNoMediaViewDidTerminate:(id)arg1;
- (void)endCardNoMediaViewWillClose:(id)arg1;
- (void)endCardNoMediaViewClicked:(id)arg1;
- (void)endCardScreenshotViewDidTerminate:(id)arg1;
- (void)endCardScreenshotViewWillClose:(id)arg1;
- (void)endCardScreenshotViewClicked:(id)arg1;
- (void)fadeInCloseButtonWithDuration:(double)arg1 delay:(double)arg2;
- (void)hideCloseButton;
- (void)setupToolbarViewWithRootViewController:(id)arg1 adDataModel:(id)arg2;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)prefersStatusBarHidden;
- (void)dealloc;
- (id)initWithPlacementID:(id)arg1 adDataModel:(id)arg2 useNewLayout:(_Bool)arg3 useNewToolbar:(_Bool)arg4 rootViewController:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

