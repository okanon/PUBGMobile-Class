//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, VLDialogView;
@protocol VLDialogDelegate;

@interface VLDialogViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    id <VLDialogDelegate> _delegate;
    NSArray *_messages;
    NSArray *_options;
    long long _fetchHistoryState;
}

@property(nonatomic) long long fetchHistoryState; // @synthesize fetchHistoryState=_fetchHistoryState;
@property(nonatomic) __weak NSArray *options; // @synthesize options=_options;
@property(nonatomic) __weak NSArray *messages; // @synthesize messages=_messages;
@property(nonatomic) __weak id <VLDialogDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(readonly, nonatomic) VLDialogView *dialogView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)impactFeedbackIfEnable;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)handleResend:(id)arg1;
- (void)handActon:(unsigned long long)arg1 infoDict:(id)arg2 indexPath:(id)arg3;
- (void)reportAnswerExposure:(id)arg1 index:(long long)arg2;
- (void)insertHistory:(long long)arg1;
- (void)reloadOptions;
- (void)reloadDialog:(id)arg1 isInsert:(_Bool)arg2;
- (void)viewDidLoad;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

