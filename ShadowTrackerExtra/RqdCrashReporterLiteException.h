//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSString;

@interface RqdCrashReporterLiteException : NSObject <NSSecureCoding>
{
    NSString *_name;
    NSString *_reason;
    NSString *_threadName;
    NSString *_callStack;
    NSString *_appId;
    NSString *_bundleId;
    NSString *_appVersion;
    NSString *_processName;
    NSString *_cpuArch;
    NSString *_execUUID;
    NSString *_baseAddr;
    NSString *_typeString;
    unsigned long long _extensionType;
    double _time;
    NSString *_screenBoundsString;
    NSString *_systemVersion;
    NSString *_deviceName;
    NSString *_model;
    NSString *_systemName;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *systemName; // @synthesize systemName=_systemName;
@property(copy, nonatomic) NSString *model; // @synthesize model=_model;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
@property(copy, nonatomic) NSString *systemVersion; // @synthesize systemVersion=_systemVersion;
@property(copy, nonatomic) NSString *screenBoundsString; // @synthesize screenBoundsString=_screenBoundsString;
@property(nonatomic) double time; // @synthesize time=_time;
@property(nonatomic) unsigned long long extensionType; // @synthesize extensionType=_extensionType;
@property(copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property(copy, nonatomic) NSString *baseAddr; // @synthesize baseAddr=_baseAddr;
@property(copy, nonatomic) NSString *execUUID; // @synthesize execUUID=_execUUID;
@property(copy, nonatomic) NSString *cpuArch; // @synthesize cpuArch=_cpuArch;
@property(copy, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(copy, nonatomic) NSString *appVersion; // @synthesize appVersion=_appVersion;
@property(copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *callStack; // @synthesize callStack=_callStack;
@property(copy, nonatomic) NSString *threadName; // @synthesize threadName=_threadName;
@property(copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)bugly_encode16:(const void *)arg1 size:(unsigned long long)arg2;
- (id)getcpu:(int)arg1 subType:(int)arg2;
- (void)fetchArchInfo;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithException:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

