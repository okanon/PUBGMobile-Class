//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleMRAIDAd.h"

@class NSString;

@interface VungleThirdPartyMRAIDAd : VungleMRAIDAd
{
    NSString *_base64MRAIDContent;
}

@property(copy, nonatomic) NSString *base64MRAIDContent; // @synthesize base64MRAIDContent=_base64MRAIDContent;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToVungleThirdPartyMRAIDAd:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)updateWithRequestAdBody:(id)arg1;
- (id)decodedMRAIDContent;

@end
