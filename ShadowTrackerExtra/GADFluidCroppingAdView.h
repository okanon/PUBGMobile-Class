//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class GADObserverCollection;

@interface GADFluidCroppingAdView : UIView
{
    UIView *_view;
    GADObserverCollection *_observers;
    id _messageSource;
    double _contentHeight;
}

@property(nonatomic) double contentHeight; // @synthesize contentHeight=_contentHeight;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)updateContentHeightValueFromNotification:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)dealloc;
- (id)initWithView:(id)arg1 messageSource:(id)arg2;

@end

