//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSCache.h>

@class NSMapTable, NSObject, SDImageCacheConfig;
@protocol OS_dispatch_semaphore;

@interface SDMemoryCache : NSCache
{
    SDImageCacheConfig *_config;
    NSMapTable *_weakCache;
    NSObject<OS_dispatch_semaphore> *_weakCacheLock;
}

@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *weakCacheLock; // @synthesize weakCacheLock=_weakCacheLock;
@property(retain, nonatomic) NSMapTable *weakCache; // @synthesize weakCache=_weakCache;
@property(retain, nonatomic) SDImageCacheConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3;
- (void)didReceiveMemoryWarning:(id)arg1;
- (id)initWithConfig:(id)arg1;
- (void)dealloc;

@end
