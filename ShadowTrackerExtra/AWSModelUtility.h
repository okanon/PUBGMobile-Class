//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface AWSModelUtility : NSObject
{
}

+ (id)JSONDictionaryFromMapMTLDictionary:(id)arg1;
+ (id)mapMTLDictionaryFromJSONDictionary:(id)arg1 withModelClass:(Class)arg2;
+ (id)JSONArrayFromMapMTLArray:(id)arg1;
+ (id)mapMTLArrayFromJSONArray:(id)arg1 withModelClass:(Class)arg2;
+ (id)JSONArrayDictionaryFromMapMTLDictionary:(id)arg1 arrayElementType:(id)arg2;
+ (id)mapMTLDictionaryFromJSONArrayDictionary:(id)arg1 arrayElementType:(id)arg2 withModelClass:(Class)arg3;

@end

