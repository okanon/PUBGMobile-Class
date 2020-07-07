//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HsDomain, HsWebsocketConfigDTO;
@protocol HsPlatform;

@interface HsWebsocketConfigDM : NSObject
{
    HsWebsocketConfigDTO *_websocketConfig;
    HsDomain *_domain;
    id <HsPlatform> _platform;
}

@property(retain) id <HsPlatform> platform; // @synthesize platform=_platform;
@property(retain) HsDomain *domain; // @synthesize domain=_domain;
@property(retain, nonatomic) HsWebsocketConfigDTO *websocketConfig; // @synthesize websocketConfig=_websocketConfig;
- (void).cxx_destruct;
- (void)saveWebsocketConfigJson:(id)arg1;
- (id)requestParameters;
- (void)refreshConfigWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithDomain:(id)arg1 platform:(id)arg2;

@end

