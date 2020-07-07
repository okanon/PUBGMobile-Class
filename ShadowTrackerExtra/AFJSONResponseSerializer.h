//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AFHTTPResponseSerializer.h"

@interface AFJSONResponseSerializer : AFHTTPResponseSerializer
{
    _Bool _removesKeysWithNullValues;
    unsigned long long _readingOptions;
}

+ (_Bool)supportsSecureCoding;
+ (id)serializerWithReadingOptions:(unsigned long long)arg1;
+ (id)serializer;
@property(nonatomic) _Bool removesKeysWithNullValues; // @synthesize removesKeysWithNullValues=_removesKeysWithNullValues;
@property(nonatomic) unsigned long long readingOptions; // @synthesize readingOptions=_readingOptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end
