//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIColor;

@protocol HsSDKState <NSObject>
@property(nonatomic) _Bool isInSuggestedFAQsFlow;
@property(retain, nonatomic) UIColor *searchHighlightColor;
@property(retain, nonatomic) NSString *SDKLanguageCode;
@property(nonatomic) _Bool isPushEnabled;
@property(nonatomic) _Bool fullscreenOn;
@property(nonatomic) _Bool useLightContentForStatusBar;
@property(nonatomic) _Bool isLanguageCharactersetIdeogrammic;
@property(nonatomic) _Bool enableInAppNotification;
@property(nonatomic) _Bool pauseDisplayOfInAppNotification;
@property(nonatomic) _Bool presentFullScreenOniPad;
@property(nonatomic) _Bool isSDKSessionActive;
@property(nonatomic) _Bool isUIDecomposed;
@property(nonatomic) unsigned long long sdkVisibilityState;
@end

