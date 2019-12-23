//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDelegate.h"
#import "NSURLSessionDownloadDelegate.h"
#import "NSURLSessionTaskDelegate.h"

@class NSData, NSMutableDictionary, NSString, NSURLSession;

@interface HSDownloadNetworkManager : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDownloadDelegate>
{
    _Bool _hasResumeData;
    NSMutableDictionary *_requestResponseQueue;
    NSData *_resumeData;
    NSURLSession *_foregroundSession;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSURLSession *foregroundSession; // @synthesize foregroundSession=_foregroundSession;
@property(nonatomic) _Bool hasResumeData; // @synthesize hasResumeData=_hasResumeData;
@property(retain, nonatomic) NSData *resumeData; // @synthesize resumeData=_resumeData;
@property(retain, nonatomic) NSMutableDictionary *requestResponseQueue; // @synthesize requestResponseQueue=_requestResponseQueue;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (id)init;
- (id)initCustom;
- (id)downloadTaskWithURL:(id)arg1 orResumeData:(id)arg2;
- (void)pauseDownloadsForURL:(id)arg1;
- (void)cancelDownloadsForURL:(id)arg1;
- (void)downloadResourceForURL:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2 andProgressBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
