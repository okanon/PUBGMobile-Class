//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString;

@interface XYYTextBackedString : NSObject <NSCoding, NSCopying>
{
    NSString *_string;
}

+ (id)stringWithString:(id)arg1;
@property(copy, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

