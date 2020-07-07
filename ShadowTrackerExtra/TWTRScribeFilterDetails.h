//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRScribeSerializable-Protocol.h"

@class NSString;

@interface TWTRScribeFilterDetails : NSObject <TWTRScribeSerializable>
{
    unsigned long long _totalFilteredTweets;
    unsigned long long _requestedTweets;
    unsigned long long _totalFilters;
    unsigned long long _scribeType;
}

+ (id)scribeKey;
@property(readonly, nonatomic) unsigned long long scribeType; // @synthesize scribeType=_scribeType;
@property(nonatomic) unsigned long long totalFilters; // @synthesize totalFilters=_totalFilters;
@property(nonatomic) unsigned long long requestedTweets; // @synthesize requestedTweets=_requestedTweets;
@property(nonatomic) unsigned long long totalFilteredTweets; // @synthesize totalFilteredTweets=_totalFilteredTweets;
- (id)dictionaryRepresentation;
- (id)stringRepresentation;
- (id)initWithRequestedTweets:(unsigned long long)arg1 totalFilters:(unsigned long long)arg2 totalFilteredTweets:(unsigned long long)arg3;
- (id)initWithFilters:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

