//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "HsDataSource-Protocol.h"

@class NSArray, NSString;
@protocol HsModelObserver;

@interface HsSectionListModel : NSObject <HsDataSource>
{
    id <HsModelObserver> _observer;
    NSArray *_sectionListItems;
}

@property(retain, nonatomic) NSArray *sectionListItems; // @synthesize sectionListItems=_sectionListItems;
@property(nonatomic) __weak id <HsModelObserver> observer; // @synthesize observer=_observer;
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

