//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HsPullUpViewController, UIViewPropertyAnimator;

@protocol HsPullUpControllerBehaviour <NSObject>
@property(readonly, nonatomic) double removalProgress;
@property(readonly, nonatomic) double removalVelocity;
- (UIViewPropertyAnimator *)removalInteractionAnimator:(HsPullUpViewController *)arg1 with:(struct CGVector)arg2;
- (UIViewPropertyAnimator *)moveAnimator:(HsPullUpViewController *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
- (UIViewPropertyAnimator *)removeAnimator:(HsPullUpViewController *)arg1 fromPosition:(long long)arg2;
- (UIViewPropertyAnimator *)addAnimator:(HsPullUpViewController *)arg1 toPosition:(long long)arg2;
- (UIViewPropertyAnimator *)interactionAnimator:(HsPullUpViewController *)arg1 to:(long long)arg2 with:(struct CGVector)arg3;
- (double)redirectionalProgress:(HsPullUpViewController *)arg1 fromPosition:(long long)arg2 toPosition:(long long)arg3;
@end

