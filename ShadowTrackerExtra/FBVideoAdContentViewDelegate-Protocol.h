//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBVideoAdContentView, NSError;

@protocol FBVideoAdContentViewDelegate <NSObject>
- (void)contentView:(FBVideoAdContentView *)arg1 didFailWithError:(NSError *)arg2;
- (void)contentViewDidUnload:(FBVideoAdContentView *)arg1;
- (void)contentViewDidEnd:(FBVideoAdContentView *)arg1;
- (void)contentViewDidClickthrough:(FBVideoAdContentView *)arg1;
- (void)contentViewDidSkip:(FBVideoAdContentView *)arg1;
- (void)contentViewDidResume:(FBVideoAdContentView *)arg1;
- (void)contentViewDidPause:(FBVideoAdContentView *)arg1;
- (void)contentViewDidProgress:(FBVideoAdContentView *)arg1;
- (void)contentViewDidLoad:(FBVideoAdContentView *)arg1;
@end

