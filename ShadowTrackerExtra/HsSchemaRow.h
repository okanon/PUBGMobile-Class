//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HsSchemaRow : NSObject
{
    int _columnType;
    NSString *_columnName;
    NSString *_constraint;
    NSString *_defaultValue;
}

@property(retain, nonatomic) NSString *defaultValue; // @synthesize defaultValue=_defaultValue;
@property(retain, nonatomic) NSString *constraint; // @synthesize constraint=_constraint;
@property(nonatomic) int columnType; // @synthesize columnType=_columnType;
@property(retain, nonatomic) NSString *columnName; // @synthesize columnName=_columnName;
- (void).cxx_destruct;
- (id)initWithColumnName:(id)arg1 ofType:(int)arg2 withConstraint:(id)arg3 defaultValue:(id)arg4;
- (id)initWithColumnName:(id)arg1 ofType:(int)arg2 withConstraint:(id)arg3;

@end

