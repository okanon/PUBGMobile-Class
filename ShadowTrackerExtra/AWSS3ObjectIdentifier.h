//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSString;

@interface AWSS3ObjectIdentifier : AWSModel
{
    NSString *_key;
    NSString *_versionId;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *versionId; // @synthesize versionId=_versionId;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
- (void).cxx_destruct;

@end

