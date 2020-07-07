//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWSURLRequestSerializer-Protocol.h"

@class NSDictionary, NSString;

@interface AWSXMLRequestSerializer : NSObject <AWSURLRequestSerializer>
{
    NSDictionary *_serviceDefinitionJSON;
    NSString *_actionName;
}

+ (_Bool)constructURIandHeadersAndBody:(id)arg1 rules:(id)arg2 parameters:(id)arg3 uriSchema:(id)arg4 error:(id *)arg5;
@property(retain, nonatomic) NSString *actionName; // @synthesize actionName=_actionName;
@property(retain, nonatomic) NSDictionary *serviceDefinitionJSON; // @synthesize serviceDefinitionJSON=_serviceDefinitionJSON;
- (void).cxx_destruct;
- (id)validateRequest:(id)arg1;
- (id)serializeRequest:(id)arg1 headers:(id)arg2 parameters:(id)arg3;
- (id)initWithJSONDefinition:(id)arg1 actionName:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

