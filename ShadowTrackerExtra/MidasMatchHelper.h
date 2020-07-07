//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MidasMatchHelper : NSObject
{
}

+ (void)_safeInsertObject2Front:(id)arg1 object:(id)arg2;
+ (void)_matchDataCompatibleHandler:(id)arg1 matchInfo:(id)arg2;
+ (void)_handleMatchContent:(id)arg1 matchQueue:(id)arg2 matchInfo:(id)arg3 productID:(id)arg4 billNo:(id)arg5 appUserName:(id)arg6;
+ (_Bool)_isMatchDataUsable:(id)arg1;
+ (_Bool)_isSameVersion:(id)arg1;
+ (_Bool)isMatchDataEnable;
+ (void)enableMatchData:(_Bool)arg1;
+ (void)removeMatchData:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (id)syncGetMatchContent:(id)arg1 userInfo:(id)arg2;
+ (void)getMatchContent:(CDUnknownBlockType)arg1;
+ (void)storeMatchContent:(id)arg1 billNo:(id)arg2 appUserName:(id)arg3 completion:(CDUnknownBlockType)arg4;
+ (void)storeMatchInfoWithMaxBillNoNum:(id)arg1 maxProductNum:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

