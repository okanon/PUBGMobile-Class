//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ADJRequestHandler.h"

@class NSObject<OS_dispatch_queue>, NSString;

@interface ADJRequestHandler : NSObject <ADJRequestHandler>
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    id <ADJLogger> _logger;
    id <ADJPackageHandler> _packageHandler;
    id <ADJActivityHandler> _activityHandler;
    NSString *_basePath;
    NSString *_gdprPath;
}

+ (id)handlerWithPackageHandler:(id)arg1 andActivityHandler:(id)arg2;
@property(copy, nonatomic) NSString *gdprPath; // @synthesize gdprPath=_gdprPath;
@property(copy, nonatomic) NSString *basePath; // @synthesize basePath=_basePath;
@property(nonatomic) __weak id <ADJActivityHandler> activityHandler; // @synthesize activityHandler=_activityHandler;
@property(nonatomic) __weak id <ADJPackageHandler> packageHandler; // @synthesize packageHandler=_packageHandler;
@property(nonatomic) __weak id <ADJLogger> logger; // @synthesize logger=_logger;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
- (void).cxx_destruct;
- (void)sendI:(id)arg1 activityPackage:(id)arg2 queueSize:(unsigned long long)arg3;
- (void)teardown;
- (void)sendPackage:(id)arg1 queueSize:(unsigned long long)arg2;
- (id)initWithPackageHandler:(id)arg1 andActivityHandler:(id)arg2;

@end

