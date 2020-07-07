//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import "FBAdUpdatableView-Protocol.h"

@class FBAdOptionsView, FBNativeAdBase, FBNativeAdViewAttributes, NSNumber, NSString, UILabel;

@interface FBCombinedSecondaryView : UIView <FBAdUpdatableView>
{
    _Bool _ratingEnabledLast;
    _Bool _socialContextEnabledLast;
    _Bool _fullRatingView;
    FBNativeAdBase *_nativeAdBase;
    FBNativeAdViewAttributes *_attributes;
    UILabel *_titleLabel;
    UILabel *_socialContextLabel;
    FBAdOptionsView *_adOptionsView;
    NSNumber *_ratingEnabledInternal;
    NSNumber *_socialContextEnabledInternal;
    double _additionalYSpacing;
}

@property(nonatomic, getter=isFullRatingView) _Bool fullRatingView; // @synthesize fullRatingView=_fullRatingView;
@property(nonatomic) double additionalYSpacing; // @synthesize additionalYSpacing=_additionalYSpacing;
@property(nonatomic, getter=isSocialContextEnabledLast) _Bool socialContextEnabledLast; // @synthesize socialContextEnabledLast=_socialContextEnabledLast;
@property(nonatomic, getter=isRatingEnabledLast) _Bool ratingEnabledLast; // @synthesize ratingEnabledLast=_ratingEnabledLast;
@property(copy, nonatomic, getter=isSocialContextEnabledInternal) NSNumber *socialContextEnabledInternal; // @synthesize socialContextEnabledInternal=_socialContextEnabledInternal;
@property(copy, nonatomic, getter=isRatingEnabledInternal) NSNumber *ratingEnabledInternal; // @synthesize ratingEnabledInternal=_ratingEnabledInternal;
@property(nonatomic) __weak FBAdOptionsView *adOptionsView; // @synthesize adOptionsView=_adOptionsView;
@property(nonatomic) __weak UILabel *socialContextLabel; // @synthesize socialContextLabel=_socialContextLabel;
@property(nonatomic) __weak UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak FBNativeAdViewAttributes *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) __weak FBNativeAdBase *nativeAdBase; // @synthesize nativeAdBase=_nativeAdBase;
- (void).cxx_destruct;
@property(readonly, nonatomic) struct CGRect spareSpace;
- (void)layoutSubviews;
- (void)resetView;
- (void)updateView:(_Bool)arg1;
- (void)createView;
- (void)createSocialContextView;
- (void)createAdOptionsView;
- (void)createTitleLabel;
@property(nonatomic, getter=isSocialContextEnabled) _Bool socialContextEnabled;
@property(nonatomic, getter=isRatingEnabled) _Bool ratingEnabled; // @dynamic ratingEnabled;
- (id)initWithFrame:(struct CGRect)arg1 nativeAdBase:(id)arg2 attributes:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

