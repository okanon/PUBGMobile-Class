//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface GADSignalData : NSObject
{
    NSString *_signals;
    NSString *_requestIdentifier;
    NSDictionary *_sourceSignalDictionary;
}

+ (void)createSignalDataWithSignalConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) NSDictionary *sourceSignalDictionary; // @synthesize sourceSignalDictionary=_sourceSignalDictionary;
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) NSString *signals; // @synthesize signals=_signals;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)initWithSignalString:(id)arg1 sourceSignalDictionary:(id)arg2;

@end

