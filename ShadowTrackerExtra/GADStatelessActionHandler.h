//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADObserverCollection, NSOperationQueue;

@interface GADStatelessActionHandler : NSObject
{
    GADObserverCollection *_observers;
    NSOperationQueue *_observationQueue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)handleTouchAction:(id)arg1;
- (void)handleLogMessageAction:(id)arg1;
- (void)handlePingURLAction:(id)arg1;
- (id)init;

@end
