//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface VLFeedsRecmTitleView : UIView
{
    UILabel *_titleLabel;
    UIImageView *_iconView;
    UIImageView *_textureView;
    UIView *_topLine;
}

@property(retain, nonatomic) UIView *topLine; // @synthesize topLine=_topLine;
@property(retain, nonatomic) UIImageView *textureView; // @synthesize textureView=_textureView;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)setUpViews;
- (void)setTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
