//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface SDWebImageFrame : NSObject
{
    UIImage *_image;
    double _duration;
}

+ (id)frameWithImage:(id)arg1 duration:(double)arg2;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;

@end

