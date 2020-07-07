//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class TWTRVideoDeeplinkConfiguration, UIButton;
@protocol TWTRVideoCTAViewDelegate;

@interface TWTRVideoCTAView : UIView
{
    id <TWTRVideoCTAViewDelegate> _delegate;
    UIButton *_CTAButton;
    TWTRVideoDeeplinkConfiguration *_deeplinkConfiguration;
}

+ (id)borderImage;
@property(readonly, nonatomic) TWTRVideoDeeplinkConfiguration *deeplinkConfiguration; // @synthesize deeplinkConfiguration=_deeplinkConfiguration;
@property(readonly, nonatomic) UIButton *CTAButton; // @synthesize CTAButton=_CTAButton;
@property(nonatomic) __weak id <TWTRVideoCTAViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)fireMetricsCallForMetricsURL:(id)arg1;
- (void)handleDeeplinkButton;
- (struct CGSize)intrinsicContentSize;
- (id)makeButtonWithTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 deeplinkConfiguration:(id)arg2;

@end

