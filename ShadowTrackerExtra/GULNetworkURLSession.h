//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSURLSessionDataDelegate-Protocol.h"
#import "NSURLSessionDelegate-Protocol.h"
#import "NSURLSessionDownloadDelegate-Protocol.h"
#import "NSURLSessionTaskDelegate-Protocol.h"

@class NSData, NSString, NSURL, NSURLRequest, NSURLSession, NSURLSessionConfiguration;
@protocol GULNetworkLoggerDelegate;

@interface GULNetworkURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate, NSURLSessionDownloadDelegate, NSURLSessionTaskDelegate>
{
    CDUnknownBlockType _completionHandler;
    NSString *_sessionID;
    NSURLSessionConfiguration *_sessionConfig;
    NSURLSession *_URLSession;
    NSURL *_networkDirectoryURL;
    NSData *_downloadedData;
    NSURL *_uploadingFileURL;
    NSURLRequest *_request;
    _Bool _backgroundNetworkEnabled;
    id <GULNetworkLoggerDelegate> _loggerDelegate;
}

+ (id)sessionFromFetcherMapForSessionID:(id)arg1;
+ (void)setSessionInFetcherMap:(id)arg1 forSessionID:(id)arg2;
+ (id)sessionIDToSystemCompletionHandlerDictionary;
+ (id)sessionIDToFetcherMapReadWriteLock;
+ (id)sessionIDToFetcherMap;
+ (id)fetcherWithSessionIdentifier:(id)arg1;
+ (void)handleEventsForBackgroundURLSessionID:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
@property(nonatomic) __weak id <GULNetworkLoggerDelegate> loggerDelegate; // @synthesize loggerDelegate=_loggerDelegate;
@property(nonatomic, getter=isBackgroundNetworkEnabled) _Bool backgroundNetworkEnabled; // @synthesize backgroundNetworkEnabled=_backgroundNetworkEnabled;
- (void).cxx_destruct;
- (void)populateSessionConfig:(id)arg1 withRequest:(id)arg2;
- (void)callCompletionHandler:(CDUnknownBlockType)arg1 withResponse:(id)arg2 data:(id)arg3 error:(id)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)excludeFromBackupForURL:(id)arg1;
- (_Bool)ensureTemporaryDirectoryExists;
- (id)temporaryFilePathWithSessionID:(id)arg1;
- (void)removeTempItemAtURL:(id)arg1;
- (void)maybeRemoveTempFilesAtURL:(id)arg1 expiringTime:(double)arg2;
- (id)backgroundSessionConfigWithSessionID:(id)arg1;
- (void)setSessionID:(id)arg1;
- (void)callSystemCompletionHandler:(id)arg1;
- (void)addSystemCompletionHandler:(CDUnknownBlockType)arg1 forSession:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(id)arg1;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (id)sessionIDFromAsyncGETRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)sessionIDFromAsyncPOSTRequest:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithNetworkLoggerDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

