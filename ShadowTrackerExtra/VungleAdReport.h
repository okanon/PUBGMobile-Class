//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "VNGPersistable.h"

@class NSDictionary, NSString;

@interface VungleAdReport : NSObject <NSCoding, VNGPersistable>
{
    _Bool _incentivized;
    NSString *_adType;
    NSDictionary *_placementDictionary;
    NSString *_eventID;
    NSString *_adToken;
    unsigned long long _ttDownload;
    unsigned long long _adDuration;
    unsigned long long _adStartTime;
    NSString *_appId;
    NSString *_campaign;
    NSString *_user;
    NSDictionary *_extraInfo;
    NSString *_publisherAppID;
    NSString *_ifa;
    NSDictionary *_deviceInfo;
    unsigned long long _ordinalView;
}

+ (id)keyExtension;
+ (long long)channel;
+ (id)category;
@property(nonatomic) unsigned long long ordinalView; // @synthesize ordinalView=_ordinalView;
@property(readonly) _Bool incentivized; // @synthesize incentivized=_incentivized;
@property(copy, nonatomic) NSDictionary *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property(copy, nonatomic) NSString *ifa; // @synthesize ifa=_ifa;
@property(copy, nonatomic) NSString *publisherAppID; // @synthesize publisherAppID=_publisherAppID;
@property(copy, nonatomic) NSDictionary *extraInfo; // @synthesize extraInfo=_extraInfo;
@property(copy, nonatomic) NSString *user; // @synthesize user=_user;
@property(copy, nonatomic) NSString *campaign; // @synthesize campaign=_campaign;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) unsigned long long adStartTime; // @synthesize adStartTime=_adStartTime;
@property(nonatomic) unsigned long long adDuration; // @synthesize adDuration=_adDuration;
@property(nonatomic) unsigned long long ttDownload; // @synthesize ttDownload=_ttDownload;
@property(copy, nonatomic) NSString *adToken; // @synthesize adToken=_adToken;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSDictionary *placementDictionary; // @synthesize placementDictionary=_placementDictionary;
@property(copy, nonatomic) NSString *adType; // @synthesize adType=_adType;
- (void).cxx_destruct;
- (id)persistenceKey;
- (id)uniqueIdentifier;
- (id)persistenceCategory;
- (long long)persistenceChannel;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)toDictionary;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

