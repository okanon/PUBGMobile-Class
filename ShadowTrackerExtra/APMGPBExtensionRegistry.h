//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSMutableDictionary;

@interface APMGPBExtensionRegistry : NSObject <NSCopying>
{
    NSMutableDictionary *mutableClassMap_;
}

- (void)addExtensions:(id)arg1;
- (id)extensionForDescriptor:(id)arg1 fieldNumber:(long long)arg2;
- (void)addExtension:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;

@end

