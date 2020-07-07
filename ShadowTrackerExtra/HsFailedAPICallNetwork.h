//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsNetwork-Protocol.h"

@class NSString;
@protocol HsNetwork;

@interface HsFailedAPICallNetwork : NSObject <HsNetwork>
{
    id <HsNetwork> _network;
}

- (void).cxx_destruct;
- (id)makeRequest:(id)arg1 withError:(id *)arg2;
- (id)initWithNetwork:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

