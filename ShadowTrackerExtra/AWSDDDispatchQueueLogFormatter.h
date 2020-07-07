//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSDDLogFormatter-Protocol.h"

@class NSDateFormatter, NSMutableDictionary, NSString;

@interface AWSDDDispatchQueueLogFormatter : NSObject <AWSDDLogFormatter>
{
    unsigned long long _mode;
    NSString *_dateFormatterKey;
    int _atomicLoggerCount;
    NSDateFormatter *_threadUnsafeDateFormatter;
    int _lock;
    unsigned long long _minQueueLength;
    unsigned long long _maxQueueLength;
    NSMutableDictionary *_replacements;
}

@property unsigned long long maxQueueLength; // @synthesize maxQueueLength=_maxQueueLength;
@property unsigned long long minQueueLength; // @synthesize minQueueLength=_minQueueLength;
- (void).cxx_destruct;
- (void)willRemoveFromLogger:(id)arg1;
- (void)didAddToLogger:(id)arg1;
- (id)formatLogMessage:(id)arg1;
- (id)queueThreadLabelForLogMessage:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)configureDateFormatter:(id)arg1;
- (id)createDateFormatter;
- (void)setReplacementString:(id)arg1 forQueueLabel:(id)arg2;
- (id)replacementStringForQueueLabel:(id)arg1;
- (id)initWithMode:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

