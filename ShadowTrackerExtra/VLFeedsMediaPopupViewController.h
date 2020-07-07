//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, VLFeedsMediaPopupView, VLFeedsRecmItemViewModel;

@interface VLFeedsMediaPopupViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    VLFeedsRecmItemViewModel *_viewModel;
    NSArray *_recmItems;
}

@property(retain, nonatomic) NSArray *recmItems; // @synthesize recmItems=_recmItems;
@property(retain, nonatomic) VLFeedsRecmItemViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void).cxx_destruct;
@property(readonly, nonatomic) VLFeedsMediaPopupView *popupView;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)recmItemsByRespModel:(id)arg1;
- (void)fetchDetailRecommend:(id)arg1 resourceId:(id)arg2 tagId:(id)arg3 subTagId:(id)arg4;
- (void)setUpViews;
- (void)playVideoInWeb:(id)arg1 videoId:(id)arg2;
- (void)showVideo;
- (void)close;
- (void)configWithViewModel:(id)arg1;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

