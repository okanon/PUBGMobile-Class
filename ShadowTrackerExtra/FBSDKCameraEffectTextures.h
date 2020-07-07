//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSDKCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSMutableDictionary, NSString;

@interface FBSDKCameraEffectTextures : NSObject <FBSDKCopying, NSSecureCoding>
{
    NSMutableDictionary *_textures;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_valueOfClass:(Class)arg1 forKey:(id)arg2;
- (id)_valueForKey:(id)arg1;
- (void)_setValue:(id)arg1 forKey:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isEqualToCameraEffectTextures:(id)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)allTextures;
- (id)imageForKey:(id)arg1;
- (void)setImage:(id)arg1 forKey:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

