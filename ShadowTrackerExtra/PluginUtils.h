//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PluginUtils : NSObject
{
    struct IPluginManager *_pluginManager;
}

+ (id)sharedInstance;
- (void)nativeShutdown;
- (void)nativePreShutdown;
- (void)nativePostStartup;
- (void)nativeStartup;
- (void *)getNativePluginManager;
- (void)setNativePluginManager:(void *)arg1;
- (id)init;

@end
