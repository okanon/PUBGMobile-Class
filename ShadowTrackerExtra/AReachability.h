//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface AReachability : NSObject
{
    NSString *key_;
    struct __SCNetworkReachability *reachabilityRef;
}

+ (id)reachabilityForLocalWiFi;
+ (id)reachabilityForInternetConnection;
+ (id)reachabilityWithAddress:(const struct sockaddr_in *)arg1;
+ (id)makeAddressKey:(unsigned int)arg1;
+ (id)reachabilityWithHostName:(id)arg1;
+ (_Bool)accessInstanceVariablesDirectly;
@property(copy) NSString *key; // @synthesize key=key_;
- (void).cxx_destruct;
- (unsigned int)reachabilityFlags;
- (_Bool)isReachableViaWiFi;
- (_Bool)isReachableViaWWAN;
- (_Bool)isInterventionRequired;
- (_Bool)isConnectionOnDemand;
- (_Bool)connectionRequired;
- (_Bool)isConnectionRequired;
- (_Bool)isReachable;
- (id)getCurrentAPN;
- (id)getBSSID;
- (id)getSSID;
- (int)getCarrier:(id)arg1;
- (id)getCarrierCode;
- (int)currentDetailReachabilityStatus;
- (int)currentReachabilityStatus;
- (int)networkStatusForFlags:(unsigned int)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)stopNotifier;
- (_Bool)startNotifier;
- (id)description;
- (id)initWithReachabilityRef:(struct __SCNetworkReachability *)arg1;
- (void)dealloc;

@end

