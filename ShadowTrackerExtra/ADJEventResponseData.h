//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "ADJResponseData.h"

@class NSString;

@interface ADJEventResponseData : ADJResponseData
{
    NSString *_eventToken;
    NSString *_callbackId;
}

+ (id)responseDataWithActivityPackage:(id)arg1;
@property(copy, nonatomic) NSString *callbackId; // @synthesize callbackId=_callbackId;
@property(copy, nonatomic) NSString *eventToken; // @synthesize eventToken=_eventToken;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)failureResponseData;
- (id)successResponseData;
- (id)initWithActivityPackage:(id)arg1;

@end

