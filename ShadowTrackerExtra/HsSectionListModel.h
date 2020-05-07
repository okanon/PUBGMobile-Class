//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsDataSource.h"

@class NSArray, NSString;

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

