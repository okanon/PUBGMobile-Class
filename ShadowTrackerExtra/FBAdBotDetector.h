//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "BotDetectionConfigProviderDelegate-Protocol.h"
#import "BotDetectionDynamicLoadedLibraryProviderDelegate-Protocol.h"
#import "BotDetectionSignalLoggerDelegate-Protocol.h"
#import "BotDetectionSignalsProviderDelegate-Protocol.h"

@class NSString;

@interface FBAdBotDetector : NSObject <BotDetectionConfigProviderDelegate, BotDetectionSignalLoggerDelegate, BotDetectionSignalsProviderDelegate, BotDetectionDynamicLoadedLibraryProviderDelegate>
{
    int _currentReputationTier;
}

+ (id)botDetector;
+ (id)eventId;
@property(nonatomic) int currentReputationTier; // @synthesize currentReputationTier=_currentReputationTier;
- (id)dynamicLoadedWKWebView;
- (id)dynamicLoadedLAContext;
- (void)logBotDetectionSignalData:(id)arg1 forProductName:(id)arg2 forLoggerEventName:(id)arg3;
- (int)surfaceFlag;
- (double)minimumMagneticFieldDelta;
- (double)magnetometerUpdatesInterval;
- (double)minimumAccelerationDelta;
- (double)accelerometerUpdatesInterval;
- (double)minimumRotationRateDelta;
- (double)gyroUpdatesInterval;
- (double)nonbiometricsMinTimeInterval;
- (double)biometricsMinTimeInterval;
- (double)minDistanceBetweenTouches;
- (id)signalConfigForSignalId:(id)arg1;
- (id)signalConfig;
- (void)setReputationTier:(int)arg1;
- (int)reputationTier;
- (long long)biometricSignalsBufferCapacity;
- (long long)dynamicSignalsBufferCapacity;
- (long long)staticSignalsBufferCapacity;
- (long long)signalCollectionIntervalTime;
- (unsigned long long)nativeSignalsBufferSize;
- (_Bool)isNativeSignalIntervalModeEnabled;
- (_Bool)isNativeSignalJailbrokenEnabled;
- (_Bool)isNativeSignalTouchEnabled;
- (_Bool)isNativeSignalReachabilityEnabled;
- (_Bool)isNativeSignalCaptiveNetworkEnabled;
- (_Bool)isNativeSignalUIDeviceEnabled;
- (_Bool)isNativeSignalUIApplicationEnabled;
- (_Bool)isNativeSignalTelephonyEnabled;
- (_Bool)isNativeSignalSimulatorEnabled;
- (_Bool)isNativeSignalScreenEnabled;
- (_Bool)isNativeSignalProxyEnabled;
- (_Bool)isNativeSignalProcessInfoEnabled;
- (_Bool)isNativeSignalOtherUIThreadEnabled;
- (_Bool)isNativeSignalNetworkEnabled;
- (_Bool)isNativeSignalMotionEnabled;
- (_Bool)isNativeSignalLocationEnabled;
- (_Bool)isNativeSignalLocalAuthEnabled;
- (_Bool)isNativeSignalCameraEnabled;
- (_Bool)isNativeSignalBundleEnabled;
- (_Bool)isNativeSignalBuildEnabled;
- (_Bool)isNativeSignalBootEnabled;
- (_Bool)isNativeSignalBatteryEnabled;
- (_Bool)isNativeSignalAudioEnabled;
- (id)woNetworkSignalUrlString;
- (unsigned long long)networkSignalSamplingRateForProductType:(unsigned long long)arg1;
- (unsigned long long)largePayloadSamplingRate;
- (unsigned long long)payloadSize;
- (_Bool)isWONetworkSignalLargePayloadEnabled;
- (_Bool)isBotDetectionEnabledForProductType:(unsigned long long)arg1;
- (_Bool)isNativeSignalCollectionEventModeEnabled;
- (void)stopTimer;
- (void)startTimerWithTimeInterval:(double)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)isJailBrokenDevice;
- (void)addJailbrokenSignalsForSignalList:(id)arg1 toDictionary:(id)arg2;
- (void)addTelephonySignalsForSignalList:(id)arg1 toDictionary:(id)arg2 usingDispatchGroup:(id)arg3;
- (id)bdTelephonySignals;
- (void)addBuildInfoSignalsForSignalList:(id)arg1 toDictionary:(id)arg2;
- (void)addReachabilitySignalsForSignalList:(id)arg1 toDictionary:(id)arg2;
- (void)addLocationSignalsForSignalList:(id)arg1 toDictionary:(id)arg2;
- (void)dealloc;
- (void)performBotDetectionForEvent:(id)arg1 withEventType:(id)arg2 withBDSessionIds:(id)arg3;
- (void)loadBotDetectionModule;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

