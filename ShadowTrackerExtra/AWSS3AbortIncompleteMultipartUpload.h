//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSNumber;

@interface AWSS3AbortIncompleteMultipartUpload : AWSModel
{
    NSNumber *_daysAfterInitiation;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSNumber *daysAfterInitiation; // @synthesize daysAfterInitiation=_daysAfterInitiation;
- (void).cxx_destruct;

@end

