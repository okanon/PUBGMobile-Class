//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImage.h>

@class FLAnimatedImage;

@interface UIImage (VLink)
+ (void)vl_removeCache;
+ (id)vl_imageNamed:(id)arg1;
+ (id)vl_bundle;
+ (id)vl_imageCache;
+ (void)vl_setCharacterDirection:(unsigned long long)arg1;
+ (id)decodedAndScaledDownImageWithImage:(id)arg1;
+ (id)decodedImageWithImage:(id)arg1;
+ (id)sd_animatedGIFWithData:(id)arg1;
+ (id)sd_imageWithWebPData:(id)arg1;
+ (id)sd_imageWithData:(id)arg1;
+ (id)af_safeImageWithData:(id)arg1;
- (id)vl_resizedImageToSize:(struct CGSize)arg1;
@property(nonatomic) unsigned long long sd_memoryCost;
- (_Bool)isGIF;
- (long long)sd_webpLoopCount;
@property(retain, nonatomic) FLAnimatedImage *sd_FLAnimatedImage;
- (id)sd_imageDataAsFormat:(long long)arg1;
- (id)sd_imageData;
@property(nonatomic) long long sd_imageFormat;
@property(nonatomic) unsigned long long sd_imageLoopCount;
- (id)imageRotatedByDegrees:(double)arg1;
- (id)imageRotatedByRadians:(double)arg1;
- (id)flipHorizontal;
- (id)flipVertical;
- (id)rotate:(long long)arg1;
- (id)fixOrientation;
- (_Bool)hs_shouldResizeToMaxDimension:(double)arg1;
- (id)hs_resizedToMaxDimension:(double)arg1;
@end

