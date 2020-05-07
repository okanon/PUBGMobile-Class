//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAd, GADExpandActionMonitorConfiguration, GADFullScreenAdViewController, GADMRAIDResizePresenter, GADObserverCollection, GADScheduler, GADWebAdView;

@interface GADMRAIDActionMonitor : NSObject
{
    GADAd *_ad;
    GADWebAdView *_webAdView;
    GADExpandActionMonitorConfiguration *_configuration;
    _Bool _isMRAIDAdView;
    GADObserverCollection *_observers;
    GADObserverCollection *_SDKReadyObservers;
    GADScheduler *_updatePositionScheduler;
    struct CGRect _usableInterfaceFrame;
    struct CGRect _creativeWebViewFrame;
    struct CGRect _defaultAdFrame;
    GADMRAIDResizePresenter *_resizePresenter;
    GADObserverCollection *_resizeObservers;
    GADFullScreenAdViewController *_expandablePresenter;
    GADObserverCollection *_expandableObservers;
    _Bool _visible;
}

- (void).cxx_destruct;
- (void)handleSetOrientationPropertiesAction:(id)arg1;
- (void)handleUnloadAction:(id)arg1;
- (void)handleStorePictureAction:(id)arg1;
- (void)handleOpenCalendarAction:(id)arg1;
- (void)handleAdExpandDidEndEvent:(id)arg1;
- (void)configureMRAIDCloseButtonForExpandable:(id)arg1;
- (void)handleAdWillExpandEvent:(id)arg1;
- (void)handleResizeAction:(id)arg1;
- (void)restoreBannerState;
- (void)notifyCurrentMRAIDState;
- (id)currentMRAIDState;
- (void)updateVisibility;
- (void)notifyOrientationToCreative;
- (void)updatePosition;
- (void)notifyErrorWithMessage:(id)arg1 forAction:(id)arg2;
- (void)notifyDeviceFeatures;
- (void)attachObserversToExpandablePresenter;
- (void)postSDKReadyEvent;
- (void)postSDKReadyEventWhenSwappableViewAddedToWindow;
- (void)didLoadMRAID;
- (void)setReferenceView:(id)arg1;
- (void)dealloc;
- (id)initWithAd:(id)arg1 visibilityMessageSource:(id)arg2 webAdView:(id)arg3 configuration:(id)arg4;

@end

