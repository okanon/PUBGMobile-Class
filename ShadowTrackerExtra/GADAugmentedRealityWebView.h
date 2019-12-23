//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADWebView.h"

@class GARArWebView, NSString;

@interface GADAugmentedRealityWebView : UIView <GADWebView>
{
    GARArWebView *_webViewContainer;
}

- (void).cxx_destruct;
- (void)stopLoading;
- (id)scrollView;
- (void)reload;
- (_Bool)isLoading;
- (void)goForward;
- (void)goBack;
- (_Bool)canGoForward;
- (_Bool)canGoBack;
- (id)initWithWebView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
