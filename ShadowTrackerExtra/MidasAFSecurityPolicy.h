//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSSet, NSString;

@interface MidasAFSecurityPolicy : NSObject <NSSecureCoding, NSCopying>
{
    unsigned long long _SSLPinningMode;
    NSSet *_pinnedCertificates;
    NSString *_realDomain;
    NSSet *_pinnedPublicKeys;
}

+ (_Bool)supportsSecureCoding;
+ (id)keyPathsForValuesAffectingPinnedPublicKeys;
+ (id)policyWithPinningMode:(unsigned long long)arg1;
+ (id)defaultPolicy;
+ (id)defaultPinnedCertificates;
@property(retain, nonatomic) NSSet *pinnedPublicKeys; // @synthesize pinnedPublicKeys=_pinnedPublicKeys;
@property(copy, nonatomic) NSString *realDomain; // @synthesize realDomain=_realDomain;
@property(retain, nonatomic) NSSet *pinnedCertificates; // @synthesize pinnedCertificates=_pinnedCertificates;
@property(nonatomic) unsigned long long SSLPinningMode; // @synthesize SSLPinningMode=_SSLPinningMode;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)evaluateServerTrust:(struct __SecTrust *)arg1 forDomain:(id)arg2;
- (id)init;

@end

