//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel, UISlider;

@interface TWTRVideoControlsView : UIView
{
    UILabel *_timeLabel;
    UISlider *_scrubber;
    UIButton *_controlButton;
}

@property(readonly, nonatomic) UIButton *controlButton; // @synthesize controlButton=_controlButton;
@property(readonly, nonatomic) UISlider *scrubber; // @synthesize scrubber=_scrubber;
@property(readonly, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
- (void).cxx_destruct;
- (void)prepareSubviews;
- (void)updateButtonImageForState:(long long)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)updateTintColorForSubviews;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

