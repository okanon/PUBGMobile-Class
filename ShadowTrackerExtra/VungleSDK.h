//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "VungleAdDelegate-Protocol.h"
#import "VunglePlacementsCoordinatorDelegate-Protocol.h"
#import "VungleRequestStreamingAdControllerDelegate-Protocol.h"
#import "VungleSDKInitializerDelegate-Protocol.h"
#import "VungleStreamingConfigurableDelegate-Protocol.h"

@class CADisplayLink, NSDictionary, NSString, NSUserDefaults, UIViewController, VungleAdViewController, VungleCacheManager, VungleConfigController, VungleCustomMRAIDViewController, VungleDeviceInformationProvider, VungleFlexViewPresentationManager, VungleHTTPLogSender, VungleInternalMRAIDViewController, VungleLogCoordinator, VungleNetworkManager, VungleNewRequestController, VunglePlacementsCoordinator, VunglePlayOptionsProvider, VunglePlayabilityCoordinator, VunglePublisherInformation, VungleReportAdController, VungleReportIncentivizedController, VungleRequestAdController, VungleRequestStreamingAdController, VungleSDKInitializer, VungleSleepHandler, VungleUserSegmentationController, VungleVDUIDProvider;
@protocol VungleSDKCreativeTracking, VungleSDKDelegate, VungleSDKHeaderBidding;

@interface VungleSDK : NSObject <VungleRequestStreamingAdControllerDelegate, VungleStreamingConfigurableDelegate, VungleSDKInitializerDelegate, VunglePlacementsCoordinatorDelegate, VungleAdDelegate>
{
    _Bool _muted;
    _Bool _initialized;
    _Bool _loggingEnabled;
    _Bool _isPlaying;
    _Bool _didStartup;
    _Bool _headerBiddingEnabled;
    _Bool _successfulAdView;
    _Bool _adDismissInProgress;
    _Bool _validCTAURLResolved;
    NSDictionary *_userData;
    VungleNetworkManager *_networkManager;
    unsigned long long _presentationMode;
    CADisplayLink *_link;
    double _startTime;
    double _preventPlayUntilTime;
    id _playableEventTimer;
    UIViewController *_tmpViewController;
    VungleAdViewController *_currentAdViewController;
    NSUserDefaults *_defaults;
    VungleRequestAdController *_requestAdController;
    VunglePlacementsCoordinator *_placementsCoordinator;
    VungleConfigController *_configController;
    VungleNewRequestController *_createNewRequestController;
    VungleRequestStreamingAdController *_requestStreamingAdController;
    VungleReportAdController *_reportingController;
    VungleReportIncentivizedController *_reportIncentivizedController;
    VungleInternalMRAIDViewController *_vmraidController;
    VungleCustomMRAIDViewController *_customMRAIDController;
    unsigned long long _endTaskId;
    VungleSDKInitializer *_SDKInitializer;
    VungleSleepHandler *_sleepHandler;
    VungleLogCoordinator *_logCoordinator;
    VunglePlayabilityCoordinator *_playabilityCoordinator;
    VunglePlayOptionsProvider *_currentPlayOptions;
    VungleVDUIDProvider *_VDUIDProvider;
    VungleDeviceInformationProvider *_deviceInformationProvider;
    VunglePublisherInformation *_publisherInformation;
    id <VungleSDKDelegate> _internalDelegate;
    VungleFlexViewPresentationManager *_presentationManager;
    VungleHTTPLogSender *_vngLogSender;
    VungleUserSegmentationController *_userSegmentationController;
    id <VungleSDKHeaderBidding> _headerBiddingDelegate;
    NSObject<VungleSDKCreativeTracking> *_creativeTrackingDelegate;
    VungleCacheManager *_cacheManager;
    NSString *_pluginName;
}

