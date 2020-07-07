//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AWSXMLBuilder : NSObject
{
}

+ (void)applyNamespacesAndAttributesByRules:(id)arg1 params:(id)arg2 xmlWriter:(id)arg3;
+ (_Bool)serializeMember:(id)arg1 name:(id)arg2 rules:(id)arg3 isPayloadType:(unsigned char)arg4 xmlWriter:(id)arg5 error:(id *)arg6;
+ (_Bool)serializeList:(id)arg1 name:(id)arg2 rules:(id)arg3 xmlWriter:(id)arg4 error:(id *)arg5;
+ (_Bool)serializeStructure:(id)arg1 rules:(id)arg2 xmlWriter:(id)arg3 error:(id *)arg4 isRootRule:(_Bool)arg5;
+ (id)xmlBuildForDictionary:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
+ (id)xmlDataForDictionary:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
+ (id)xmlStringForDictionary:(id)arg1 actionName:(id)arg2 serviceDefinitionRule:(id)arg3 error:(id *)arg4;
+ (_Bool)failWithCode:(long long)arg1 description:(id)arg2 error:(id *)arg3;

@end

