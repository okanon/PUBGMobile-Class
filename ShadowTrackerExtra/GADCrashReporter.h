//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADObserverCollection, NSArray;

@interface GADCrashReporter : NSObject
{
    GADObserverCollection *_observers;
    NSArray *_crashFileURLs;
    // Error parsing type: {atomic_flag="_Value"AB}, name: _hasReported
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)reportURL:(id)arg1;
- (void)reportIssues;
- (void)storeEnvironmentInfo;
- (void)updateSettings;
- (id)init;

@end

