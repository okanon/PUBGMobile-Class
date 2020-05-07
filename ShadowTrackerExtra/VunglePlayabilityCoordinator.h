//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface VunglePlayabilityCoordinator : NSObject
{
    _Bool _isPlayable;
    id <VungleSDKDelegate> _sdkDelegate;
    id _playableEventTimer;
    double _preventPlayUntilTime;
}

@property double preventPlayUntilTime; // @synthesize preventPlayUntilTime=_preventPlayUntilTime;
@property _Bool isPlayable; // @synthesize isPlayable=_isPlayable;
@property(copy) id playableEventTimer; // @synthesize playableEventTimer=_playableEventTimer;
@property(nonatomic) __weak id <VungleSDKDelegate> sdkDelegate; // @synthesize sdkDelegate=_sdkDelegate;
- (void).cxx_destruct;
- (double)delayInSeconds;
- (void)delayNextPlay:(long long)arg1;
- (void)fireAdPlayable:(_Bool)arg1 placement:(id)arg2;
- (_Bool)isAdPlayable;
- (id)init;

@end

