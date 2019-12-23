//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HelpshiftAPIConfig, HsDynamicForm, NSString;

@interface HsFlowInvocation : NSObject
{
    long long _invocationType;
    NSString *_publishId;
    HelpshiftAPIConfig *_config;
    HsDynamicForm *_nextDynamicForm;
    id _target;
    SEL _selector;
    id _object;
}

+ (id)invocationToPerformCustomSelector:(SEL)arg1 withObject:(id)arg2 onTarget:(id)arg3;
+ (id)invocationToShowNextDynamicForm:(id)arg1;
+ (id)invocationWithType:(long long)arg1 andPublishId:(id)arg2 withConfig:(id)arg3;
@property(retain, nonatomic) id object; // @synthesize object=_object;
@property(nonatomic) SEL selector; // @synthesize selector=_selector;
@property(retain, nonatomic) id target; // @synthesize target=_target;
@property(retain, nonatomic) HsDynamicForm *nextDynamicForm; // @synthesize nextDynamicForm=_nextDynamicForm;
@property(retain, nonatomic) HelpshiftAPIConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *publishId; // @synthesize publishId=_publishId;
@property(nonatomic) long long invocationType; // @synthesize invocationType=_invocationType;
- (void).cxx_destruct;

@end
