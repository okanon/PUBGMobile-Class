//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIButton.h"

#import "TWTRScribableView.h"

@class NSString, TWTRAPIClient, TWTRTweet, UIImageView, UIViewController;

@interface TWTRLikeButton : UIButton <TWTRScribableView>
{
    _Bool _isLiked;
    unsigned long long _scribeViewName;
    UIViewController *_presenterViewController;
    UIImageView *_localImageView;
    TWTRTweet *_tweet;
    TWTRAPIClient *_apiClient;
    long long _likeButtonSize;
}

@property(nonatomic) long long likeButtonSize; // @synthesize likeButtonSize=_likeButtonSize;
@property(retain, nonatomic) TWTRAPIClient *apiClient; // @synthesize apiClient=_apiClient;
@property(retain, nonatomic) TWTRTweet *tweet; // @synthesize tweet=_tweet;
@property(retain, nonatomic) UIImageView *localImageView; // @synthesize localImageView=_localImageView;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(nonatomic) __weak UIViewController *presenterViewController; // @synthesize presenterViewController=_presenterViewController;
@property(nonatomic) unsigned long long scribeViewName; // @synthesize scribeViewName=_scribeViewName;
- (void).cxx_destruct;
- (void)createImageViewIfNil;
- (void)updateToLikedStateWithAnimation;
- (void)updateToUnlikedState;
- (void)updateToLikedState;
- (void)APIClientFromTwitterWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)isAlreadyLikedError:(id)arg1;
- (void)likeTapped;
- (id)imageView;
- (void)updateImageToLiked:(_Bool)arg1 animated:(_Bool)arg2;
- (void)configureWithTweet:(id)arg1;
- (void)likeButtonCommonInit;
- (id)initWithFrame:(struct CGRect)arg1 likeButtonSize:(long long)arg2;
- (id)initWithLikeButtonSize:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

