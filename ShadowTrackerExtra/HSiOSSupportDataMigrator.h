//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HSSupportDataMigrator-Protocol.h"

@class NSString;

@interface HSiOSSupportDataMigrator : NSObject <HSSupportDataMigrator>
{
}

+ (void)deleteLegacyConversationDataBaseWithError:(id *)arg1;
+ (void)dropConversationsDatabase;
+ (void)migrateConversationsFromLastSDKVersion:(id)arg1;
+ (void)migrateFAQsFromLastSDKVersion:(id)arg1;
+ (_Bool)shouldMigrateFromVersion:(id)arg1;
+ (void)removeConfigEtagOnMigration;
+ (void)migrate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

