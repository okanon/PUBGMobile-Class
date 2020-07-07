//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWindow.h>

@interface IMSDKRotateView : UIWindow
{
    long long _curOrientation;
    struct CGPoint _originalPoint;
    float _animationInternal;
    _Bool _hasLayedOut;
}

+ (struct CGRect)rectInWindowBounds:(struct CGRect)arg1 statusBarOrientation:(long long)arg2 statusBarHeight:(double)arg3;
@property(nonatomic) _Bool hasLayedOut; // @synthesize hasLayedOut=_hasLayedOut;
- (void)stopAnimation;
- (void)beginAnimation;
- (void)setIfNotEqualTransform:(struct CGAffineTransform)arg1 frame:(struct CGRect)arg2;
- (void)setFrames;
- (void)rotateAccordingToStatusBarOrientationAndSupportedOrientations;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)deviceOrientationChanged:(id)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

