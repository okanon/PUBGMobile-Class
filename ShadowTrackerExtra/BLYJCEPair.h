//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface BLYJCEPair : NSObject
{
    id _key;
    id _value;
}

+ (id)pairFromExtString:(id)arg1;
+ (id)parseExtString:(id)arg1;
+ (id)pairWithValue:(id)arg1 forKey:(id)arg2;
@property(retain, nonatomic) id value; // @synthesize value=_value;
@property(retain, nonatomic) id key; // @synthesize key=_key;
- (void).cxx_destruct;
- (id)description;

@end

