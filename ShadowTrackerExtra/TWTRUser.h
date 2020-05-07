//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"
#import "TWTRJSONConvertible.h"

@class NSDictionary, NSString, NSURL;

@interface TWTRUser : NSObject <NSCoding, NSCopying, TWTRJSONConvertible>
{
    _Bool _isVerified;
    _Bool _isProtected;
    NSString *_userID;
    NSString *_name;
    NSString *_screenName;
    NSString *_profileImageURL;
    NSDictionary *_validatedDictionary;
}

+ (id)validateJSONDictionary:(id)arg1;
+ (id)JSONValidator;
@property(copy, nonatomic) NSDictionary *validatedDictionary; // @synthesize validatedDictionary=_validatedDictionary;
@property(readonly, copy, nonatomic) NSString *profileImageURL; // @synthesize profileImageURL=_profileImageURL;
@property(readonly, nonatomic) _Bool isProtected; // @synthesize isProtected=_isProtected;
@property(readonly, nonatomic) _Bool isVerified; // @synthesize isVerified=_isVerified;
@property(readonly, copy, nonatomic) NSString *screenName; // @synthesize screenName=_screenName;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, copy, nonatomic) NSString *userID; // @synthesize userID=_userID;
- (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSURL *profileURL;
@property(readonly, copy, nonatomic) NSString *profileImageLargeURL;
@property(readonly, copy, nonatomic) NSString *profileImageMiniURL;
@property(readonly, copy, nonatomic) NSString *formattedScreenName;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setPropertiesFromValidatedDictionary:(id)arg1;
- (id)initWithValidatedDictionary:(id)arg1;
- (id)initWithJSONDictionary:(id)arg1;

// Remaining properties
@property(readonly) Class superclass;

@end

