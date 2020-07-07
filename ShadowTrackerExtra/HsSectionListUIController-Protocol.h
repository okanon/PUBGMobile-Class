//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "HsFAQAnalyticsImplementer-Protocol.h"
#import "NSObject-Protocol.h"

@class HSCategoryTagsFilter, HsSectionListModel;

@protocol HsSectionListUIController <NSObject, HsFAQAnalyticsImplementer>
@property(readonly, nonatomic) HsSectionListModel *model;
- (void)loadSectionListItemsWithTagsFilter:(HSCategoryTagsFilter *)arg1 shouldFetchSections:(_Bool)arg2;
@end

