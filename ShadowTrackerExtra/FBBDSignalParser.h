//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface FBBDSignalParser : NSObject
{
}

+ (void)generateSignalsFromSignalConfig:(id)arg1 onSurface:(int)arg2;
+ (void)initWithSignalConfig:(id)arg1 onSurface:(int)arg2;
+ (void)setBDBiometricSignals:(id)arg1;
+ (id)bdBiometricSignals;
+ (void)setBDStaticSignals:(id)arg1;
+ (id)bdStaticSignals;
+ (void)setBDDynamicSignals:(id)arg1;
+ (id)bdDynamicSignals;
+ (void)setSignalConfigTimestamp:(id)arg1;
+ (id)signalConfigTimestamp;
+ (void)initialize;

@end

