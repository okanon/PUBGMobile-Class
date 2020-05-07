//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "QLPreviewItem.h"

@class NSString, NSURL;

@interface HSPreviewItem : NSObject <QLPreviewItem>
{
    NSString *_name;
    NSURL *_URL;
}

@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
@property(readonly) NSString *previewItemTitle;
@property(readonly) NSURL *previewItemURL;
- (id)initWithFileURL:(id)arg1 andTitle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

