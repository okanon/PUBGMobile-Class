//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsNetwork.h"

@class NSString;

@interface HsIdempotentNetwork : NSObject <HsNetwork>
{
    id <HsNetworkRequestDAO> _networkRequestDAO;
    id <HsNetwork> _network;
    id <HSIdempotentPolicy> _idempotentPolicy;
    NSString *_route;
    NSString *_uniqueMappingKey;
}

- (void).cxx_destruct;
- (id)makeRequest:(id)arg1 withError:(id *)arg2;
- (id)initWithNetwork:(id)arg1 platform:(id)arg2 idempotentPolicy:(id)arg3 route:(id)arg4 uniqueMappingKey:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
