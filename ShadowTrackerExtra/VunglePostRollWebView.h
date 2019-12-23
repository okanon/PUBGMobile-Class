//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JavascriptToNativeHandler.h"
#import "UIWebViewDelegate.h"
#import "WKNavigationDelegate.h"
#import "WKScriptMessageHandler.h"
#import "WKUIDelegate.h"

@class NSString, NSURL, UIWebView, VungleAdViewController, VungleWebViewFacade, WKWebView;

@interface VunglePostRollWebView : UIView <JavascriptToNativeHandler, UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate, WKScriptMessageHandler>
{
    VungleAdViewController *_adViewController;
    VungleWebViewFacade *_facade;
    UIWebView *_legacyWebView;
    WKWebView *_webView;
    NSURL *_URL;
}

@property(retain) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) __weak WKWebView *webView; // @synthesize webView=_webView;
@property(nonatomic) __weak UIWebView *legacyWebView; // @synthesize legacyWebView=_legacyWebView;
@property(retain, nonatomic) VungleWebViewFacade *facade; // @synthesize facade=_facade;
@property(nonatomic) VungleAdViewController *adViewController; // @synthesize adViewController=_adViewController;
- (void).cxx_destruct;
- (void)userContentController:(id)arg1 didReceiveScriptMessage:(id)arg2;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webViewDidFinishLoad:(id)arg1;
- (_Bool)javascriptToObjectiveCMapping:(id)arg1;
- (_Bool)javascriptMessageHandler:(id)arg1;
- (void)removeScriptHandlers;
- (void)load;
- (void)dealloc;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
