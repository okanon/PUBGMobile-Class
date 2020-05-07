//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionTaskDelegate.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSURLSession;

@interface MidasLogCGICommunicator : NSObject <NSURLSessionTaskDelegate>
{
    NSString *_uploadUrl;
    double _timeout;
    NSString *_dateTime;
    NSString *_fileName;
    NSString *_appId;
    NSString *_userId;
    long long _maxCount;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_uploadTasks;
    NSMutableDictionary *_uploadFilePair;
    NSURLSession *_uploadSession;
    NSString *_tempDirectory;
}

@property(copy, nonatomic) NSString *tempDirectory; // @synthesize tempDirectory=_tempDirectory;
@property(retain, nonatomic) NSURLSession *uploadSession; // @synthesize uploadSession=_uploadSession;
@property(retain, nonatomic) NSMutableDictionary *uploadFilePair; // @synthesize uploadFilePair=_uploadFilePair;
@property(retain, nonatomic) NSMutableDictionary *uploadTasks; // @synthesize uploadTasks=_uploadTasks;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(copy, nonatomic) NSString *dateTime; // @synthesize dateTime=_dateTime;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (void)_cleanUp:(id)arg1;
- (void)_doSendFiles:(id)arg1;
- (void)_uploadFiles:(id)arg1;
- (id)_getFilePath;
@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
@property(copy, nonatomic) NSString *uploadUrl; // @synthesize uploadUrl=_uploadUrl;
- (void)startUpload;
- (id)initWithFileName:(id)arg1 maxCount:(long long)arg2 appId:(id)arg3 userId:(id)arg4;
- (id)initWithDate:(id)arg1 maxCount:(long long)arg2 appId:(id)arg3 userId:(id)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

