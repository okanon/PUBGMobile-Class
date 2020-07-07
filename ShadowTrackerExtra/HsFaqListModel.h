//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsDataSource-Protocol.h"

@class HsSectionListItem, NSArray, NSString;
@protocol HsModelObserver;

@interface HsFaqListModel : NSObject <HsDataSource>
{
    HsSectionListItem *_sectionListItem;
    NSArray *_faqListItems;
    id <HsModelObserver> _observer;
}

@property(nonatomic) __weak id <HsModelObserver> observer; // @synthesize observer=_observer;
@property(retain, nonatomic) NSArray *faqListItems; // @synthesize faqListItems=_faqListItems;
@property(retain, nonatomic) HsSectionListItem *sectionListItem; // @synthesize sectionListItem=_sectionListItem;
- (void).cxx_destruct;
- (unsigned long long)getCount;
- (id)idForDataAtIndex:(unsigned long long)arg1;
- (id)dataAtIndex:(unsigned long long)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

