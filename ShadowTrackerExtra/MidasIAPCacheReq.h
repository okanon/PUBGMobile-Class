//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet, SKProductsRequest;

@interface MidasIAPCacheReq : NSObject
{
    SKProductsRequest *_req;
    NSSet *_keys;
}

@property(retain, nonatomic) NSSet *keys; // @synthesize keys=_keys;
@property(retain, nonatomic) SKProductsRequest *req; // @synthesize req=_req;
- (void).cxx_destruct;

@end

