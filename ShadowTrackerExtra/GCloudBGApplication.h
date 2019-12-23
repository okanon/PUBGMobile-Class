//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ABaseApplicationObserver.h"

@class NSMutableDictionary;

@interface GCloudBGApplication : ABaseApplicationObserver
{
    _Bool _isFirst;
    _Bool _enableBGDownload;
    _Bool _bSyncBundleConfig;
    _Bool _isSrcUpdateCancel;
    _Bool _allowCellularAccess;
    int _curStage;
    NSMutableDictionary *_completionHandlerDictionary;
    unsigned long long _backgroundTaskIdentifier;
    struct CSourceUpdateAction *_pCurSourceUpdateAction;
}

+ (id)sharedInstance;
@property(nonatomic) struct CSourceUpdateAction *pCurSourceUpdateAction; // @synthesize pCurSourceUpdateAction=_pCurSourceUpdateAction;
@property(nonatomic) _Bool allowCellularAccess; // @synthesize allowCellularAccess=_allowCellularAccess;
@property(nonatomic) _Bool isSrcUpdateCancel; // @synthesize isSrcUpdateCancel=_isSrcUpdateCancel;
@property(nonatomic) _Bool bSyncBundleConfig; // @synthesize bSyncBundleConfig=_bSyncBundleConfig;
@property(nonatomic) _Bool enableBGDownload; // @synthesize enableBGDownload=_enableBGDownload;
@property(nonatomic) _Bool isFirst; // @synthesize isFirst=_isFirst;
@property(nonatomic) int curStage; // @synthesize curStage=_curStage;
@property(nonatomic) unsigned long long backgroundTaskIdentifier; // @synthesize backgroundTaskIdentifier=_backgroundTaskIdentifier;
@property(retain, nonatomic) NSMutableDictionary *completionHandlerDictionary; // @synthesize completionHandlerDictionary=_completionHandlerDictionary;
- (void).cxx_destruct;
- (_Bool)getEnableCellularAccess;
- (void)setEnableCellularAccess:(_Bool)arg1;
- (void)setCurrentSourceUpdateAction:(void *)arg1;
- (void)setIsCancelUpdate:(_Bool)arg1;
- (void)setIsSyncBundleConfig:(_Bool)arg1;
- (void)setEnableBackgroundDownload:(_Bool)arg1;
- (void)setCurrentSourceUpdateStage:(int)arg1;
- (void)endBackgroundTask;
- (void)callCompletionHandlerForSession:(id)arg1;
- (void)resetAll;
- (void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)application:(id)arg1 didReceiveRemoteNotification:(id)arg2;
- (void)application:(id)arg1 didFailToRegisterForRemoteNotificationsWithError:(id)arg2;
- (void)application:(id)arg1 didRegisterForRemoteNotificationsWithDeviceToken:(id)arg2;
- (_Bool)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationWillTerminate:(id)arg1;
- (void)applicationWillResignActive:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (_Bool)handleOpenURL:(id)arg1;
- (void)initialize;

@end
