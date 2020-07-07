//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface UIButton (WebCache)
+ (void)setSharedImageDownloader:(id)arg1;
+ (id)sharedImageDownloader;
- (struct NSMutableDictionary *)sd_imageURLStorage;
- (void)sd_cancelBackgroundImageLoadForState:(unsigned long long)arg1;
- (void)sd_cancelImageLoadForState:(unsigned long long)arg1;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;
- (void)sd_setBackgroundImageWithURL:(id)arg1 forState:(unsigned long long)arg2;
- (id)sd_backgroundImageURLForState:(unsigned long long)arg1;
- (id)sd_currentBackgroundImageURL;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4 completed:(CDUnknownBlockType)arg5;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 completed:(CDUnknownBlockType)arg4;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 completed:(CDUnknownBlockType)arg3;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3 options:(unsigned long long)arg4;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2 placeholderImage:(id)arg3;
- (void)sd_setImageWithURL:(id)arg1 forState:(unsigned long long)arg2;
- (id)sd_imageURLForState:(unsigned long long)arg1;
- (id)sd_currentImageURL;
- (void)af_setBackgroundImageDownloadReceipt:(id)arg1 forState:(unsigned long long)arg2;
- (id)af_backgroundImageDownloadReceiptForState:(unsigned long long)arg1;
- (void)af_setImageDownloadReceipt:(id)arg1 forState:(unsigned long long)arg2;
- (id)af_imageDownloadReceiptForState:(unsigned long long)arg1;
- (_Bool)isActiveBackgroundTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;
- (_Bool)isActiveTaskURLEqualToURLRequest:(id)arg1 forState:(unsigned long long)arg2;
- (void)cancelBackgroundImageDownloadTaskForState:(unsigned long long)arg1;
- (void)cancelImageDownloadTaskForState:(unsigned long long)arg1;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setBackgroundImageForState:(unsigned long long)arg1 withURL:(id)arg2;
- (void)setImageForState:(unsigned long long)arg1 withURLRequest:(id)arg2 placeholderImage:(id)arg3 success:(CDUnknownBlockType)arg4 failure:(CDUnknownBlockType)arg5;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2 placeholderImage:(id)arg3;
- (void)setImageForState:(unsigned long long)arg1 withURL:(id)arg2;
@end
