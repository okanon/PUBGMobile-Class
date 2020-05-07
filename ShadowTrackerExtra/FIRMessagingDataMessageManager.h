//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRMessagingClient, FIRMessagingDelayedMessageQueue, FIRMessagingRmqManager, FIRMessagingSyncMessageManager, NSString;

@interface FIRMessagingDataMessageManager : NSObject
{
    BOOL _upstreamForceReconnect;
    int _ttl;
    int _maxAppDataSize;
    FIRMessagingClient *_client;
    FIRMessagingRmqManager *_rmq2Manager;
    FIRMessagingSyncMessageManager *_syncMessageManager;
    id <FIRMessagingDataMessageManagerDelegate> _delegate;
    FIRMessagingDelayedMessageQueue *_delayedMessagesQueue;
    NSString *_deviceAuthID;
    NSString *_secretToken;
}

@property(nonatomic) BOOL upstreamForceReconnect; // @synthesize upstreamForceReconnect=_upstreamForceReconnect;
@property(nonatomic) int maxAppDataSize; // @synthesize maxAppDataSize=_maxAppDataSize;
@property(copy, nonatomic) NSString *secretToken; // @synthesize secretToken=_secretToken;
@property(copy, nonatomic) NSString *deviceAuthID; // @synthesize deviceAuthID=_deviceAuthID;
@property(nonatomic) int ttl; // @synthesize ttl=_ttl;
@property(retain, nonatomic) FIRMessagingDelayedMessageQueue *delayedMessagesQueue; // @synthesize delayedMessagesQueue=_delayedMessagesQueue;
@property(nonatomic) __weak id <FIRMessagingDataMessageManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak FIRMessagingSyncMessageManager *syncMessageManager; // @synthesize syncMessageManager=_syncMessageManager;
@property(nonatomic) __weak FIRMessagingRmqManager *rmq2Manager; // @synthesize rmq2Manager=_rmq2Manager;
@property(nonatomic) __weak FIRMessagingClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (id)categoryForUpstreamMessages;
- (_Bool)tryToSendDataMessageStanza:(id)arg1;
- (_Bool)delayMessage:(id)arg1;
- (int)delayForMessage:(id)arg1;
- (_Bool)handleExpirationForDataMessage:(id)arg1;
- (void)resendMessagesWithConnection:(id)arg1;
- (void)willSendDataMessageFail:(id)arg1 withMessageId:(id)arg2 error:(unsigned long long)arg3;
- (void)willSendDataMessageSuccess:(id)arg1 withMessageId:(id)arg2;
- (int)addData:(id)arg1 toStanza:(id)arg2;
- (void)addParamWithKey:(id)arg1 value:(id)arg2 toStanza:(id)arg3;
- (void)didSendDataMessageStanza:(id)arg1;
- (void)sendDelayedMessages:(id)arg1;
- (void)sendDataMessageStanza:(id)arg1;
- (id)filterInternalFIRMessagingKeysFromMessage:(id)arg1;
- (void)didReceiveParsedMessage:(id)arg1;
- (id)parseDataMessage:(id)arg1;
- (void)handleMCSDataMessage:(id)arg1;
- (id)processPacket:(id)arg1;
- (void)refreshDelayedMessages;
- (void)setDeviceAuthID:(id)arg1 secretToken:(id)arg2;
- (id)initWithDelegate:(id)arg1 client:(id)arg2 rmq2Manager:(id)arg3 syncMessageManager:(id)arg4;

@end

