//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "GADView.h"

@class UIView;

@interface GADSwappableView : GADView
{
    UIView *_viewToSwap;
    UIView *_snapshotView;
}

- (void).cxx_destruct;
- (void)restoreSwappedView;
- (void)swapViewForImage;
- (void)addSubview:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithViewToSwap:(id)arg1 context:(id)arg2;

@end

