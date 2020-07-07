//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

#import "TWTRAttributedLabel-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSArray, NSAttributedString, NSDictionary, NSString, TWTRTweetEntityRange, UIColor;
@protocol TWTRAttributedLabelDelegate;

@interface TWTRAttributedLabel : UILabel <TWTRAttributedLabel, UIGestureRecognizerDelegate>
{
    _Bool _needsFramesetter;
    struct __CTFramesetter *_framesetter;
    struct __CTFramesetter *_highlightFramesetter;
    NSAttributedString *_attributedText;
    id <TWTRAttributedLabelDelegate> _delegate;
    NSArray *_entities;
    NSDictionary *_linkAttributes;
    NSDictionary *_activeLinkAttributes;
    NSDictionary *_inactiveLinkAttributes;
    double _shadowRadius;
    double _highlightedShadowRadius;
    UIColor *_highlightedShadowColor;
    double _kern;
    double _firstLineIndent;
    double _lineSpacing;
    double _minimumLineHeight;
    double _maximumLineHeight;
    double _lineHeightMultiple;
    long long _verticalAlignment;
    NSString *_truncationTokenString;
    NSDictionary *_truncationTokenStringAttributes;
    NSAttributedString *_inactiveAttributedText;
    NSAttributedString *_renderedAttributedText;
    TWTRTweetEntityRange *_activeLink;
    NSArray *_accessibilityElements;
    struct CGSize _highlightedShadowOffset;
    struct UIEdgeInsets _textInsets;
}

+ (struct CGSize)sizeThatFitsAttributedString:(id)arg1 withConstraints:(struct CGSize)arg2 limitedToNumberOfLines:(unsigned long long)arg3;
@property(retain, nonatomic) NSArray *accessibilityElements; // @synthesize accessibilityElements=_accessibilityElements;
@property(retain, nonatomic) TWTRTweetEntityRange *activeLink; // @synthesize activeLink=_activeLink;
@property(copy, nonatomic) NSAttributedString *renderedAttributedText; // @synthesize renderedAttributedText=_renderedAttributedText;
@property(copy, nonatomic) NSAttributedString *inactiveAttributedText; // @synthesize inactiveAttributedText=_inactiveAttributedText;
@property(retain, nonatomic) NSDictionary *truncationTokenStringAttributes; // @synthesize truncationTokenStringAttributes=_truncationTokenStringAttributes;
@property(retain, nonatomic) NSString *truncationTokenString; // @synthesize truncationTokenString=_truncationTokenString;
@property(nonatomic) long long verticalAlignment; // @synthesize verticalAlignment=_verticalAlignment;
@property(nonatomic) struct UIEdgeInsets textInsets; // @synthesize textInsets=_textInsets;
@property(nonatomic) double lineHeightMultiple; // @synthesize lineHeightMultiple=_lineHeightMultiple;
@property(nonatomic) double maximumLineHeight; // @synthesize maximumLineHeight=_maximumLineHeight;
@property(nonatomic) double minimumLineHeight; // @synthesize minimumLineHeight=_minimumLineHeight;
@property(nonatomic) double lineSpacing; // @synthesize lineSpacing=_lineSpacing;
@property(nonatomic) double firstLineIndent; // @synthesize firstLineIndent=_firstLineIndent;
@property(nonatomic) double kern; // @synthesize kern=_kern;
@property(retain, nonatomic) UIColor *highlightedShadowColor; // @synthesize highlightedShadowColor=_highlightedShadowColor;
@property(nonatomic) struct CGSize highlightedShadowOffset; // @synthesize highlightedShadowOffset=_highlightedShadowOffset;
@property(nonatomic) double highlightedShadowRadius; // @synthesize highlightedShadowRadius=_highlightedShadowRadius;
@property(nonatomic) double shadowRadius; // @synthesize shadowRadius=_shadowRadius;
@property(retain, nonatomic) NSDictionary *inactiveLinkAttributes; // @synthesize inactiveLinkAttributes=_inactiveLinkAttributes;
@property(retain, nonatomic) NSDictionary *activeLinkAttributes; // @synthesize activeLinkAttributes=_activeLinkAttributes;
@property(retain, nonatomic) NSDictionary *linkAttributes; // @synthesize linkAttributes=_linkAttributes;
@property(retain, nonatomic) NSArray *entities; // @synthesize entities=_entities;
@property(nonatomic) id <TWTRAttributedLabelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSAttributedString *attributedText; // @synthesize attributedText=_attributedText;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)copy:(id)arg1;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (_Bool)isAccessibilityElement;
- (void)drawTextInRect:(struct CGRect)arg1;
- (struct CGRect)textRectForBounds:(struct CGRect)arg1 limitedToNumberOfLines:(long long)arg2;
- (void)setTextColor:(id)arg1;
- (id)textColor;
- (void)setHighlighted:(_Bool)arg1;
- (void)setText:(id)arg1 afterInheritingLabelAttributesAndConfiguringWithBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) id text; // @dynamic text;
- (void)drawStrike:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawBackground:(struct __CTFrame *)arg1 inRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (void)drawFramesetter:(struct __CTFramesetter *)arg1 attributedString:(id)arg2 textRange:(CDStruct_912cb5d2)arg3 inRect:(struct CGRect)arg4 context:(struct CGContext *)arg5;
- (struct CGRect)boundingRectForCharacterRange:(struct _NSRange)arg1;
- (long long)characterIndexAtPoint:(struct CGPoint)arg1;
- (id)entityAtPoint:(struct CGPoint)arg1;
- (id)entityAtCharacterIndex:(long long)arg1;
- (void)addLinksForTweetEntityRanges:(id)arg1 attributes:(id)arg2;
- (void)addLinksForEntityRanges:(id)arg1;
@property(nonatomic) double leading;
- (void)setHighlightFramesetter:(struct __CTFramesetter *)arg1;
- (struct __CTFramesetter *)highlightFramesetter;
- (void)setFramesetter:(struct __CTFramesetter *)arg1;
- (struct __CTFramesetter *)framesetter;
- (void)setNeedsFramesetter;
- (void)dealloc;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

