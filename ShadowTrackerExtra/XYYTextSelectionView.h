//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray, NSTimer, UIColor, XYYSelectionGrabber;

@interface XYYTextSelectionView : UIView
{
    _Bool _caretBlinks;
    _Bool _caretVisible;
    _Bool _verticalForm;
    UIView *_hostView;
    UIColor *_color;
    NSArray *_selectionRects;
    UIView *_caretView;
    XYYSelectionGrabber *_startGrabber;
    XYYSelectionGrabber *_endGrabber;
    NSTimer *_caretTimer;
    NSMutableArray *_markViews;
    struct CGRect _caretRect;
}

@property(retain, nonatomic) NSMutableArray *markViews; // @synthesize markViews=_markViews;
@property(retain, nonatomic) NSTimer *caretTimer; // @synthesize caretTimer=_caretTimer;
@property(retain, nonatomic) XYYSelectionGrabber *endGrabber; // @synthesize endGrabber=_endGrabber;
@property(retain, nonatomic) XYYSelectionGrabber *startGrabber; // @synthesize startGrabber=_startGrabber;
@property(retain, nonatomic) UIView *caretView; // @synthesize caretView=_caretView;
@property(copy, nonatomic) NSArray *selectionRects; // @synthesize selectionRects=_selectionRects;
@property(nonatomic) struct CGRect caretRect; // @synthesize caretRect=_caretRect;
@property(nonatomic, getter=isVerticalForm) _Bool verticalForm; // @synthesize verticalForm=_verticalForm;
@property(nonatomic, getter=isCaretVisible) _Bool caretVisible; // @synthesize caretVisible=_caretVisible;
@property(nonatomic, getter=isCaretBlinks) _Bool caretBlinks; // @synthesize caretBlinks=_caretBlinks;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(nonatomic) __weak UIView *hostView; // @synthesize hostView=_hostView;
- (void).cxx_destruct;
- (_Bool)isSelectionRectsContainsPoint:(struct CGPoint)arg1;
- (_Bool)isCaretContainsPoint:(struct CGPoint)arg1;
- (_Bool)isEndGrabberContainsPoint:(struct CGPoint)arg1;
- (_Bool)isStartGrabberContainsPoint:(struct CGPoint)arg1;
- (_Bool)isGrabberContainsPoint:(struct CGPoint)arg1;
- (struct CGRect)_standardCaretRect:(struct CGRect)arg1;
- (void)_doBlink;
- (void)_startBlinks;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

