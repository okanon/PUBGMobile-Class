//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber;

@interface VungleViewInfo : NSObject <NSCopying>
{
    NSNumber *_completedView;
    NSNumber *_playTime;
    NSNumber *_didDownload;
}

@property(copy, nonatomic) NSNumber *didDownload; // @synthesize didDownload=_didDownload;
@property(copy, nonatomic) NSNumber *playTime; // @synthesize playTime=_playTime;
@property(copy, nonatomic) NSNumber *completedView; // @synthesize completedView=_completedView;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithCompletedView:(id)arg1 playTime:(id)arg2 didDownload:(id)arg3;

@end

