//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class JSContext, JSValue;

@interface XCDYouTubePlayerScript : NSObject
{
    JSContext *_context;
    JSValue *_signatureFunction;
}

@property(retain, nonatomic) JSValue *signatureFunction; // @synthesize signatureFunction=_signatureFunction;
@property(retain, nonatomic) JSContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)regularExpressionFromPatterns:(id)arg1;
- (id)unscrambleSignature:(id)arg1;
- (id)initWithString:(id)arg1 customPatterns:(id)arg2;

@end

