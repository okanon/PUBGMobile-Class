//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSURLResponse;

@interface TWTRAPINetworkErrorsShim : NSObject
{
    NSURLResponse *_response;
    NSData *_responseData;
}

+ (id)acceptableHTTPStatusCodes;
@property(retain, nonatomic) NSData *responseData; // @synthesize responseData=_responseData;
@property(retain, nonatomic) NSURLResponse *response; // @synthesize response=_response;
- (void).cxx_destruct;
- (id)firstNormalizedAPIErrorInResponseBody:(id)arg1;
- (id)validate;
- (id)initWithHTTPResponse:(id)arg1 responseData:(id)arg2;

@end

