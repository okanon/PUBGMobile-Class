//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "MidasIAPBaseReq.h"

@class NSMutableArray;

@interface MidasIAPIntroPriceInfoReq : MidasIAPBaseReq
{
    _Bool _fromApple;
    NSMutableArray *_introPriceProuctIds;
}

@property(nonatomic) _Bool fromApple; // @synthesize fromApple=_fromApple;
@property(retain, nonatomic) NSMutableArray *introPriceProuctIds; // @synthesize introPriceProuctIds=_introPriceProuctIds;
- (void).cxx_destruct;
- (_Bool)validateParams;
- (id)init;

@end

