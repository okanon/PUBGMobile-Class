//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface ResumeDownloadTaskInfo : NSObject
{
    _Bool _bNeedResume;
    long long _noffset_begin;
    long long _noffset_end;
    long long _nlength;
    long long _nReceivedBytes;
}

@property(nonatomic) _Bool bNeedResume; // @synthesize bNeedResume=_bNeedResume;
@property(nonatomic) long long nReceivedBytes; // @synthesize nReceivedBytes=_nReceivedBytes;
@property(nonatomic) long long nlength; // @synthesize nlength=_nlength;
@property(nonatomic) long long noffset_end; // @synthesize noffset_end=_noffset_end;
@property(nonatomic) long long noffset_begin; // @synthesize noffset_begin=_noffset_begin;
- (id)init;

@end

