//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GVGCloudVoiceExtension : NSObject
{
    id <GVGCloudVoiceDelegate> _delegate;
}

+ (id)sharedInstance;
@property(nonatomic) __weak id <GVGCloudVoiceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (int)GetMuteResult;
- (int)GetSpeakerState;
- (int)GetMicState;
- (int)SetAudience:(int *)arg1 count:(int)arg2 roomName:(const char *)arg3;
- (int)CheckDeviceMuteStat;
- (void)EnableBluetoothSCO:(_Bool)arg1;
- (int)getAudioDeviceConnectionState;
- (int)GetHwState;
- (int)GetBGMPlayState;
- (int)SetBitRate:(int)arg1;
- (int)EnableNativeBGMPlay:(unsigned long long)arg1;
- (int)ResumeBGMPlay;
- (int)PauseBGMPlay;
- (int)StopBGMPlay;
- (int)SetBGMVol:(int)arg1;
- (int)StartBGMPlay;
- (int)SetBGMPath:(const char *)arg1;
- (int)setMicVolume:(int)arg1;
- (unsigned long long)isSpeaking;
- (int)invoke:(unsigned int)arg1 arg1:(unsigned int)arg2 arg2:(unsigned int)arg3 arg3:(unsigned int *)arg4;
- (int)SetVoiceEffects:(int)arg1;
- (int)captureMicrophoneData:(unsigned long long)arg1;
- (int)getFileParam:(const char *)arg1 data:(unsigned int *)arg2 time:(float *)arg3;
- (int)testMic;
- (int)setSpeakerVolume:(int)arg1;
- (int)getSpeakerLevel;
- (int)getMicLevel:(unsigned long long)arg1;
- (void)enableLog:(unsigned long long)arg1;
- (int)forbidMemberVoice:(int)arg1 enable:(unsigned long long)arg2 inRoom:(const char *)arg3;
- (int)speechToText:(const char *)arg1 token:(const char *)arg2 timestamp:(int)arg3 timeout:(int)arg4 language:(int)arg5;
- (int)applyMessageKey:(const char *)arg1 timestamp:(int)arg2 timeout:(int)arg3;
- (int)joinNationalRoom:(const char *)arg1 role:(int)arg2 token:(const char *)arg3 timestamp:(int)arg4 timeout:(int)arg5;
- (int)joinTeamRoom:(const char *)arg1 token:(const char *)arg2 timestamp:(int)arg3 timeout:(int)arg4;
- (int)enableSpeakerOn:(unsigned long long)arg1;
- (int)downloadRecordedFile:(const char *)arg1 filePath:(const char *)arg2 timeout:(int)arg3 fileProperty:(_Bool)arg4;
- (int)uploadRecordedFile:(const char *)arg1 timeout:(int)arg2 fileProperty:(_Bool)arg3;
- (int)startRecording:(const char *)arg1 bOptim:(unsigned long long)arg2;
- (int)joinFMRoom:(const char *)arg1 timeout:(int)arg2;
- (int)SetDataFree:(_Bool)arg1;
- (int)setServerInfo:(const char *)arg1;
- (int)enableRoomSpeaker:(const char *)arg1 enable:(_Bool)arg2;
- (int)enableRoomMicrophone:(const char *)arg1 enable:(_Bool)arg2;
- (int)enableMultiRoom:(_Bool)arg1;

@end
