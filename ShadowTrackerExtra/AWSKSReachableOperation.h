//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWSKSReachability;

@interface AWSKSReachableOperation : NSObject
{
    AWSKSReachability *_reachability;
}

+ (id)operationWithReachability:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;
+ (id)operationWithHost:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;
@property(retain, nonatomic) AWSKSReachability *reachability; // @synthesize reachability=_reachability;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithReachability:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;
- (id)initWithHost:(id)arg1 allowWWAN:(_Bool)arg2 onReachabilityAchieved:(CDUnknownBlockType)arg3;

@end

