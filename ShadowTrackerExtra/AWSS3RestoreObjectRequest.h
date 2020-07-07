//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3RestoreRequest, NSString;

@interface AWSS3RestoreObjectRequest : AWSRequest
{
    NSString *_bucket;
    NSString *_key;
    long long _requestPayer;
    AWSS3RestoreRequest *_restoreRequest;
    NSString *_versionId;
}

+ (id)restoreRequestJSONTransformer;
+ (id)requestPayerJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) AWSS3RestoreRequest *restoreRequest; // @synthesize restoreRequest=_restoreRequest;
@property(nonatomic) long long requestPayer; // @synthesize requestPayer=_requestPayer;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

