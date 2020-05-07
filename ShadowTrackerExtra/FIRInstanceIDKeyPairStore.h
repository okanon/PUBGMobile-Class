//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRInstanceIDBackupExcludedPlist, FIRInstanceIDKeyPair;

@interface FIRInstanceIDKeyPairStore : NSObject
{
    FIRInstanceIDBackupExcludedPlist *_plist;
    FIRInstanceIDKeyPair *_keyPair;
    long long _keychainEntitlementsErrorCount;
}

+ (id)keyStoreFileName;
+ (void)deleteKeyPairWithPrivateTag:(id)arg1 publicTag:(id)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)keyPairForPrivateKeyTag:(id)arg1 publicKeyTag:(id)arg2 error:(id *)arg3;
@property(nonatomic) long long keychainEntitlementsErrorCount; // @synthesize keychainEntitlementsErrorCount=_keychainEntitlementsErrorCount;
@property(retain) FIRInstanceIDKeyPair *keyPair; // @synthesize keyPair=_keyPair;
@property(retain, nonatomic) FIRInstanceIDBackupExcludedPlist *plist; // @synthesize plist=_plist;
- (void).cxx_destruct;
- (_Bool)removeKeyPairCreationTimePlistWithError:(id *)arg1;
- (void)deleteSavedKeyPairWithSubtype:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)updateKeyRef:(struct __SecKey *)arg1 withTag:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)migrateKeyPairCacheIfNeededWithHandler:(CDUnknownBlockType)arg1;
- (id)cachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)validCachedKeyPairWithSubtype:(id)arg1 error:(id *)arg2;
- (id)generateAndSaveKeyWithSubtype:(id)arg1 creationTime:(long long)arg2 error:(id *)arg3;
- (id)loadKeyPairWithError:(id *)arg1;
- (id)appIdentityWithError:(id *)arg1;
- (_Bool)hasCachedKeyPairs;
- (_Bool)invalidateKeyPairsIfNeeded;
- (id)init;

@end

