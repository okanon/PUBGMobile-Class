//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection;

@interface GADOnePixelImpressionMonitor : NSObject
{
    GADObserverCollection *_observers;
    struct atomic_flag _didPostImpression;
}

- (void).cxx_destruct;
- (void)postImpressionNotificationForAd:(id)arg1;
- (id)initWithAd:(id)arg1;

@end

