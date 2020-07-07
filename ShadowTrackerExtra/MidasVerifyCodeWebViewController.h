//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasBaseWebViewController.h"

@class MidasVerifyCodePageJSCallback;
@protocol MidasIAPOperationProtocol;

@interface MidasVerifyCodeWebViewController : MidasBaseWebViewController
{
    id <MidasIAPOperationProtocol> _operation;
    MidasVerifyCodePageJSCallback *_verifyCodePageJSCallback;
    unsigned long long _fkVerifyType;
}

@property(nonatomic) unsigned long long fkVerifyType; // @synthesize fkVerifyType=_fkVerifyType;
@property(retain, nonatomic) MidasVerifyCodePageJSCallback *verifyCodePageJSCallback; // @synthesize verifyCodePageJSCallback=_verifyCodePageJSCallback;
@property(nonatomic) __weak id <MidasIAPOperationProtocol> operation; // @synthesize operation=_operation;
- (void).cxx_destruct;
- (void)midasWebView:(id)arg1 pageDidFinishLoad:(id)arg2;
- (void)midasWebView:(id)arg1 pageDidFailLoad:(id)arg2;
- (void)midasWebView:(id)arg1 pageDidStartLoad:(id)arg2;
- (void)_judgeMidasFKVerifyType:(id)arg1;
- (void)_configureSize;
- (id)_configureURL:(id)arg1;
- (id)jsCallBack;
- (id)initWithOperation:(id)arg1 webViewClosedBlock:(CDUnknownBlockType)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;

@end

