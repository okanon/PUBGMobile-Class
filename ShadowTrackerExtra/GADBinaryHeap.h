//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GADBinaryHeap : NSObject
{
    struct __CFBinaryHeap *_heap;
}

- (id)sortedObjects;
- (id)removedMinimum;
- (id)minimum;
@property(readonly, nonatomic) long long count;
- (_Bool)containsObject:(id)arg1;
- (void)addObjectToHeap:(id)arg1;
- (void)dealloc;
- (id)initWithComparator:(CDUnknownFunctionPointerType)arg1;

@end

