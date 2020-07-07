//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HSLegacyProfileDataMigrationDAO-Protocol.h"

@class HsSQLDbHelper, NSString;

@interface HSiOSLegacyProfileDataMigrationDAO : NSObject <HSLegacyProfileDataMigrationDAO>
{
    HsSQLDbHelper *_dataBaseHelper;
}

+ (id)legacyProfileFromData:(id)arg1;
+ (id)updateMigrationStateQuery;
+ (id)deleteLegacyProfileQuery;
+ (id)fetchLegacyProfileQuery;
+ (id)insertLegacyProfileParameters:(id)arg1;
+ (id)insertLegacyProfileQuery;
+ (id)createLegacyProfileTableQuery;
@property(retain, nonatomic) HsSQLDbHelper *dataBaseHelper; // @synthesize dataBaseHelper=_dataBaseHelper;
- (void).cxx_destruct;
- (_Bool)dropTable;
- (_Bool)executeUpdateQuery:(id)arg1 withParameters:(id)arg2;
- (id)executeFetchQuery:(id)arg1 withParameters:(id)arg2;
- (_Bool)updateMigrationState:(unsigned long long)arg1 forIdentifier:(id)arg2;
- (_Bool)deleteLegacyProfile:(id)arg1;
- (id)fetchLegacyProfile:(id)arg1;
- (void)storeLegacyProfiles:(id)arg1;
- (_Bool)createLegacyProfileTable;
- (id)initWithUserDBHelper:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

