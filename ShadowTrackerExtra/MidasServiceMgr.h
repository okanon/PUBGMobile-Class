//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface MidasServiceMgr : NSObject
{
    NSMutableDictionary *_servicesDict;
}

+ (id)shareInstance;
@property(retain, nonatomic) NSMutableDictionary *servicesDict; // @synthesize servicesDict=_servicesDict;
- (void).cxx_destruct;
- (id)serviceWithName:(id)arg1;
- (void)registerService:(id)arg1 service:(Class)arg2;

@end

