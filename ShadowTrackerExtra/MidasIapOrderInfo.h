//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class MidasFKModel, MidasIAPCache, MidasIapMonitorPersistance, MidasTimer, NSData, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSString, SKMutablePayment, SKProduct;

@interface MidasIapOrderInfo : NSObject <NSCopying>
{
    _Bool _isDepositGameCoin;
    _Bool _showTipsAlertAfterPay;
    _Bool _needGetPayResult;
    _Bool _dcOrder;
    _Bool _dcProvide;
    _Bool _isRestored;
    int _productType;
    NSString *_offerId;
    NSString *_productId;
    NSString *_amt;
    long long _quantity;
    NSString *_billNo;
    NSString *_appUserName;
    NSString *_varItem;
    NSString *_aid;
    NSDictionary *_mpInfo;
    NSString *_drmInfo;
    NSString *_iapDisUUID;
    NSString *_iapDisTimestampMs;
    NSString *_iapDisSign;
    NSString *_iapDisCertID;
    NSString *_iapPromotionalId;
    NSString *_uuid;
    MidasIapMonitorPersistance *_persistance;
    NSString *_payItem;
    NSData *_receipt;
    double _time;
    NSString *_currencyType;
    SKProduct *_productObj;
    SKMutablePayment *_paymentObj;
    NSMutableArray *_paymentTransactions;
    NSMutableArray *_specialTransShouldFinish;
    NSMutableDictionary *_specialTransState;
    NSMutableArray *_providedProductIds;
    NSMutableDictionary *_dictFailedProductIds;
    NSString *_serviceType;
    NSString *_serviceCode;
    MidasFKModel *_fkModel;
    NSString *_iapResultUrl;
    NSString *_appAppleId;
    long long _jumpToAppStoreType;
    unsigned long long _prepayChangeType;
    NSString *_alertTitle;
    NSString *_alertTips;
    NSString *_portalSerialNum;
    NSString *_payResultTitle;
    NSString *_payResultBody;
    NSString *_urlParams;
    NSString *_payFrom;
    NSString *_pre_uuid;
    NSString *_gameCoinUnit;
    NSString *_metadata;
    NSString *_gameCoinName;
    MidasIAPCache *_cache;
    NSString *_couponExt;
    NSData *_dc;
    NSError *_dcError;
    MidasTimer *_timer;
    NSString *_rcTaskLevel;
}

