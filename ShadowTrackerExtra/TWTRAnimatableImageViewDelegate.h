//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, TWTRAnimatableImageView;

@interface TWTRAnimatableImageViewDelegate : NSObject
{
    TWTRAnimatableImageView *_imageView;
    id _originalDelegate;
    NSString *_animationKey;
    CDUnknownBlockType _completion;
}

@property(readonly, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(readonly, nonatomic) NSString *animationKey; // @synthesize animationKey=_animationKey;
@property(readonly, nonatomic) id originalDelegate; // @synthesize originalDelegate=_originalDelegate;
@property(readonly, nonatomic) TWTRAnimatableImageView *imageView; // @synthesize imageView=_imageView;
- (void).cxx_destruct;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (id)initWithImageView:(id)arg1 originalDelegate:(id)arg2 animationKey:(id)arg3 completion:(CDUnknownBlockType)arg4;

@end
