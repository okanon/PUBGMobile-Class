//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UIViewControllerAnimatedTransitioning.h"

@class FBAdIntroScreenView, NSString, UIVisualEffectView;

@interface FBAdIntroCardTransition : NSObject <UIViewControllerAnimatedTransitioning>
{
    _Bool _showIntroCardTransition;
    FBAdIntroScreenView *_introScreenView;
    UIVisualEffectView *_blurEffectView;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(nonatomic) _Bool showIntroCardTransition; // @synthesize showIntroCardTransition=_showIntroCardTransition;
@property(retain, nonatomic) UIVisualEffectView *blurEffectView; // @synthesize blurEffectView=_blurEffectView;
@property(retain, nonatomic) FBAdIntroScreenView *introScreenView; // @synthesize introScreenView=_introScreenView;
- (void).cxx_destruct;
- (double)transitionDuration:(id)arg1;
- (void)fadeInFinalViewFromView:(id)arg1 toView:(id)arg2 introScreenView:(id)arg3 topViewController:(id)arg4 transitionContext:(id)arg5;
- (void)introCardScaleDownFromView:(id)arg1 toView:(id)arg2 introScreenView:(id)arg3 topViewController:(id)arg4 transitionContext:(id)arg5;
- (void)introCardScaleUpFromView:(id)arg1 toView:(id)arg2 topViewController:(id)arg3 transitionContext:(id)arg4;
- (void)blurInitialViewFromView:(id)arg1 toView:(id)arg2 topViewController:(id)arg3 transitionContext:(id)arg4;
- (void)animateTransition:(id)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 iconURL:(id)arg3 iconStyle:(unsigned long long)arg4 shouldShowIntroCardTransition:(_Bool)arg5 token:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

