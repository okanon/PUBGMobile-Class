//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GPBSourceContext, NSMutableArray, NSString;

@interface GPBApi : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasSourceContext; // @dynamic hasSourceContext;
@property(retain, nonatomic) NSMutableArray *methodsArray; // @dynamic methodsArray;
@property(readonly, nonatomic) unsigned long long methodsArray_Count; // @dynamic methodsArray_Count;
@property(retain, nonatomic) NSMutableArray *mixinsArray; // @dynamic mixinsArray;
@property(readonly, nonatomic) unsigned long long mixinsArray_Count; // @dynamic mixinsArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(retain, nonatomic) GPBSourceContext *sourceContext; // @dynamic sourceContext;
@property(nonatomic) int syntax; // @dynamic syntax;
@property(copy, nonatomic) NSString *version; // @dynamic version;

@end

