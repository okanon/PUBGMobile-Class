//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "VLFeedsRecmCategoryViewControllerDelegate-Protocol.h"
#import "VLFeedsRecmMainViewControllerDelegate-Protocol.h"
#import "VLFeedsViewDelegate-Protocol.h"
#import "VLRecmDataHandlerDelegate-Protocol.h"
#import "VLTopControllerProtocol-Protocol.h"

@class NSString, VLConfigModel, VLFeedsRecmCategoryViewController, VLFeedsRecmMainViewController, VLFeedsView, VLRecmDataHandler, VLRecmRequestHandler;

@interface VLFeedsViewController : UIViewController <VLFeedsViewDelegate, VLRecmDataHandlerDelegate, VLFeedsRecmCategoryViewControllerDelegate, VLFeedsRecmMainViewControllerDelegate, VLTopControllerProtocol>
{
    VLConfigModel *_config;
    VLFeedsRecmMainViewController *_recmMainVC;
    VLFeedsRecmCategoryViewController *_categoryVC;
    VLRecmDataHandler *_dataHandler;
    VLRecmRequestHandler *_requestHandler;
    long long _robotClickCount;
    long long _currentMenuIndex;
}

@property(nonatomic) long long currentMenuIndex; // @synthesize currentMenuIndex=_currentMenuIndex;
@property(nonatomic) long long robotClickCount; // @synthesize robotClickCount=_robotClickCount;
@property(retain, nonatomic) VLRecmRequestHandler *requestHandler; // @synthesize requestHandler=_requestHandler;
@property(retain, nonatomic) VLRecmDataHandler *dataHandler; // @synthesize dataHandler=_dataHandler;
@property(nonatomic) __weak VLFeedsRecmCategoryViewController *categoryVC; // @synthesize categoryVC=_categoryVC;
@property(nonatomic) __weak VLFeedsRecmMainViewController *recmMainVC; // @synthesize recmMainVC=_recmMainVC;
@property(retain, nonatomic) VLConfigModel *config; // @synthesize config=_config;
- (void).cxx_destruct;
@property(readonly, nonatomic) VLFeedsView *feedsView;
- (void)robotButtonPressed:(id)arg1;
- (void)closeButtonPressed;
- (void)categoryFetchNexPage;
- (void)didSelectedRecmItem:(id)arg1;
- (void)didSelectTopMenuAtIndex:(long long)arg1 subMenuAtIndex:(long long)arg2;
- (void)didSelectOrder:(id)arg1;
- (void)categoryItemsDidChange;
- (void)categoryMenuDidChange;
- (void)mainItemsDidChange;
- (void)initChanged;
- (void)menuSelected:(long long)arg1;
- (void)showPopupView:(id)arg1;
- (void)fetchRecmCategoryData:(long long)arg1;
- (void)loadRecmCategoryView;
- (void)loadRecmMainView;
- (void)close;
- (_Bool)showInVC:(id)arg1;
- (void)configViews;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

