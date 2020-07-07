//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSFileManager, NSMutableArray, NSString, SDImageCacheConfig, SDMemoryCache;
@protocol OS_dispatch_queue;

@interface SDImageCache : NSObject
{
    SDImageCacheConfig *_config;
    SDMemoryCache *_memCache;
    NSString *_diskCachePath;
    NSMutableArray *_customPaths;
    NSObject<OS_dispatch_queue> *_ioQueue;
    NSFileManager *_fileManager;
}

+ (id)sharedImageCache;
@property(retain, nonatomic) NSFileManager *fileManager; // @synthesize fileManager=_fileManager;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *ioQueue; // @synthesize ioQueue=_ioQueue;
@property(retain, nonatomic) NSMutableArray *customPaths; // @synthesize customPaths=_customPaths;
@property(retain, nonatomic) NSString *diskCachePath; // @synthesize diskCachePath=_diskCachePath;
@property(retain, nonatomic) SDMemoryCache *memCache; // @synthesize memCache=_memCache;
@property(readonly, nonatomic) SDImageCacheConfig *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)calculateSizeWithCompletionBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)getDiskCount;
- (unsigned long long)getSize;
- (void)backgroundDeleteOldFiles;
- (void)deleteOldFilesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)deleteOldFiles;
- (void)clearDiskOnCompletion:(CDUnknownBlockType)arg1;
- (void)clearMemory;
@property(nonatomic) unsigned long long maxMemoryCountLimit;
@property(nonatomic) unsigned long long maxMemoryCost;
- (void)removeImageForKey:(id)arg1 fromDisk:(_Bool)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)removeImageForKey:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)queryCacheOperationForKey:(id)arg1 options:(unsigned long long)arg2 done:(CDUnknownBlockType)arg3;
- (id)queryCacheOperationForKey:(id)arg1 done:(CDUnknownBlockType)arg2;
- (id)scaledImageForKey:(id)arg1 image:(id)arg2;
- (id)diskImageForKey:(id)arg1 data:(id)arg2 options:(unsigned long long)arg3;
- (id)diskImageForKey:(id)arg1 data:(id)arg2;
- (id)diskImageForKey:(id)arg1;
- (id)diskImageDataBySearchingAllPathsForKey:(id)arg1;
- (id)imageFromCacheForKey:(id)arg1;
- (id)imageFromDiskCacheForKey:(id)arg1;
- (id)imageFromMemoryCacheForKey:(id)arg1;
- (id)diskImageDataForKey:(id)arg1;
- (_Bool)_diskImageDataExistsWithKey:(id)arg1;
- (_Bool)diskImageDataExistsWithKey:(id)arg1;
- (void)diskImageExistsWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_storeImageDataToDisk:(id)arg1 forKey:(id)arg2;
- (void)storeImageDataToDisk:(id)arg1 forKey:(id)arg2;
- (void)storeImage:(id)arg1 imageData:(id)arg2 forKey:(id)arg3 toDisk:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)storeImage:(id)arg1 forKey:(id)arg2 toDisk:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)storeImage:(id)arg1 forKey:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)makeDiskCachePath:(id)arg1;
- (id)cachedFileNameForKey:(id)arg1;
- (id)defaultCachePathForKey:(id)arg1;
- (id)cachePathForKey:(id)arg1 inPath:(id)arg2;
- (void)addReadOnlyCachePath:(id)arg1;
- (void)dealloc;
- (id)initWithNamespace:(id)arg1 diskCacheDirectory:(id)arg2;
- (id)initWithNamespace:(id)arg1;
- (id)init;

@end
