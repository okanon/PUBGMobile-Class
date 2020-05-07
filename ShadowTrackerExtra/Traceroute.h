//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString;

@interface Traceroute : NSObject
{
    NSString *_ipAddress;
    NSString *_hostname;
    long long _maxTtl;
    NSMutableArray *_results;
    CDUnknownBlockType _stepCallback;
    CDUnknownBlockType _finishCallback;
}

@property(copy, nonatomic) CDUnknownBlockType finishCallback; // @synthesize finishCallback=_finishCallback;
@property(copy, nonatomic) CDUnknownBlockType stepCallback; // @synthesize stepCallback=_stepCallback;
@property(retain, nonatomic) NSMutableArray *results; // @synthesize results=_results;
@property(nonatomic) long long maxTtl; // @synthesize maxTtl=_maxTtl;
@property(retain, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (_Bool)validateReply;
- (_Bool)sendAndRecv:(int)arg1 addr:(struct sockaddr *)arg2 ttl:(int)arg3;
- (void)run;
- (id)initWithHost:(id)arg1 maxTtl:(long long)arg2 stepCallback:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;
- (id)startTracerouteWithHost:(id)arg1 totalTTL:(unsigned char)arg2 queue:(id)arg3 stepCallback:(CDUnknownBlockType)arg4 finish:(CDUnknownBlockType)arg5;
- (id)startTracerouteWithHost:(id)arg1 totalTTL:(unsigned char)arg2 stepCallback:(CDUnknownBlockType)arg3 finish:(CDUnknownBlockType)arg4;

@end

