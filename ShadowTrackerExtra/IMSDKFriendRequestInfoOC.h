//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IMSDKFriendRequestInfoOC : NSObject
{
    int _type;
    NSString *_user;
    NSString *_title;
    NSString *_content;
    NSString *_link;
    NSString *_thumbPath;
    NSString *_imagePath;
    NSString *_extraJson;
}

@property(retain, nonatomic) NSString *extraJson; // @synthesize extraJson=_extraJson;
@property(retain, nonatomic) NSString *imagePath; // @synthesize imagePath=_imagePath;
@property(retain, nonatomic) NSString *thumbPath; // @synthesize thumbPath=_thumbPath;
@property(retain, nonatomic) NSString *link; // @synthesize link=_link;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) int type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
- (void).cxx_destruct;
- (id)description;

@end

