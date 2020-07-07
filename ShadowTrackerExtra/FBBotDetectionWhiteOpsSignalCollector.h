//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBBotDetectionWhiteOpsSignalCollector : NSObject
{
}

+ (void)populateSignal:(id)arg1 withDictionaryValue:(id)arg2;
+ (void)populateSignal:(id)arg1 withValue:(id)arg2;
+ (_Bool)deviceHasSimulatorProperties:(id)arg1;
+ (id)getDeviceName;
+ (id)getBootDate;
+ (id)getAppSizeForBundlePath:(id)arg1;
+ (_Bool)checkAvailabilityInObject:(id)arg1 forSelector:(SEL)arg2 forSignal:(id)arg3;
+ (id)getIpAddresses;
+ (void)fetchNetworkingSignalsForSignalList:(id)arg1;
+ (void)fetchAudioSignalsForSignalList:(id)arg1;
+ (void)fetchBatterySignalsForSignalList:(id)arg1;
+ (void)fetchLocationSignalsForSignalList:(id)arg1;
+ (void)fetchMotionSensorSignalsForSignalList:(id)arg1;
+ (void)fetchCameraSignalsForSignalList:(id)arg1;
+ (void)fetchTelephonySignalsForSignalList:(id)arg1 usingDispatchGroup:(id)arg2;
+ (void)fetchLocalAuthSignalsForSignalsList:(id)arg1;
+ (void)fetchOtherMainThreadSignalsForSignalList:(id)arg1;
+ (void)fetchOtherBackgroudThreadSignalsForSignalList:(id)arg1;
+ (void)fetchBundleSignalsForSignalList:(id)arg1;
+ (void)fetchSimulatorSignals:(id)arg1;
+ (void)fetchProcessSignalsForSignalList:(id)arg1;
+ (void)fetchBuildSignalsForSignalList:(id)arg1;
+ (void)fetchUIApplicationSignalsForSignalList:(id)arg1;
+ (void)fetchUIDeviceSignalsForSignalList:(id)arg1;
+ (void)fetchUIScreenSignalsForSignalList:(id)arg1;
+ (void)collectSignals:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)finalizeSignals:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)finalizeSignalsAndSendUsingCompletionBlock:(CDUnknownBlockType)arg1;
+ (void)initializeSignalCollectionWithConfigDelegate:(id)arg1 withSignalsDelegate:(id)arg2 withLoggerDelegate:(id)arg3 withDynamicLibraryProviderDelegate:(id)arg4;

@end

