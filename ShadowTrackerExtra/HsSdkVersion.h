//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HsSdkVersion : NSObject
{
    unsigned long long _majorVersion;
    unsigned long long _minorVersion;
    unsigned long long _hotfixVersion;
}

+ (id)sdkVersionFromString:(id)arg1;
+ (id)currentSdkVersion;
@property unsigned long long hotfixVersion; // @synthesize hotfixVersion=_hotfixVersion;
@property unsigned long long minorVersion; // @synthesize minorVersion=_minorVersion;
@property unsigned long long majorVersion; // @synthesize majorVersion=_majorVersion;
- (long long)compare:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isGreaterThanEqualTo:(id)arg1;
- (_Bool)isGreaterThan:(id)arg1;
- (_Bool)isLessThanEqualTo:(id)arg1;
- (_Bool)isLessThan:(id)arg1;
- (_Bool)isEqualTo:(id)arg1;
- (id)initWithMajorVersion:(unsigned long long)arg1 minorVersion:(unsigned long long)arg2 hotfixVersion:(unsigned long long)arg3;

@end

