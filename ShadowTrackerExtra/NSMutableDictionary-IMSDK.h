//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSMutableDictionary.h>

@interface NSMutableDictionary (IMSDK)
+ (void)ensureStorePath:(id)arg1;
- (void)writeToStore:(id)arg1;
- (id)initWithStore:(id)arg1;
- (void)setFloat:(float)arg1 forKey:(id)arg2;
- (void)setNSTimeInterval:(double)arg1 forKey:(id)arg2;
- (void)setObjectIfNotExists:(id)arg1 forKey:(id)arg2;
- (void)setNullStringIfNullCharPointer:(const char *)arg1 forKey:(id)arg2;
- (void)setNullStringIfNilObject:(id)arg1 forKey:(id)arg2;
- (void)setNonNilObject:(id)arg1 forKey:(id)arg2;
- (void)adnw_setFloat:(float)arg1 forKey:(id)arg2;
- (void)adnw_setNSTimeInterval:(double)arg1 forKey:(id)arg2;
- (void)adnw_setObjectIfNotExists:(id)arg1 forKey:(id)arg2;
- (void)adnw_setNullStringIfNullCharPointer:(const char *)arg1 forKey:(id)arg2;
- (void)adnw_setNullStringIfNilObject:(id)arg1 forKey:(id)arg2;
- (void)adnw_setNonNilObject:(id)arg1 forKey:(id)arg2;
@end

