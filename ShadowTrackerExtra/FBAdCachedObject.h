//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FBAdCachedObject : NSObject
{
    double _expiration;
    id _object;
}

+ (void)initialize;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) double expiration; // @synthesize expiration=_expiration;
- (void).cxx_destruct;
- (id)initWithObject:(id)arg1 withExpiration:(id)arg2;

@end

