//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection;

@interface GADImpressionMonitor : NSObject
{
    GADObserverCollection *_observers;
}

+ (void)addMonitorToAd:(id)arg1 adConfiguration:(struct NSDictionary *)arg2;
- (void).cxx_destruct;
- (id)initWithAd:(id)arg1 impressionDefinition:(long long)arg2;

@end

