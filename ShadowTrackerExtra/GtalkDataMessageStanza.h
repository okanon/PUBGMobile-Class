//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class GtalkCellTower, NSData, NSMutableArray, NSString;

@interface GtalkDataMessageStanza : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int actualDelay; // @dynamic actualDelay;
@property(retain, nonatomic) NSMutableArray *appDataArray; // @dynamic appDataArray;
@property(readonly, nonatomic) unsigned long long appDataArray_Count; // @dynamic appDataArray_Count;
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(retain, nonatomic) GtalkCellTower *cellTower; // @dynamic cellTower;
@property(copy, nonatomic) NSString *clientId; // @dynamic clientId;
@property(nonatomic) _Bool deliveryReceiptRequested; // @dynamic deliveryReceiptRequested;
@property(nonatomic) long long deviceUserId; // @dynamic deviceUserId;
@property(copy, nonatomic) NSString *externalMessageId; // @dynamic externalMessageId;
@property(nonatomic) long long flags; // @dynamic flags;
@property(copy, nonatomic) NSString *from; // @dynamic from;
@property(nonatomic) _Bool fromTrustedServer; // @dynamic fromTrustedServer;
@property(nonatomic) _Bool hasActualDelay; // @dynamic hasActualDelay;
@property(nonatomic) _Bool hasCategory; // @dynamic hasCategory;
@property(nonatomic) _Bool hasCellTower; // @dynamic hasCellTower;
@property(nonatomic) _Bool hasClientId; // @dynamic hasClientId;
@property(nonatomic) _Bool hasDeliveryReceiptRequested; // @dynamic hasDeliveryReceiptRequested;
@property(nonatomic) _Bool hasDeviceUserId; // @dynamic hasDeviceUserId;
@property(nonatomic) _Bool hasExternalMessageId; // @dynamic hasExternalMessageId;
@property(nonatomic) _Bool hasFlags; // @dynamic hasFlags;
@property(nonatomic) _Bool hasFrom; // @dynamic hasFrom;
@property(nonatomic) _Bool hasFromTrustedServer; // @dynamic hasFromTrustedServer;
@property(nonatomic) _Bool hasId_p; // @dynamic hasId_p;
@property(nonatomic) _Bool hasImmediateAck; // @dynamic hasImmediateAck;
@property(nonatomic) _Bool hasLastStreamIdReceived; // @dynamic hasLastStreamIdReceived;
@property(nonatomic) _Bool hasMaxDelay; // @dynamic hasMaxDelay;
@property(nonatomic) _Bool hasPermission; // @dynamic hasPermission;
@property(nonatomic) _Bool hasPersistentId; // @dynamic hasPersistentId;
@property(nonatomic) _Bool hasPkgSignature; // @dynamic hasPkgSignature;
@property(nonatomic) _Bool hasPriority; // @dynamic hasPriority;
@property(nonatomic) _Bool hasQueued; // @dynamic hasQueued;
@property(nonatomic) _Bool hasRawData; // @dynamic hasRawData;
@property(nonatomic) _Bool hasRegId; // @dynamic hasRegId;
@property(nonatomic) _Bool hasRmqId; // @dynamic hasRmqId;
@property(nonatomic) _Bool hasSent; // @dynamic hasSent;
@property(nonatomic) _Bool hasStatus; // @dynamic hasStatus;
@property(nonatomic) _Bool hasStreamId; // @dynamic hasStreamId;
@property(nonatomic) _Bool hasTo; // @dynamic hasTo;
@property(nonatomic) _Bool hasToken; // @dynamic hasToken;
@property(nonatomic) _Bool hasTtl; // @dynamic hasTtl;
@property(copy, nonatomic) NSString *id_p; // @dynamic id_p;
@property(nonatomic) _Bool immediateAck; // @dynamic immediateAck;
@property(nonatomic) int lastStreamIdReceived; // @dynamic lastStreamIdReceived;
@property(nonatomic) int maxDelay; // @dynamic maxDelay;
@property(copy, nonatomic) NSString *permission; // @dynamic permission;
@property(copy, nonatomic) NSString *persistentId; // @dynamic persistentId;
@property(copy, nonatomic) NSString *pkgSignature; // @dynamic pkgSignature;
@property(nonatomic) int priority; // @dynamic priority;
@property(nonatomic) int queued; // @dynamic queued;
@property(copy, nonatomic) NSData *rawData; // @dynamic rawData;
@property(copy, nonatomic) NSString *regId; // @dynamic regId;
@property(nonatomic) long long rmqId; // @dynamic rmqId;
@property(nonatomic) long long sent; // @dynamic sent;
@property(nonatomic) long long status; // @dynamic status;
@property(nonatomic) int streamId; // @dynamic streamId;
@property(copy, nonatomic) NSString *to; // @dynamic to;
@property(copy, nonatomic) NSString *token; // @dynamic token;
@property(nonatomic) int ttl; // @dynamic ttl;

@end

