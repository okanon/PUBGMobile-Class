//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMGPBMessage.h"

@class NSMutableArray, NSString;

@interface APMGPBField : APMGPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int cardinality; // @dynamic cardinality;
@property(copy, nonatomic) NSString *defaultValue; // @dynamic defaultValue;
@property(copy, nonatomic) NSString *jsonName; // @dynamic jsonName;
@property(nonatomic) int kind; // @dynamic kind;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) int number; // @dynamic number;
@property(nonatomic) int oneofIndex; // @dynamic oneofIndex;
@property(retain, nonatomic) NSMutableArray *optionsArray; // @dynamic optionsArray;
@property(readonly, nonatomic) unsigned long long optionsArray_Count; // @dynamic optionsArray_Count;
@property(nonatomic) _Bool packed; // @dynamic packed;
@property(copy, nonatomic) NSString *typeURL; // @dynamic typeURL;

@end

