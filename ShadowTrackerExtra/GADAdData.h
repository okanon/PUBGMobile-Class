//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADSignalData, NSDictionary, NSString;

@interface GADAdData : NSObject
{
    GADSignalData *_signalData;
    NSDictionary *_signals;
    NSString *_adString;
}

@property(readonly, copy, nonatomic) NSString *adString; // @synthesize adString=_adString;
@property(readonly, copy, nonatomic) NSDictionary *signals; // @synthesize signals=_signals;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSignalData:(id)arg1 adString:(id)arg2;

@end

