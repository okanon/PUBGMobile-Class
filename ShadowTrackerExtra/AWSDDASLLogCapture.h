//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWSDDASLLogCapture : NSObject
{
}

+ (void)captureAslLogs;
+ (void)aslMessageReceived:(struct __asl_object_s *)arg1;
+ (void)configureAslQuery:(struct __asl_object_s *)arg1;
+ (void)setCaptureLevel:(unsigned long long)arg1;
+ (unsigned long long)captureLevel;
+ (void)stop;
+ (void)start;
+ (void)initialize;

@end

