//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface MidasUIConfiguration : NSObject
{
    _Bool _shouldShowHudText;
    _Bool _shouldShowAlertWhenOvertime;
    long long _overtimeAlertShowtime;
    NSString *_overtimeAlertTitle;
    NSString *_overtimeAlertBody;
}

@property(readonly, copy, nonatomic) NSString *overtimeAlertBody; // @synthesize overtimeAlertBody=_overtimeAlertBody;
@property(readonly, copy, nonatomic) NSString *overtimeAlertTitle; // @synthesize overtimeAlertTitle=_overtimeAlertTitle;
@property(readonly, nonatomic) long long overtimeAlertShowtime; // @synthesize overtimeAlertShowtime=_overtimeAlertShowtime;
@property(readonly, nonatomic) _Bool shouldShowAlertWhenOvertime; // @synthesize shouldShowAlertWhenOvertime=_shouldShowAlertWhenOvertime;
@property(readonly, nonatomic) _Bool shouldShowHudText; // @synthesize shouldShowHudText=_shouldShowHudText;
- (void).cxx_destruct;
- (void)update:(id)arg1;
- (id)initWithOfferID:(id)arg1;

@end

