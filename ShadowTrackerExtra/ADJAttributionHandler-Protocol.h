//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ADJAttributionResponseData, ADJSdkClickResponseData, ADJSessionResponseData;

@protocol ADJAttributionHandler
- (void)teardown;
- (void)resumeSending;
- (void)pauseSending;
- (void)getAttribution;
- (void)checkAttributionResponse:(ADJAttributionResponseData *)arg1;
- (void)checkSdkClickResponse:(ADJSdkClickResponseData *)arg1;
- (void)checkSessionResponse:(ADJSessionResponseData *)arg1;
- (id)initWithActivityHandler:(id <ADJActivityHandler>)arg1 startsSending:(_Bool)arg2;
@end

