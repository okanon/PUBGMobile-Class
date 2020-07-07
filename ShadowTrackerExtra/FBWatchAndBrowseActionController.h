//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBWatchAndActionActionableController-Protocol.h"
#import "FBWatchAndBrowseWebViewDelegate-Protocol.h"

@class FBNativeAdDataModel, FBWatchAndBrowseWebView, NSString, NSURL, UIView;
@protocol FBWatchAndActionActionableControllerDelegate;

@interface FBWatchAndBrowseActionController : NSObject <FBWatchAndBrowseWebViewDelegate, FBWatchAndActionActionableController>
{
    id <FBWatchAndActionActionableControllerDelegate> _delegate;
    FBNativeAdDataModel *_dataModel;
    FBWatchAndBrowseWebView *_browseView;
}

@property(readonly, nonatomic) FBWatchAndBrowseWebView *browseView; // @synthesize browseView=_browseView;
@property(retain, nonatomic) FBNativeAdDataModel *dataModel; // @synthesize dataModel=_dataModel;
@property(nonatomic) __weak id <FBWatchAndActionActionableControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)webViewDidClose;
@property(readonly, nonatomic) UIView *view;
- (void)prepareForPresentation;
- (void)preloadContent;
@property(readonly, nonatomic) __weak NSURL *targetURL;
- (id)initWithDataModel:(id)arg1;
- (_Bool)validateDataModel;
- (void)logError:(id)arg1;
- (void)makeWebView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

