//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HsWebsocketConfigDTO : NSObject
{
    NSString *_authToken;
    NSString *_endpoint;
}

@property(readonly, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(readonly, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
- (void).cxx_destruct;
- (id)initWithAuthToken:(id)arg1 endpoint:(id)arg2;

@end