@property(copy, nonatomic) NSString *rcTaskLevel; // @synthesize rcTaskLevel=_rcTaskLevel;
@property(retain, nonatomic) MidasTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) _Bool isRestored; // @synthesize isRestored=_isRestored;
@property(nonatomic) _Bool dcProvide; // @synthesize dcProvide=_dcProvide;
@property(nonatomic) _Bool dcOrder; // @synthesize dcOrder=_dcOrder;
@property(retain, nonatomic) NSError *dcError; // @synthesize dcError=_dcError;
@property(copy, nonatomic) NSData *dc; // @synthesize dc=_dc;
@property(copy, nonatomic) NSString *couponExt; // @synthesize couponExt=_couponExt;
@property(retain, nonatomic) MidasIAPCache *cache; // @synthesize cache=_cache;
@property(copy, nonatomic) NSString *gameCoinName; // @synthesize gameCoinName=_gameCoinName;
@property(copy, nonatomic) NSString *metadata; // @synthesize metadata=_metadata;
@property(copy, nonatomic) NSString *gameCoinUnit; // @synthesize gameCoinUnit=_gameCoinUnit;
@property(copy, nonatomic) NSString *pre_uuid; // @synthesize pre_uuid=_pre_uuid;
@property(copy, nonatomic) NSString *payFrom; // @synthesize payFrom=_payFrom;
@property(copy, nonatomic) NSString *urlParams; // @synthesize urlParams=_urlParams;
@property(copy, nonatomic) NSString *payResultBody; // @synthesize payResultBody=_payResultBody;
@property(copy, nonatomic) NSString *payResultTitle; // @synthesize payResultTitle=_payResultTitle;
@property(nonatomic) _Bool needGetPayResult; // @synthesize needGetPayResult=_needGetPayResult;
@property(copy, nonatomic) NSString *portalSerialNum; // @synthesize portalSerialNum=_portalSerialNum;
@property(copy, nonatomic) NSString *alertTips; // @synthesize alertTips=_alertTips;
@property(copy, nonatomic) NSString *alertTitle; // @synthesize alertTitle=_alertTitle;
@property(nonatomic) _Bool showTipsAlertAfterPay; // @synthesize showTipsAlertAfterPay=_showTipsAlertAfterPay;
@property(nonatomic) unsigned long long prepayChangeType; // @synthesize prepayChangeType=_prepayChangeType;
@property(nonatomic) long long jumpToAppStoreType; // @synthesize jumpToAppStoreType=_jumpToAppStoreType;
@property(copy, nonatomic) NSString *appAppleId; // @synthesize appAppleId=_appAppleId;
@property(copy, nonatomic) NSString *iapResultUrl; // @synthesize iapResultUrl=_iapResultUrl;
@property(retain, nonatomic) MidasFKModel *fkModel; // @synthesize fkModel=_fkModel;
@property(copy, nonatomic) NSString *serviceCode; // @synthesize serviceCode=_serviceCode;
@property(copy, nonatomic) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property(readonly, nonatomic) NSMutableDictionary *dictFailedProductIds; // @synthesize dictFailedProductIds=_dictFailedProductIds;
@property(readonly, nonatomic) NSMutableArray *providedProductIds; // @synthesize providedProductIds=_providedProductIds;
@property(retain, nonatomic) NSMutableDictionary *specialTransState; // @synthesize specialTransState=_specialTransState;
@property(retain, nonatomic) NSMutableArray *specialTransShouldFinish; // @synthesize specialTransShouldFinish=_specialTransShouldFinish;
@property(readonly, nonatomic) NSMutableArray *paymentTransactions; // @synthesize paymentTransactions=_paymentTransactions;
@property(retain, nonatomic) SKMutablePayment *paymentObj; // @synthesize paymentObj=_paymentObj;
@property(retain, nonatomic) SKProduct *productObj; // @synthesize productObj=_productObj;
@property(copy, nonatomic) NSString *currencyType; // @synthesize currencyType=_currencyType;
@property(nonatomic) double time; // @synthesize time=_time;
@property(copy, nonatomic) NSData *receipt; // @synthesize receipt=_receipt;
@property(copy, nonatomic) NSString *payItem; // @synthesize payItem=_payItem;
@property(nonatomic) _Bool isDepositGameCoin; // @synthesize isDepositGameCoin=_isDepositGameCoin;
@property(nonatomic) int productType; // @synthesize productType=_productType;
@property(retain, nonatomic) MidasIapMonitorPersistance *persistance; // @synthesize persistance=_persistance;
@property(copy, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
@property(copy, nonatomic) NSString *iapPromotionalId; // @synthesize iapPromotionalId=_iapPromotionalId;
@property(copy, nonatomic) NSString *iapDisCertID; // @synthesize iapDisCertID=_iapDisCertID;
@property(copy, nonatomic) NSString *iapDisSign; // @synthesize iapDisSign=_iapDisSign;
@property(copy, nonatomic) NSString *iapDisTimestampMs; // @synthesize iapDisTimestampMs=_iapDisTimestampMs;
@property(copy, nonatomic) NSString *iapDisUUID; // @synthesize iapDisUUID=_iapDisUUID;
@property(copy, nonatomic) NSString *drmInfo; // @synthesize drmInfo=_drmInfo;
@property(copy, nonatomic) NSDictionary *mpInfo; // @synthesize mpInfo=_mpInfo;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(copy, nonatomic) NSString *varItem; // @synthesize varItem=_varItem;
@property(copy, nonatomic) NSString *appUserName; // @synthesize appUserName=_appUserName;
@property(copy, nonatomic) NSString *billNo; // @synthesize billNo=_billNo;
@property(nonatomic) long long quantity; // @synthesize quantity=_quantity;
@property(copy, nonatomic) NSString *amt; // @synthesize amt=_amt;
@property(copy, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property(copy, nonatomic) NSString *offerId; // @synthesize offerId=_offerId;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)setForReprovide;
- (void)reset;
- (id)init;

@end

