//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsSingleFaqDataSource-Protocol.h"

@class HsFaq, NSString;
@protocol HsModelObserver;

@interface HsSingleFaqModel : NSObject <HsSingleFaqDataSource>
{
    HsFaq *_faq;
    id <HsModelObserver> _observer;
}

@property(nonatomic) __weak id <HsModelObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) HsFaq *faq; // @synthesize faq=_faq;
- (void).cxx_destruct;
- (id)faqHelpfulStatus;
- (id)isFaqRtl;
- (id)getSearchTerms;
- (id)idForDataAtIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (unsigned long long)getCount;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

