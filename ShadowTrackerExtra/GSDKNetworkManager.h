//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GSDKReachability;

@interface GSDKNetworkManager : NSObject
{
    GSDKReachability *_reachability;
}

+ (id)shareInstance;
+ (void)start;
@property(retain, nonatomic) GSDKReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

