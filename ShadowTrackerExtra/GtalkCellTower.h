//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface GtalkCellTower : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasKnownCongestionStatus; // @dynamic hasKnownCongestionStatus;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int knownCongestionStatus; // @dynamic knownCongestionStatus;

@end

