//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, WKWebView;

@interface VLWebView : UIView
{
    UIView *_topView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
    WKWebView *_webView;
}

@property(retain, nonatomic) WKWebView *webView; // @synthesize webView=_webView;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *topView; // @synthesize topView=_topView;
- (void).cxx_destruct;
- (void)makeConstaints;
- (void)setUpViews;
- (void)loadURL:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
