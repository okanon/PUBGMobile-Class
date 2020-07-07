//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "GPBDictionaryInternalsProtocol-Protocol.h"
#import "NSCopying-Protocol.h"

@class GPBMessage, NSMutableDictionary;

@interface GPBInt32Int32Dictionary : NSObject <GPBDictionaryInternalsProtocol, NSCopying>
{
    GPBMessage *_autocreator;
    NSMutableDictionary *_dictionary;
}

- (void)removeAll;
- (void)removeInt32ForKey:(int)arg1;
- (void)setInt32:(int)arg1 forKey:(int)arg2;
- (void)addEntriesFromDictionary:(id)arg1;
- (_Bool)getInt32:(int *)arg1 forKey:(int)arg2;
- (void)enumerateForTextFormat:(CDUnknownBlockType)arg1;
- (void)setGPBGenericValue:(CDUnion_cf1021d0 *)arg1 forGPBGenericValueKey:(CDUnion_cf1021d0 *)arg2;
- (void)writeToCodedOutputStream:(id)arg1 asField:(id)arg2;
- (unsigned long long)computeSerializedSizeAsField:(id)arg1;
- (void)enumerateKeysAndInt32sUsingBlock:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithInt32s:(const int *)arg1 forKeys:(const int *)arg2 count:(unsigned long long)arg3;
- (id)init;

@end

