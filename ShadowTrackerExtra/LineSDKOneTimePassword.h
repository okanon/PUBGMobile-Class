//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface LineSDKOneTimePassword : NSObject
{
    NSString *_identifier;
    NSString *_value;
}

@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 error:(id *)arg2;
- (id)initWithIdentifier:(id)arg1 value:(id)arg2;

@end

