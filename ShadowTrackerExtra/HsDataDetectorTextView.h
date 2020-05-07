//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

#import "UITextViewDelegate.h"

@class NSString;

@interface HsDataDetectorTextView : UITextView <UITextViewDelegate>
{
    CDUnknownBlockType _didClickURL;
}

@property(copy, nonatomic) CDUnknownBlockType didClickURL; // @synthesize didClickURL=_didClickURL;
- (void).cxx_destruct;
- (_Bool)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (void)setDefaultFont;
- (void)setText:(id)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

