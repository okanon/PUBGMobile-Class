//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MidasBigFileBase64Utility : NSObject
{
}

+ (_Bool)decodeBase64AtURL:(id)arg1 toURL:(id)arg2;
+ (_Bool)encodeBase64AtURL:(id)arg1 toURL:(id)arg2;
+ (id)decodeBase64AtURL:(id)arg1;
+ (id)encodeBase64AtURL:(id)arg1;
+ (id)decodeBase64WithString:(id)arg1;
+ (id)encodeBase64WithData:(id)arg1;
+ (char *)bufferWithBase64Data:(id)arg1 length:(unsigned long long *)arg2;
+ (char *)base64BufferwithData:(id)arg1 length:(unsigned long long *)arg2;

@end

