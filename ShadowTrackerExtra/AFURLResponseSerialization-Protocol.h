//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSData, NSURLResponse;

@protocol AFURLResponseSerialization <NSObject, NSSecureCoding, NSCopying>
- (id)responseObjectForResponse:(NSURLResponse *)arg1 data:(NSData *)arg2 error:(id *)arg3;
@end

