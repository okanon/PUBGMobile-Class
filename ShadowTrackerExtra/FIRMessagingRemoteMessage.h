//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@interface FIRMessagingRemoteMessage : NSObject
{
    NSString *_messageID;
    NSDictionary *_appData;
}

@property(retain, nonatomic) NSDictionary *appData; // @synthesize appData=_appData;
@property(copy, nonatomic) NSString *messageID; // @synthesize messageID=_messageID;
- (void).cxx_destruct;
- (id)init;

@end

