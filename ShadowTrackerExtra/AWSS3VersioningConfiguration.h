//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@interface AWSS3VersioningConfiguration : AWSModel
{
    long long _MFADelete;
    long long _status;
}

+ (id)statusJSONTransformer;
+ (id)MFADeleteJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(nonatomic) long long MFADelete; // @synthesize MFADelete=_MFADelete;

@end

