//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IMSDKRetForOC.h"

@class NSArray, NSString;

@interface IMSDKLoginRetForOC : IMSDKRetForOC
{
    int _guidChannel;
    int _guidGameId;
    int _guidUserGender;
    NSString *_guid;
    NSString *_guidOpenId;
    NSString *_guidToken;
    long long _guidTokenExpire;
    NSString *_guidUserNick;
    NSString *_guidUserBirthday;
    NSString *_guidUserPortrait;
    NSString *_channel;
    NSString *_channelUserId;
    NSString *_channelToken;
    long long _channelExpire;
    NSArray *_channelPermissions;
}

+ (id)instanceFromTargetChannel:(id)arg1;
+ (_Bool)removeLoginPersistence;
+ (void)removePersistence:(id)arg1;
+ (id)dictWithIMSDKLoginRet:(id)arg1;
+ (id)instanceWithDict:(id)arg1;
@property(retain, nonatomic) NSArray *channelPermissions; // @synthesize channelPermissions=_channelPermissions;
@property(nonatomic) long long channelExpire; // @synthesize channelExpire=_channelExpire;
@property(retain, nonatomic) NSString *channelToken; // @synthesize channelToken=_channelToken;
@property(retain, nonatomic) NSString *channelUserId; // @synthesize channelUserId=_channelUserId;
@property(retain, nonatomic) NSString *channel; // @synthesize channel=_channel;
@property(retain, nonatomic) NSString *guidUserPortrait; // @synthesize guidUserPortrait=_guidUserPortrait;
@property(retain, nonatomic) NSString *guidUserBirthday; // @synthesize guidUserBirthday=_guidUserBirthday;
@property(retain, nonatomic) NSString *guidUserNick; // @synthesize guidUserNick=_guidUserNick;
@property(nonatomic) int guidUserGender; // @synthesize guidUserGender=_guidUserGender;
@property(nonatomic) long long guidTokenExpire; // @synthesize guidTokenExpire=_guidTokenExpire;
@property(retain, nonatomic) NSString *guidToken; // @synthesize guidToken=_guidToken;
@property(retain, nonatomic) NSString *guidOpenId; // @synthesize guidOpenId=_guidOpenId;
@property(retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
@property(nonatomic) int guidGameId; // @synthesize guidGameId=_guidGameId;
@property(nonatomic) int guidChannel; // @synthesize guidChannel=_guidChannel;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)savePersistence:(id)arg1;

@end

