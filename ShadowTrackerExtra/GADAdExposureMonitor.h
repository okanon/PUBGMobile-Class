//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSString;

@interface GADAdExposureMonitor : NSObject
{
    GADObserverCollection *_observers;
    _Bool _adExposureBegan;
    NSString *_adUnitID;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2 useVisibilityNotification:(_Bool)arg3;
- (void).cxx_destruct;
- (void)dealloc;
- (void)endExposure;
- (void)startExposure;
- (id)initWithAd:(id)arg1 adUnitID:(id)arg2 useVisibilityNotification:(_Bool)arg3;

@end

