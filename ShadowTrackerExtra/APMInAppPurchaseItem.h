//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface APMInAppPurchaseItem : NSObject
{
    _Bool _freeTrial;
    _Bool _introductoryOffer;
    NSString *_subscriptionExpirationDateIA5String;
    NSString *_productID;
    NSString *_originalTransactionID;
    NSString *_transactionID;
    NSNumber *_purchaseType;
}

@property(copy, nonatomic) NSNumber *purchaseType; // @synthesize purchaseType=_purchaseType;
@property(copy, nonatomic) NSString *transactionID; // @synthesize transactionID=_transactionID;
@property(copy, nonatomic) NSString *originalTransactionID; // @synthesize originalTransactionID=_originalTransactionID;
@property(copy, nonatomic) NSString *productID; // @synthesize productID=_productID;
@property(copy, nonatomic) NSString *subscriptionExpirationDateIA5String; // @synthesize subscriptionExpirationDateIA5String=_subscriptionExpirationDateIA5String;
@property(nonatomic, getter=isIntroductoryOffer) _Bool introductoryOffer; // @synthesize introductoryOffer=_introductoryOffer;
@property(nonatomic, getter=isFreeTrial) _Bool freeTrial; // @synthesize freeTrial=_freeTrial;
- (void).cxx_destruct;

@end

