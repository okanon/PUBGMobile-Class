//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class VLConfigModel, VLRecmDataHandler;

@interface VLRecmRequestHandler : NSObject
{
    VLConfigModel *_config;
    VLRecmDataHandler *_dataHandler;
}

@property(nonatomic) __weak VLRecmDataHandler *dataHandler; // @synthesize dataHandler=_dataHandler;
@property(nonatomic) __weak VLConfigModel *config; // @synthesize config=_config;
- (void).cxx_destruct;
- (void)fetchRecommendCategory:(long long)arg1 tagId:(id)arg2 subTagId:(id)arg3 order:(id)arg4;
- (void)fetchRecommendCategoryMenu:(CDUnknownBlockType)arg1;
- (void)fetchRecommendMain;
- (void)fetchInit;
- (id)initWithConfig:(id)arg1 dataHandler:(id)arg2;

@end
