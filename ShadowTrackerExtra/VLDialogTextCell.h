//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "VLDialogBaseCell.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"

@class NSLayoutConstraint, NSString, UICollectionView, VLAnswerTextViewModel, VLRoundingCornerView, XYYLabel;

@interface VLDialogTextCell : VLDialogBaseCell <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    VLRoundingCornerView *_bubbleBGView;
    XYYLabel *_label;
    NSLayoutConstraint *_bgWidthConstraints;
    NSLayoutConstraint *_bottomConstaints;
    NSLayoutConstraint *_labelBottomConstaints;
    VLAnswerTextViewModel *_viewModel;
    NSString *_currentQuestionId;
    NSString *_currentAnswerId;
    UICollectionView *_evaluateView;
}

@property(retain, nonatomic) UICollectionView *evaluateView; // @synthesize evaluateView=_evaluateView;
@property(copy, nonatomic) NSString *currentAnswerId; // @synthesize currentAnswerId=_currentAnswerId;
@property(copy, nonatomic) NSString *currentQuestionId; // @synthesize currentQuestionId=_currentQuestionId;
@property(nonatomic) __weak VLAnswerTextViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic) __weak NSLayoutConstraint *labelBottomConstaints; // @synthesize labelBottomConstaints=_labelBottomConstaints;
@property(nonatomic) __weak NSLayoutConstraint *bottomConstaints; // @synthesize bottomConstaints=_bottomConstaints;
@property(nonatomic) __weak NSLayoutConstraint *bgWidthConstraints; // @synthesize bgWidthConstraints=_bgWidthConstraints;
@property(retain, nonatomic) XYYLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) VLRoundingCornerView *bubbleBGView; // @synthesize bubbleBGView=_bubbleBGView;
- (void).cxx_destruct;
- (void)createEvaluateView;
- (void)makeConstraints;
- (void)setUpViews;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)showEvaluateView:(_Bool)arg1;
- (void)addSeeMoreButton;
- (void)reportExposure:(id)arg1;
- (void)resignLabel;
- (void)configWithModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
