//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class ADJActivityPackage;
@protocol ADJActivityHandler, ADJPackageHandler;

@protocol ADJRequestHandler
- (void)teardown;
- (void)sendPackage:(ADJActivityPackage *)arg1 queueSize:(unsigned long long)arg2;
- (id)initWithPackageHandler:(id <ADJPackageHandler>)arg1 andActivityHandler:(id <ADJActivityHandler>)arg2;
@end

