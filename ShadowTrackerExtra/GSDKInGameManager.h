//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GSDKInGameManager : NSObject
{
    _Bool _detectFlag;
    struct GSDKObserver *_gsdkObserver;
}

+ (id)sharedInstance;
@property(nonatomic) _Bool detectFlag; // @synthesize detectFlag=_detectFlag;
@property(nonatomic) struct GSDKObserver *gsdkObserver; // @synthesize gsdkObserver=_gsdkObserver;
- (id)arrayToString:(id)arg1;
- (id)GSDKGetSignalList;
- (id)GSDKGetUdpList;
- (id)GSDKGetMemList;
- (id)GSDKGetCpuList;
- (id)dictionaryToString:(id)arg1;
- (void)GSDKSetObserver:(struct GSDKObserver *)arg1;
- (void)GSDKEnd;
- (void)GSDKSetEnvironment:(int)arg1;
- (void)GSDKRealTimeDetect;
- (void)GSDKSaveFps:(float)arg1 FMax:(int)arg2 FMin:(int)arg3 Ftotal:(int)arg4 Fheavy:(int)arg5 Flight:(int)arg6 Fcntx0:(int)arg7 Flfps1:(int)arg8 Flfps2:(int)arg9 Flfps3:(int)arg10 Fpsdots:(id)arg11;
- (void)checkBattery:(id)arg1;
- (void)GSDKStart:(id)arg1 SceneID:(id)arg2 RoomIP:(id)arg3;

@end
