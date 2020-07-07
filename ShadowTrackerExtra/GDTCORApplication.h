//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GDTCORApplicationDelegate-Protocol.h"

@class NSString, UIWindow;

@interface GDTCORApplication : NSObject <GDTCORApplicationDelegate>
{
    _Bool _isRunningInBackground;
}

+ (id)sharedApplication;
+ (void)load;
@property _Bool isRunningInBackground; // @synthesize isRunningInBackground=_isRunningInBackground;
- (void)iOSApplicationWillTerminate:(id)arg1;
- (void)iOSApplicationWillEnterForeground:(id)arg1;
- (void)iOSApplicationDidEnterBackground:(id)arg1;
- (id)sharedApplicationForBackgroundTask;
- (_Bool)isAppExtension;
- (void)endBackgroundTask:(unsigned long long)arg1;
- (unsigned long long)beginBackgroundTaskWithName:(id)arg1 expirationHandler:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(retain, nonatomic) UIWindow *window;

@end

