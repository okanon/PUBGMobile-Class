//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AWSRequest.h"

@class AWSS3BucketLifecycleConfiguration, NSString;

@interface AWSS3PutBucketLifecycleConfigurationRequest : AWSRequest
{
    NSString *_bucket;
    AWSS3BucketLifecycleConfiguration *_lifecycleConfiguration;
}

+ (id)lifecycleConfigurationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) AWSS3BucketLifecycleConfiguration *lifecycleConfiguration; // @synthesize lifecycleConfiguration=_lifecycleConfiguration;
@property(retain, nonatomic) NSString *bucket; // @synthesize bucket=_bucket;
- (void).cxx_destruct;

@end

