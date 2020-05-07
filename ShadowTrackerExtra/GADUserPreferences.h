//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADObserverCollection, NSNumber, NSObject<OS_dispatch_queue>;

@interface GADUserPreferences : NSObject
{
    NSNumber *_NPA;
    NSObject<OS_dispatch_queue> *_lockQueue;
    GADObserverCollection *_observers;
    _Bool _adRequested;
    NSNumber *_lastRequestLevelTFCD;
    NSNumber *_lastRequestLevelNPA;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSNumber *NPA;
- (void)updateLastRequestParameters:(id)arg1;
- (void)updateNPA;
- (id)currentNPAValue;
- (void)adRequested;
- (id)init;

@end

