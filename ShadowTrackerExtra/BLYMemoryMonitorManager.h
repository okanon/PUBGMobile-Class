//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "BLYAbstractModule.h"

@class NSObject<OS_dispatch_source>;

@interface BLYMemoryMonitorManager : BLYAbstractModule
{
    _Bool _monitorThreadCanceled;
    NSObject<OS_dispatch_source> *timer;
    double _dumpMemoryInterval;
}

+ (id)constructSelector;
+ (id)sharedManager;
@property(nonatomic) double dumpMemoryInterval; // @synthesize dumpMemoryInterval=_dumpMemoryInterval;
- (void).cxx_destruct;
- (void)applicationDidCrashed:(id)arg1;
- (void)stop;
- (void)start;
- (_Bool)shouldEnable;
- (_Bool)disableModule;
- (_Bool)enableModule;
- (id)init;

@end

