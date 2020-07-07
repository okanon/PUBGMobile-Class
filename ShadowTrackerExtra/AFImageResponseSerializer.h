//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AFHTTPResponseSerializer.h"

@interface AFImageResponseSerializer : AFHTTPResponseSerializer
{
    _Bool _automaticallyInflatesResponseImage;
    double _imageScale;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool automaticallyInflatesResponseImage; // @synthesize automaticallyInflatesResponseImage=_automaticallyInflatesResponseImage;
@property(nonatomic) double imageScale; // @synthesize imageScale=_imageScale;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id *)arg3;
- (id)init;

@end

