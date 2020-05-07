//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HSSupportDataMigrator.h"

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

