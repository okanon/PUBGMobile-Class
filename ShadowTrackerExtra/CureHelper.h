//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString;

@interface CureHelper : NSObject
{
    NSMutableArray *_ifsArray;
    NSMutableDictionary *_downloadDictionary;
    long long _downloadLengthPerTask;
    NSString *_ifs_save_path;
    NSString *_puffer_save_path;
}

+ (id)sharedInstance;
@property(copy, nonatomic) NSString *puffer_save_path; // @synthesize puffer_save_path=_puffer_save_path;
@property(copy, nonatomic) NSString *ifs_save_path; // @synthesize ifs_save_path=_ifs_save_path;
@property(nonatomic) long long downloadLengthPerTask; // @synthesize downloadLengthPerTask=_downloadLengthPerTask;
@property(retain, nonatomic) NSMutableDictionary *downloadDictionary; // @synthesize downloadDictionary=_downloadDictionary;
@property(retain, nonatomic) NSMutableArray *ifsArray; // @synthesize ifsArray=_ifsArray;
- (void).cxx_destruct;
- (void)DumpDownloadTasksInfo;
- (void)RepairBackgroundDownloadDirectory:(id)arg1;
- (_Bool)GetCurrentDownloadDetail:(id *)arg1 withFileSize:(long long *)arg2 withGapsCnt:(long long *)arg3;
- (_Bool)ResetRetryTaskInfo:(id)arg1 withOffset:(long long)arg2 withLength:(long long)arg3;
- (_Bool)GetOneTaskInfo:(id *)arg1 withGap:(id *)arg2;
- (id)GetIfsArray;
- (void)RepairCuresGaps:(id)arg1 withGapArray:(id *)arg2;
- (id)GetDownloadGap:(struct CuResFile *)arg1;
- (_Bool)ParseCuresFiles:(_Bool)arg1;
- (_Bool)GetCuresFileList:(_Bool)arg1;
- (_Bool)RebuildIOSBGDownloadPath;
- (long long)GetDownloadLengthPerTask;
- (void)SetDownloadLengthPerTask:(long long)arg1;
- (id)GetIOSBGDownloadRelativePath;
- (id)GetIOSBGDownloadPath;
- (id)GetIfsSavePath;
- (void)SetIfsSavePath:(id)arg1;
- (void)dealloc;
- (id)init;

@end

