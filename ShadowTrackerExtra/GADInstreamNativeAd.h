//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GADInternalNativeAd, GADMediaContent, GADMediaView;

@interface GADInstreamNativeAd : NSObject
{
    GADInternalNativeAd *_internalNativeAd;
    GADMediaView *_mediaView;
    GADMediaContent *_mediaContent;
}

@property(readonly, nonatomic) GADMediaContent *mediaContent; // @synthesize mediaContent=_mediaContent;
@property(readonly, nonatomic) GADMediaView *mediaView; // @synthesize mediaView=_mediaView;
@property(readonly, nonatomic) GADInternalNativeAd *internalNativeAd; // @synthesize internalNativeAd=_internalNativeAd;
- (void).cxx_destruct;
- (void)registerInstreamAdView:(id)arg1;
- (id)initWithInternalNativeAd:(id)arg1;

@end

