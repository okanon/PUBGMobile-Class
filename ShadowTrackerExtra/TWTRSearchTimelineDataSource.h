//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "TWTRTimelineDataSource-Protocol.h"

@class NSString, TWTRAPIClient, TWTRTimelineFilter, TWTRTimelineFilterManager;

@interface TWTRSearchTimelineDataSource : NSObject <TWTRTimelineDataSource>
{
    _Bool _filterSensitiveTweets;
    TWTRAPIClient *_APIClient;
    NSString *_searchQuery;
    NSString *_languageCode;
    unsigned long long _maxTweetsPerRequest;
    NSString *_geocodeSpecifier;
    TWTRTimelineFilter *_timelineFilter;
    NSString *_resultType;
    TWTRTimelineFilterManager *_timelineFilterManager;
}

@property(retain, nonatomic) TWTRTimelineFilterManager *timelineFilterManager; // @synthesize timelineFilterManager=_timelineFilterManager;
@property(copy, nonatomic) NSString *resultType; // @synthesize resultType=_resultType;
@property(copy, nonatomic) TWTRTimelineFilter *timelineFilter; // @synthesize timelineFilter=_timelineFilter;
@property(nonatomic) _Bool filterSensitiveTweets; // @synthesize filterSensitiveTweets=_filterSensitiveTweets;
@property(copy, nonatomic) NSString *geocodeSpecifier; // @synthesize geocodeSpecifier=_geocodeSpecifier;
@property(readonly, nonatomic) unsigned long long maxTweetsPerRequest; // @synthesize maxTweetsPerRequest=_maxTweetsPerRequest;
@property(readonly, copy, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property(readonly, copy, nonatomic) NSString *searchQuery; // @synthesize searchQuery=_searchQuery;
@property(retain, nonatomic) TWTRAPIClient *APIClient; // @synthesize APIClient=_APIClient;
- (void).cxx_destruct;
- (id)queryParametersWithMaxPosition:(id)arg1;
@property(readonly, nonatomic) unsigned long long timelineType;
- (void)loadPreviousTweetsBeforePosition:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithSearchQuery:(id)arg1 APIClient:(id)arg2 languageCode:(id)arg3 maxTweetsPerRequest:(unsigned long long)arg4 resultType:(id)arg5;
- (id)initWithSearchQuery:(id)arg1 APIClient:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

