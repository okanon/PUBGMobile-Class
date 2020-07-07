//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSData.h>

@interface NSData (MD5)
+ (long long)sd_imageFormatFromUTType:(struct __CFString *)arg1;
+ (const struct __CFString *)sd_UTTypeFromSDImageFormat:(long long)arg1;
+ (long long)sd_imageFormatForImageData:(id)arg1;
+ (id)gul_dataByGzippingData:(id)arg1 error:(id *)arg2;
+ (id)gul_dataByInflatingGzippedData:(id)arg1 error:(id *)arg2;
+ (id)fbad_measureIfNeeded:(_Bool)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)fbad_dataWithContentsOfURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)getMD5Data;
- (id)AESDecryptWithKey:(id)arg1 dataLength:(long long)arg2;
- (id)AESEncryptWithKey:(id)arg1;
- (id)gzipDecompress;
- (id)gzipCompress;
- (int)checksumOfCRC32;
- (id)gzipTailer;
- (id)gzipHeader;
- (id)md5;
- (id)dataByDECryptDESWithKey:(id)arg1 error:(id *)arg2;
- (id)dataByENCryptDESWithKey:(id)arg1 error:(id *)arg2;
- (id)dataByGZipDecompressingDataWithWindowSize:(int)arg1 error:(id *)arg2;
- (id)dataByGZipDecompressingDataWithError:(id *)arg1;
- (id)dataByGZipCompressingAtLevel:(int)arg1 windowSize:(int)arg2 memoryLevel:(int)arg3 strategy:(int)arg4 error:(id *)arg5;
- (id)dataByGZipCompressingWithError:(id *)arg1;
- (void)setInAttributes:(id)arg1 withName:(id)arg2;
- (id)adjEncodeBase64;
- (long long)apm_64LeastSignificantBits;
- (long long)apm_64LSBMD5;
- (id)apm_MD5Data;
- (id)awsgzip_gunzippedData;
- (id)awsgzip_gzippedData;
- (id)awsgzip_gzippedDataWithCompressionLevel:(float)arg1;
@end

