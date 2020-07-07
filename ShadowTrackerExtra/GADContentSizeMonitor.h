//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADAd, GADObserverCollection, GADWebViewController;

@interface GADContentSizeMonitor : NSObject
{
    GADObserverCollection *_observers;
    GADAd *_ad;
    GADWebViewController *_webViewController;
    double _lastObservedContentHeight;
}

- (void).cxx_destruct;
- (void)updateContentHeight:(double)arg1;
- (void)updateContentHeightWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithWebAdView:(id)arg1 ad:(id)arg2;

@end

