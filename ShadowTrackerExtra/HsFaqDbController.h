//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsVersionedDatabase-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

@interface HsFaqDbController : NSObject <HsVersionedDatabase>
{
    NSMutableDictionary *_publishIdObserversMap;
    NSObject<OS_dispatch_queue> *_workerQueue;
}

+ (void)updateDbVersionTo:(int)arg1;
+ (int)currentDbVersion;
+ (_Bool)migrateForVersion:(id)arg1;
+ (void)clearOlderFaqModel;
+ (void)dropAllAndReinitialize;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workerQueue; // @synthesize workerQueue=_workerQueue;
@property(retain, nonatomic) NSMutableDictionary *publishIdObserversMap; // @synthesize publishIdObserversMap=_publishIdObserversMap;
- (void).cxx_destruct;
- (void)clearFaqModel;
- (void)validateFAQsDbState;
- (id)filterFaqIds:(id)arg1 withTagsFilter:(id)arg2;
- (_Bool)updateFaqWithId:(id)arg1 isHelpful:(int)arg2;
- (id)faqIsHelpfulForId:(id)arg1;
- (id)allFaqs;
- (id)faqForId:(id)arg1;
- (id)faqForPublishId:(id)arg1 language:(id)arg2;
- (id)faqForPublishId:(id)arg1;
- (id)faqListItemsForSectionPublishId:(id)arg1 withTagsFilter:(id)arg2;
- (id)faqListItemsForSectionPublishId:(id)arg1;
- (id)faqsForSectionPublishId:(id)arg1;
- (id)doesFaqExist:(id)arg1;
- (unsigned long long)sectionsCount;
- (id)sectionIds;
- (id)sectionIdForPublishId:(id)arg1;
- (id)sectionListItemForPublishId:(id)arg1;
- (id)sectionListItemForPublishId:(id)arg1 withTagsFilter:(id)arg2;
- (id)sectionForPublishId:(id)arg1 withTagsFilter:(id)arg2;
- (id)sectionListItemsWithTagsFilter:(id)arg1;
- (id)doesSectionExist:(id)arg1;
- (void)notifyObserversNoChangeForFaqPublishId:(id)arg1;
- (void)notifyObserversFailure:(id)arg1 forFaqPublishId:(id)arg2;
- (void)notifyObserversSuccessForFaqPublishId:(id)arg1;
- (void)notifyObserversSuccessForFaqPublishId:(id)arg1 language:(id)arg2;
- (void)notifyObserversWithSelector:(SEL)arg1 publishId:(id)arg2 language:(id)arg3 error:(id)arg4;
- (void)notifyObserversFaqSyncFailed:(id)arg1 error:(id)arg2;
- (void)deleteFaq:(id)arg1;
- (void)storeFaq:(id)arg1;
- (void)storeSections:(id)arg1;
- (void)unregisterObserver:(id)arg1 forFaqPublishId:(id)arg2;
- (void)registerObserver:(id)arg1 forFaqPublishId:(id)arg2;
- (id)publishIdTokenForFaqPublishId:(id)arg1;
- (id)mutableSetForWeakReferencedObjects;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

