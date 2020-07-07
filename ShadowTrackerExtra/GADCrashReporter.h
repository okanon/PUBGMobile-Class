//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADObserverCollection, NSArray;

@interface GADCrashReporter : NSObject
{
    GADObserverCollection *_observers;
    NSArray *_crashFileURLs;
    struct atomic_flag _hasReported;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)reportURL:(id)arg1;
- (void)reportIssues;
- (void)storeEnvironmentInfo;
- (void)updateSettings;
- (id)init;

@end

