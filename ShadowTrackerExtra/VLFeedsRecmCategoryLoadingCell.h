//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CABasicAnimation, UIImageView;

@interface VLFeedsRecmCategoryLoadingCell : UICollectionViewCell
{
    _Bool _isAnimating;
    UIImageView *_loadingView;
    CABasicAnimation *_animation;
}

@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(retain, nonatomic) CABasicAnimation *animation; // @synthesize animation=_animation;
@property(retain, nonatomic) UIImageView *loadingView; // @synthesize loadingView=_loadingView;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)setUpViews;
- (void)stopAnimating;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1;

@end

