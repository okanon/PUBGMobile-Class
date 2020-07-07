//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "FNFMp4StreamingReader-Protocol.h"

@class NSData, NSFileHandle, NSString;

@interface FNFMp4FileBasedReader : NSObject <FNFMp4StreamingReader>
{
    NSFileHandle *_fileHandle;
    unsigned long long _totalLength;
    NSData *_buffer;
}

- (void).cxx_destruct;
- (_Bool)hasEnoughDataForBytes:(unsigned long long)arg1;
- (void)moveHead:(unsigned long long)arg1;
- (const char *)bytesAtHead:(long long)arg1;
- (void)dealloc;
- (id)initWithFilePath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

