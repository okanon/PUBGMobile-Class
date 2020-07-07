//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID;

@interface AFImageDownloaderResponseHandler : NSObject
{
    NSUUID *_uuid;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failureBlock;
}

@property(copy, nonatomic) CDUnknownBlockType failureBlock; // @synthesize failureBlock=_failureBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)description;
- (id)initWithUUID:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;

@end

