//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol GULNetworkLoggerDelegate <NSObject>
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3 context:(id)arg4;
- (void)GULNetwork_logWithLevel:(long long)arg1 messageCode:(long long)arg2 message:(NSString *)arg3 contexts:(NSArray *)arg4;
@end

