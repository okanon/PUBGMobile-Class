//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GADMonitorOwner.h"
#import "GADPresenting.h"

@class GADCloseButton, GADEventContext, GADObserverCollection, GADWindowScene, NSMutableArray, NSString, UIView;

@interface GADFullScreenAdViewController : UIViewController <GADPresenting, GADMonitorOwner>
{
    _Bool _viewWasConfigured;
    _Bool _viewHasAppearedAtLeastOnce;
    _Bool _relinquishScreenCalled;
    _Bool _webViewProcessDidTerminate;
    UIView *_adView;
    NSMutableArray *_monitors;
    GADEventContext *_context;
    GADObserverCollection *_observers;
    GADObserverCollection *_willDeactivateObservers;
    long long _lastOrientation;
    double _backgroundTimeIntervalSinceBoot;
    _Bool _adOrientationsOverridesLockedOrientation;
    _Bool _presented;
    GADCloseButton *_closeButton;
    unsigned long long _supportedInterfaceOrientations;
    unsigned long long _adOrientations;
    long long _forcedAdOrientation;
    double _orientationUpdateAnimationDuration;
    double _maxCroppedWidth;
    double _maxCroppedHeight;
    double _maxBackgroundTimeIntervalWithoutDismissing;
}

@property(nonatomic) double maxBackgroundTimeIntervalWithoutDismissing; // @synthesize maxBackgroundTimeIntervalWithoutDismissing=_maxBackgroundTimeIntervalWithoutDismissing;
@property(nonatomic) double maxCroppedHeight; // @synthesize maxCroppedHeight=_maxCroppedHeight;
@property(nonatomic) double maxCroppedWidth; // @synthesize maxCroppedWidth=_maxCroppedWidth;
@property(readonly, nonatomic) _Bool presented; // @synthesize presented=_presented;
@property(nonatomic) _Bool adOrientationsOverridesLockedOrientation; // @synthesize adOrientationsOverridesLockedOrientation=_adOrientationsOverridesLockedOrientation;
@property(nonatomic) double orientationUpdateAnimationDuration; // @synthesize orientationUpdateAnimationDuration=_orientationUpdateAnimationDuration;
@property(nonatomic) long long forcedAdOrientation; // @synthesize forcedAdOrientation=_forcedAdOrientation;
@property(nonatomic) unsigned long long adOrientations; // @synthesize adOrientations=_adOrientations;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(readonly, nonatomic) GADCloseButton *closeButton; // @synthesize closeButton=_closeButton;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak GADWindowScene *windowScene;
- (void)relinquishScreenWithCompletion:(CDUnknownBlockType)arg1;
- (void)presentFromViewController:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)shouldDismissOnApplicationEnteringForeground;
- (void)updateBackgroundTimeIntervalSinceBoot;
- (_Bool)canPresentFromViewController:(id)arg1;
- (void)viewChangedToOrientation:(long long)arg1;
- (void)handleCloseButtonPressed;
- (void)positionTestAdLabel;
- (void)addMonitor:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)contentFitsInSize:(struct CGSize)arg1;
- (void)configureView;
- (void)viewDidLoad;
- (_Bool)shouldAutorotate;
- (_Bool)prefersStatusBarHidden;
@property(readonly, nonatomic) GADEventContext *context;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithView:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

