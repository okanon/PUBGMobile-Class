//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkErrorInfo, NSMutableArray, NSString;

@interface GtalkBatchPresenceStanza : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) long long accountId; // @dynamic accountId;
@property(retain, nonatomic) GtalkErrorInfo *error; // @dynamic error;
@property(nonatomic) _Bool hasAccountId; // @dynamic hasAccountId;
@property(nonatomic) _Bool hasError; // @dynamic hasError;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasLastStreamIdReceived; // @dynamic hasLastStreamIdReceived;
@property(nonatomic) _Bool hasPersistentId; // @dynamic hasPersistentId;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) _Bool hasTo; // @dynamic hasTo;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) int lastStreamIdReceived; // @dynamic lastStreamIdReceived;
@property(copy, nonatomic) NSString *persistentId; // @dynamic persistentId;
@property(retain, nonatomic) NSMutableArray *presenceArray; // @dynamic presenceArray;
@property(readonly, nonatomic) unsigned long long presenceArray_Count; // @dynamic presenceArray_Count;
@property(nonatomic) int streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *to; // @dynamic to;
@property(nonatomic) int type; // @dynamic type;

@end

