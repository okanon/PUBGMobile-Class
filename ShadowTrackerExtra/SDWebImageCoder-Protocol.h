//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData, NSDictionary, UIImage;

@protocol SDWebImageCoder <NSObject>
- (NSData *)encodedDataWithImage:(UIImage *)arg1 format:(long long)arg2;
- (_Bool)canEncodeToFormat:(long long)arg1;
- (UIImage *)decompressedImageWithImage:(UIImage *)arg1 data:(id *)arg2 options:(NSDictionary *)arg3;
- (UIImage *)decodedImageWithData:(NSData *)arg1;
- (_Bool)canDecodeFromData:(NSData *)arg1;
@end

