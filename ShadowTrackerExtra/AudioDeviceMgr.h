//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AudioDeviceMgr : NSObject
{
}

+ (id)shareInstance;
- (void)AudioRouteChangeListenerPause:(_Bool)arg1;
- (void)UpdateDeviceState:(int)arg1;
- (void)EnableBluetoothSCO:(_Bool)arg1;
- (int)GetAudioDeviceConnectState;
- (void)AudioReceiverSwitchToSpeaker;
- (void)audioRouteChangeListenerCallback:(id)arg1;
- (void)dealloc;
- (void)AddAudioRouteChangeListener;

@end

