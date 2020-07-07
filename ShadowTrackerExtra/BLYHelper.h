//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLYHelper : NSObject
{
}

+ (id)getFullTimeStrBy:(double)arg1;
+ (id)getFullTimeMsStr;
+ (long long)getParentProcessId;
+ (long long)getProcessId;
+ (id)getParentProcessName;
+ (unsigned char)checkTestflightUrlValid:(id)arg1;
+ (id)aes256DecryptWithkey:(id)arg1 data:(id)arg2;
+ (id)aes256EncryptWithKey:(id)arg1 data:(id)arg2;
+ (id)fileSHA1:(id)arg1;
+ (id)SHA1:(id)arg1;
+ (_Bool)isEmptyString:(id)arg1;
+ (long long)currentTimeStamp;
+ (long long)fixedTimestamp:(long long)arg1;
+ (_Bool)isDebuggerAttached;
+ (id)componentInfos;
+ (id)getBuildType;
+ (_Bool)hasAppStoreReceipt;
+ (_Bool)isTestBuild;
+ (id)getReceiptUrlPath;
+ (_Bool)isSimulatorBuild;
+ (_Bool)isDebugBuild;
+ (_Bool)isTheAppStoreEnvironment;
+ (_Bool)isRunningInAppExtension;
+ (_Bool)isPreiOS8Environment;
+ (_Bool)isPreiOS7Environment;
+ (id)generateUUID;

@end

