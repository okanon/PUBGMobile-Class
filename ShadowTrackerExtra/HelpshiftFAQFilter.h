//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface HelpshiftFAQFilter : NSObject
{
    int _filterOperator;
    NSArray *_tags;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags=_tags;
@property(nonatomic) int filterOperator; // @synthesize filterOperator=_filterOperator;
- (void).cxx_destruct;
- (id)initWithFilterOperator:(int)arg1 andTags:(id)arg2;
- (id)init;

@end