+ (id)sharedSDK;
@property(nonatomic) _Bool validCTAURLResolved; // @synthesize validCTAURLResolved=_validCTAURLResolved;
@property(copy, nonatomic) NSString *pluginName; // @synthesize pluginName=_pluginName;
@property(readonly, nonatomic) VungleCacheManager *cacheManager; // @synthesize cacheManager=_cacheManager;
@property __weak NSObject<VungleSDKCreativeTracking> *creativeTrackingDelegate; // @synthesize creativeTrackingDelegate=_creativeTrackingDelegate;
@property(nonatomic) __weak id <VungleSDKHeaderBidding> headerBiddingDelegate; // @synthesize headerBiddingDelegate=_headerBiddingDelegate;
@property(retain, nonatomic) VungleUserSegmentationController *userSegmentationController; // @synthesize userSegmentationController=_userSegmentationController;
@property(nonatomic, getter=isAdDismissInProgress) _Bool adDismissInProgress; // @synthesize adDismissInProgress=_adDismissInProgress;
@property(retain, nonatomic) VungleHTTPLogSender *vngLogSender; // @synthesize vngLogSender=_vngLogSender;
@property(retain, nonatomic) VungleFlexViewPresentationManager *presentationManager; // @synthesize presentationManager=_presentationManager;
@property(retain, nonatomic) id <VungleSDKDelegate> internalDelegate; // @synthesize internalDelegate=_internalDelegate;
@property(retain, nonatomic) VunglePublisherInformation *publisherInformation; // @synthesize publisherInformation=_publisherInformation;
@property(retain, nonatomic) VungleDeviceInformationProvider *deviceInformationProvider; // @synthesize deviceInformationProvider=_deviceInformationProvider;
@property(retain, nonatomic) VungleVDUIDProvider *VDUIDProvider; // @synthesize VDUIDProvider=_VDUIDProvider;
@property(copy, nonatomic) VunglePlayOptionsProvider *currentPlayOptions; // @synthesize currentPlayOptions=_currentPlayOptions;
@property(retain, nonatomic) VunglePlayabilityCoordinator *playabilityCoordinator; // @synthesize playabilityCoordinator=_playabilityCoordinator;
@property(retain, nonatomic) VungleLogCoordinator *logCoordinator; // @synthesize logCoordinator=_logCoordinator;
@property(retain, nonatomic) VungleSleepHandler *sleepHandler; // @synthesize sleepHandler=_sleepHandler;
@property(nonatomic, getter=isSuccessfulAdView) _Bool successfulAdView; // @synthesize successfulAdView=_successfulAdView;
@property(retain, nonatomic) VungleSDKInitializer *SDKInitializer; // @synthesize SDKInitializer=_SDKInitializer;
@property(nonatomic) unsigned long long endTaskId; // @synthesize endTaskId=_endTaskId;
@property(nonatomic, getter=isHeaderBiddingEnabled) _Bool headerBiddingEnabled; // @synthesize headerBiddingEnabled=_headerBiddingEnabled;
@property _Bool didStartup; // @synthesize didStartup=_didStartup;
@property(retain, nonatomic) VungleCustomMRAIDViewController *customMRAIDController; // @synthesize customMRAIDController=_customMRAIDController;
@property(retain, nonatomic) VungleInternalMRAIDViewController *vmraidController; // @synthesize vmraidController=_vmraidController;
@property(retain, nonatomic) VungleReportIncentivizedController *reportIncentivizedController; // @synthesize reportIncentivizedController=_reportIncentivizedController;
@property(retain, nonatomic) VungleReportAdController *reportingController; // @synthesize reportingController=_reportingController;
@property(retain, nonatomic) VungleRequestStreamingAdController *requestStreamingAdController; // @synthesize requestStreamingAdController=_requestStreamingAdController;
@property(retain, nonatomic) VungleNewRequestController *createNewRequestController; // @synthesize createNewRequestController=_createNewRequestController;
@property(retain, nonatomic) VungleConfigController *configController; // @synthesize configController=_configController;
@property(retain, nonatomic) VunglePlacementsCoordinator *placementsCoordinator; // @synthesize placementsCoordinator=_placementsCoordinator;
@property(retain, nonatomic) VungleRequestAdController *requestAdController; // @synthesize requestAdController=_requestAdController;
@property(retain, nonatomic) NSUserDefaults *defaults; // @synthesize defaults=_defaults;
@property(retain, nonatomic) VungleAdViewController *currentAdViewController; // @synthesize currentAdViewController=_currentAdViewController;
@property UIViewController *tmpViewController; // @synthesize tmpViewController=_tmpViewController;
@property _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(copy) id playableEventTimer; // @synthesize playableEventTimer=_playableEventTimer;
@property double preventPlayUntilTime; // @synthesize preventPlayUntilTime=_preventPlayUntilTime;
@property _Bool loggingEnabled; // @synthesize loggingEnabled=_loggingEnabled;
@property double startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) CADisplayLink *link; // @synthesize link=_link;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(retain, nonatomic) VungleNetworkManager *networkManager; // @synthesize networkManager=_networkManager;
@property(getter=isInitialized) _Bool initialized; // @synthesize initialized=_initialized;
@property _Bool muted; // @synthesize muted=_muted;
@property(retain) NSDictionary *userData; // @synthesize userData=_userData;
- (void).cxx_destruct;
- (long long)getCurrentConsentStatus;
- (void)updateConsentStatus:(long long)arg1;
- (_Bool)isViewabilityEnabled:(id)arg1;
- (void)clearSleep;
- (void)sendRequest:(id)arg1;
- (void)setup;
- (void)setPluginName:(id)arg1 version:(id)arg2;
- (id)sleepingPlacementErrorWithPlacementID:(id)arg1;
- (id)unknownPlacementErrorWithPlacementID:(id)arg1;
- (id)invalidAppIDError;
- (id)notInitializedError;
- (id)invalidIOSSDKVersionError;
- (void)detachLogger:(id)arg1;
- (void)attachLogger:(id)arg1;
- (id)debugInfo;
- (void)streamingSettingsUpdateShouldStream:(_Bool)arg1 streamingRequestTimeout:(double)arg2 bufferingTimeout:(double)arg3;
- (void)streamingAdControllerShouldPlayAdForPlacement:(id)arg1;
- (void)streamingAdControllerDidValidateCTA:(_Bool)arg1;
- (void)streamingAdControllerFailedToLoadStreamingAdForPlacement:(id)arg1 error:(id)arg2;
- (void)placementCoordinatorDidLoadPlacement:(id)arg1 error:(id)arg2;
- (void)log:(id)arg1;
- (id)cachedPlacement;
- (void)initialRequestAutoCacheablePlacement;
- (void)requestAutoCacheablePlacement;
- (void)updateCachedReportable:(id)arg1;
- (void)willBackgroundAdViewControllerForPlacement:(id)arg1 reportable:(id)arg2;
- (void)didDismissInterstitialAdViewControllerForPlacement:(id)arg1 reportable:(id)arg2;
- (void)willDismissInterstitialAdViewControllerForPlacement:(id)arg1 reportable:(id)arg2;
- (void)didFinishAdViewForPlacement:(id)arg1 withSuccess:(_Bool)arg2;
- (void)willPresentInterstitialAdViewControllerForPlacement:(id)arg1 reportable:(id)arg2;
- (void)didPresentInterstitialAdViewControllerForPlacement:(id)arg1;
- (void)didGetUserAgent:(id)arg1;
- (void)didGetIDFV:(id)arg1;
- (void)didGetIFA:(id)arg1;
- (_Bool)loadPlacementWithID:(id)arg1 error:(id *)arg2;
- (_Bool)isAdCachedForPlacementID:(id)arg1;
- (void)processSuccessfulLoadAdForPlacement:(id)arg1 loadedAd:(id)arg2 presentingController:(id)arg3;
- (void)processLoadAdErrorResponseForPlacement:(id)arg1 loadedAd:(id)arg2 error:(id)arg3;
- (void)finishedDisplayingAd;
- (_Bool)addAdViewToView:(id)arg1 withOptions:(id)arg2 placementID:(id)arg3 error:(id *)arg4;
- (_Bool)checkContainerViewSize:(id)arg1 error:(id *)arg2;
- (id)placementWithID:(id)arg1 error:(id *)arg2;
- (_Bool)canProceedWithAdExperienceWithError:(id *)arg1;
- (void)adViewabilityChange:(id)arg1;
- (_Bool)playAd:(id)arg1 options:(id)arg2 placementID:(id)arg3 error:(id *)arg4;
- (_Bool)presentAdForPlacement:(id)arg1 viewController:(id)arg2 playOptions:(id)arg3;
- (id)deviceInfo;
- (void)sendNewRequest;
- (void)setupInitialOperationChain;
- (void)appWillTerminate;
- (void)appWillResignActive;
- (void)appWillEnterForeground;
- (void)appDidEnterBackground;
- (void)updateCacheWithSDKVersion:(id)arg1;
- (void)startWithAppId:(id)arg1 networkManager:(id)arg2;
- (_Bool)startWithAppId:(id)arg1 error:(id *)arg2;
- (_Bool)startWithAppId:(id)arg1 placements:(id)arg2 error:(id *)arg3;
- (id)initWithNetworkManager:(id)arg1 defaults:(id)arg2;
@property(retain) id <VungleSDKDelegate> delegate;
- (void)setViralUser:(_Bool)arg1;
- (_Bool)isViralUser;
- (void)setupEndpointControllersWithNetworkManager:(id)arg1 cacheManager:(id)arg2 defaults:(id)arg3;
- (void)dealloc;
- (id)getValidPlacementInfo;
- (void)clearAdUnitCreativesForPlacement:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)setHTTPHeaderPair:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

