//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAdPlayableLoggerService.h"

@class NSString;

@interface FBAdPlayableLogger : NSObject <FBAdPlayableLoggerService>
{
    NSString *_token;
    NSString *_endpoint;
    NSString *_playableName;
    NSString *_logSessionID;
    long long _placementType;
}

+ (id)loggerForToken:(id)arg1 endpoint:(id)arg2 playableName:(id)arg3 placementType:(long long)arg4;
@property(nonatomic) long long placementType; // @synthesize placementType=_placementType;
@property(copy, nonatomic) NSString *logSessionID; // @synthesize logSessionID=_logSessionID;
@property(copy, nonatomic) NSString *playableName; // @synthesize playableName=_playableName;
@property(copy, nonatomic) NSString *endpoint; // @synthesize endpoint=_endpoint;
@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
- (void).cxx_destruct;
- (id)stringWithNumber:(long long)arg1;
- (void)logPlayableLevelCompleted:(id)arg1;
- (void)logPlayableGameLoaded;
- (void)logPlayableEndCardShown;
- (void)logPlayableButtonClicked:(id)arg1 x:(long long)arg2 y:(long long)arg3;
- (void)logPlayableEventOfType:(id)arg1 withData:(id)arg2;
- (id)eventManager;
- (_Bool)isPlayableLoggingEnabled;
- (id)playableEventLogDataForEventType:(id)arg1 withExtraData:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
