//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSDate, NSDictionary, NSNumber, NSString;

@protocol GADMediationAdRequest <NSObject>
- (NSDate *)userBirthday;
- (long long)userGender;
- (NSArray *)userKeywords;
- (NSString *)userLocationDescription;
- (double)userLocationAccuracyInMeters;
- (double)userLongitude;
- (double)userLatitude;
- (_Bool)userHasLocation;
- (NSNumber *)underAgeOfConsent;
- (NSString *)maxAdContentRating;
- (NSNumber *)childDirectedTreatment;
- (id <GADAdNetworkExtras>)networkExtras;
- (_Bool)testMode;
- (NSDictionary *)credentials;
- (NSString *)publisherId;
@end

