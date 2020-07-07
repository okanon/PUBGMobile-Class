//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VLDialogBaseCell.h"

@class NSLayoutConstraint, UIButton, UILabel, UIView, VLAnswerVideoListViewModel, VLImageView, VLRoundingCornerView, VLVideoRecommendItemView;

@interface VLVideoRecommendCell : VLDialogBaseCell
{
    VLRoundingCornerView *_bubbleBGView;
    UILabel *_leftLabel;
    VLImageView *_leftImageView;
    UIView *_leftVideoDetailBGView;
    UILabel *_videoDurationLabel;
    UILabel *_videoViewsLabel;
    VLVideoRecommendItemView *_topItemView;
    VLVideoRecommendItemView *_midItemView;
    VLVideoRecommendItemView *_bottomItemView;
    UIButton *_refreshButton;
    VLAnswerVideoListViewModel *_viewModel;
    NSLayoutConstraint *_itemViewRightConstraint1;
    NSLayoutConstraint *_itemViewRightConstraint2;
    NSLayoutConstraint *_bottomConstaint;
}

@property(nonatomic) __weak NSLayoutConstraint *bottomConstaint; // @synthesize bottomConstaint=_bottomConstaint;
@property(nonatomic) __weak NSLayoutConstraint *itemViewRightConstraint2; // @synthesize itemViewRightConstraint2=_itemViewRightConstraint2;
@property(nonatomic) __weak NSLayoutConstraint *itemViewRightConstraint1; // @synthesize itemViewRightConstraint1=_itemViewRightConstraint1;
@property(nonatomic) __weak VLAnswerVideoListViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property(retain, nonatomic) VLVideoRecommendItemView *bottomItemView; // @synthesize bottomItemView=_bottomItemView;
@property(retain, nonatomic) VLVideoRecommendItemView *midItemView; // @synthesize midItemView=_midItemView;
@property(retain, nonatomic) VLVideoRecommendItemView *topItemView; // @synthesize topItemView=_topItemView;
@property(retain, nonatomic) UILabel *videoViewsLabel; // @synthesize videoViewsLabel=_videoViewsLabel;
@property(retain, nonatomic) UILabel *videoDurationLabel; // @synthesize videoDurationLabel=_videoDurationLabel;
@property(retain, nonatomic) UIView *leftVideoDetailBGView; // @synthesize leftVideoDetailBGView=_leftVideoDetailBGView;
@property(retain, nonatomic) VLImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(retain, nonatomic) VLRoundingCornerView *bubbleBGView; // @synthesize bubbleBGView=_bubbleBGView;
- (void).cxx_destruct;
- (void)makeConstraints;
- (void)setUpViews;
- (void)itemTapped:(id)arg1;
- (void)loadNextPage;
- (void)loadVideos;
- (void)configWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (double)cellHeight;

@end

