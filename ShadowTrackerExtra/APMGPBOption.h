//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "APMGPBMessage.h"

@class APMGPBAny, NSString;

@interface APMGPBOption : APMGPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(copy, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) APMGPBAny *value; // @dynamic value;

@end

