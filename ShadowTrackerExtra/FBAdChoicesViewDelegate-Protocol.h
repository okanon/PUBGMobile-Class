//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBAdChoicesView, UIViewController;

@protocol FBAdChoicesViewDelegate <NSObject>

@optional
- (void)adChoicesView:(FBAdChoicesView *)arg1 viewControllerDismissed:(UIViewController *)arg2;
- (void)adChoicesView:(FBAdChoicesView *)arg1 viewControllerCompleted:(UIViewController *)arg2;
- (void)adChoicesView:(FBAdChoicesView *)arg1 willPresentViewController:(UIViewController *)arg2;
@end

