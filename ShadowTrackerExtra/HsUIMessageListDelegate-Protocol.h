//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray;

@protocol HsUIMessageListDelegate <NSObject>
- (void)uiMessageListRemoveMessageFromIndex:(long long)arg1 andCount:(long long)arg2;
- (void)uiMessageListUpdateMessageFromIndex:(long long)arg1 andCount:(long long)arg2;
- (void)uiMessageListAddMessageFromIndex:(long long)arg1 andCount:(long long)arg2;
- (void)onUIMessageListUpdated;
- (void)uiMessageListPrependMessages:(long long)arg1;
- (void)uiMessageListRefreshAll;
- (void)uiMessageInitialiseList:(NSArray *)arg1;
@end

