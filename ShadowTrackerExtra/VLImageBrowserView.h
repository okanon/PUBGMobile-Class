//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSString, UIButton, UIImage, UIScrollView;

@interface VLImageBrowserView : UIView <UIScrollViewDelegate>
{
    UIImage *_currentImage;
    UIScrollView *_scrollView;
    NSArray *_scalableViews;
    UIButton *_saveButton;
    UIButton *_closeButton;
    NSArray *_images;
    long long _currentIndex;
}

@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
@property(nonatomic) __weak NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
@property(retain, nonatomic) UIButton *saveButton; // @synthesize saveButton=_saveButton;
@property(retain, nonatomic) NSArray *scalableViews; // @synthesize scalableViews=_scalableViews;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) UIImage *currentImage; // @synthesize currentImage=_currentImage;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)makeConstaints;
- (void)setUpViews;
- (void)setUpScalableViews;
- (void)updateDisplay;
- (void)configWithImages:(id)arg1 currentIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

