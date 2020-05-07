//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IMSDKAFURLResponseSerialization.h"

@class NSIndexSet, NSSet, NSString;

@interface IMSDKAFHTTPResponseSerializer : NSObject <IMSDKAFURLResponseSerialization>
{
    unsigned long long _stringEncoding;
    NSIndexSet *_acceptableStatusCodes;
    NSSet *_acceptableContentTypes;
}

+ (_Bool)supportsSecureCoding;
+ (id)serializer;
@property(copy, nonatomic) NSSet *acceptableContentTypes; // @synthesize acceptableContentTypes=_acceptableContentTypes;
@property(copy, nonatomic) NSIndexSet *acceptableStatusCodes; // @synthesize acceptableStatusCodes=_acceptableStatusCodes;
@property(nonatomic) unsigned long long stringEncoding; // @synthesize stringEncoding=_stringEncoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (_Bool)validateResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

