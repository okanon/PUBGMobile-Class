//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AFHTTPRequestSerializer.h"

@interface AFJSONRequestSerializer : AFHTTPRequestSerializer
{
    unsigned long long _writingOptions;
}

+ (id)serializerWithWritingOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) unsigned long long writingOptions; // @synthesize writingOptions=_writingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id *)arg3;

@end

