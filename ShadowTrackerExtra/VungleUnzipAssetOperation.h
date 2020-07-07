//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VungleOperation.h"

@class NSURL, VungleUnzipper;

@interface VungleUnzipAssetOperation : VungleOperation
{
    NSURL *_zippedAssetURL;
    NSURL *_outputURL;
    VungleUnzipper *_unzipper;
    CDUnknownBlockType _resultBlock;
}

@property(copy, nonatomic) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property(retain, nonatomic) VungleUnzipper *unzipper; // @synthesize unzipper=_unzipper;
@property(copy, nonatomic) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property(copy, nonatomic) NSURL *zippedAssetURL; // @synthesize zippedAssetURL=_zippedAssetURL;
- (void).cxx_destruct;
- (void)execute;
- (id)initWithZipFileURL:(id)arg1 targetDirectoryURL:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)initWithZipFileURL:(id)arg1 targetDirectoryURL:(id)arg2;
- (id)initWithAsset:(id)arg1 targetDirectory:(id)arg2 resultBlock:(CDUnknownBlockType)arg3;
- (id)initWithAsset:(id)arg1 targetDirectory:(id)arg2;

@end

