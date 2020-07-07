//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

#import "GADEventContextSource-Protocol.h"

@class GADEventContext, NSString;

@interface GADCloseButton : UIButton <GADEventContextSource>
{
    GADEventContext *_context;
    double _paddingWidth;
    double _paddingHeight;
    _Bool _useCustomCloseImage;
    _Bool _enabledOnCustomClose;
    long long _preferredPosition;
    struct CGSize _preferredTapSize;
}

@property(nonatomic) struct CGSize preferredTapSize; // @synthesize preferredTapSize=_preferredTapSize;
@property(nonatomic) long long preferredPosition; // @synthesize preferredPosition=_preferredPosition;
@property(nonatomic) _Bool enabledOnCustomClose; // @synthesize enabledOnCustomClose=_enabledOnCustomClose;
@property(nonatomic) _Bool useCustomCloseImage; // @synthesize useCustomCloseImage=_useCustomCloseImage;
- (void).cxx_destruct;
- (void)updateImageAndEnabled;
- (struct CGSize)intrinsicContentSize;
@property(readonly, nonatomic) GADEventContext *context;
- (id)initWithContext:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

