//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AWSModel.h"

@class NSDate, NSString;

@interface AWSCognitoIdentityCredentials : AWSModel
{
    NSString *_accessKeyId;
    NSDate *_expiration;
    NSString *_secretKey;
    NSString *_sessionToken;
}

+ (id)expirationJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) NSString *sessionToken; // @synthesize sessionToken=_sessionToken;
@property(retain, nonatomic) NSString *secretKey; // @synthesize secretKey=_secretKey;
@property(retain, nonatomic) NSDate *expiration; // @synthesize expiration=_expiration;
@property(retain, nonatomic) NSString *accessKeyId; // @synthesize accessKeyId=_accessKeyId;
- (void).cxx_destruct;

@end

