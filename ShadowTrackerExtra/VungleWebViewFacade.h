//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIWebView, WKWebView;

@interface VungleWebViewFacade : NSObject
{
    _Bool _legacy;
    UIWebView *_legacyWebView;
    WKWebView *_webView;
}

+ (_Bool)supportsWebKitFeatures;
@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIWebView *legacyWebView; // @synthesize legacyWebView=_legacyWebView;
@property(nonatomic, getter=isLegacy) _Bool legacy; // @synthesize legacy=_legacy;
- (void).cxx_destruct;
- (void)evaluateJavaScript:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)loadHTMLString:(id)arg1;
- (void)loadFileURL:(id)arg1 baseURL:(id)arg2;
- (void)resetWebContent;
@property(readonly, nonatomic) UIView *contentView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

@end
