//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKRetForOC.h"

@class NSString;

@interface IMSDKAuthConnectResultOC : IMSDKRetForOC
{
    int _channelId;
    int _gender;
    NSString *_confirmCode;
    NSString *_openId;
    NSString *_userName;
    NSString *_pictureUrl;
    long long _expire;
    NSString *_uid;
}

+ (void)removePersistence:(id)arg1;
+ (id)instanceFromCppResult:(struct IMSDKAuthConnectResult)arg1;
+ (id)instanceFromPersistence:(id)arg1;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(nonatomic) long long expire; // @synthesize expire=_expire;
@property(nonatomic) int gender; // @synthesize gender=_gender;
@property(retain, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) int channelId; // @synthesize channelId=_channelId;
@property(retain, nonatomic) NSString *openId; // @synthesize openId=_openId;
@property(retain, nonatomic) NSString *confirmCode; // @synthesize confirmCode=_confirmCode;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct IMSDKAuthConnectResult)getCppResult;
- (void)savePersistence:(id)arg1;

@end

