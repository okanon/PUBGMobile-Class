//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface GADOMIDVASTProperties : NSObject
{
    _Bool _skippable;
    _Bool _autoPlay;
    double _skipOffset;
    unsigned long long _position;
}

@property(readonly, nonatomic) unsigned long long position; // @synthesize position=_position;
@property(readonly, nonatomic, getter=isAutoPlay) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(readonly, nonatomic) double skipOffset; // @synthesize skipOffset=_skipOffset;
@property(readonly, nonatomic, getter=isSkippable) _Bool skippable; // @synthesize skippable=_skippable;
- (id)positionString;
- (id)toJSON;
- (id)initWithSkippable:(_Bool)arg1 skipOffset:(double)arg2 autoPlay:(_Bool)arg3 position:(unsigned long long)arg4;
- (id)initWithAutoPlay:(_Bool)arg1 position:(unsigned long long)arg2;
- (id)initWithSkipOffset:(double)arg1 autoPlay:(_Bool)arg2 position:(unsigned long long)arg3;

@end

