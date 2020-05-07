//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "FBAdTouchGestureRecognizerDelegate.h"

@class NSDictionary, NSString;

@interface FBAdTouchRecordingView : UIView <FBAdTouchGestureRecognizerDelegate>
{
    double _lastTouchStartTimestamp;
    double _lastTouchCurrentTimestamp;
    double _lastTouchRadius;
    double _lastTouchPressure;
    NSDictionary *_lastTouchData;
    double _firstTimeVisible;
    id <FBAdTouchRecordingViewDelegate> _touchRecordingViewDelegate;
    struct CGPoint _lastTouchStartLocation;
    struct CGPoint _lastTouchCurrentLocation;
}

@property(nonatomic) __weak id <FBAdTouchRecordingViewDelegate> touchRecordingViewDelegate; // @synthesize touchRecordingViewDelegate=_touchRecordingViewDelegate;
@property(nonatomic) double firstTimeVisible; // @synthesize firstTimeVisible=_firstTimeVisible;
@property(copy, nonatomic) NSDictionary *lastTouchData; // @synthesize lastTouchData=_lastTouchData;
@property(nonatomic) double lastTouchPressure; // @synthesize lastTouchPressure=_lastTouchPressure;
@property(nonatomic) double lastTouchRadius; // @synthesize lastTouchRadius=_lastTouchRadius;
@property(nonatomic) double lastTouchCurrentTimestamp; // @synthesize lastTouchCurrentTimestamp=_lastTouchCurrentTimestamp;
@property(nonatomic) double lastTouchStartTimestamp; // @synthesize lastTouchStartTimestamp=_lastTouchStartTimestamp;
@property(nonatomic) struct CGPoint lastTouchCurrentLocation; // @synthesize lastTouchCurrentLocation=_lastTouchCurrentLocation;
@property(nonatomic) struct CGPoint lastTouchStartLocation; // @synthesize lastTouchStartLocation=_lastTouchStartLocation;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)updateTouchDataWithTouches:(id)arg1 andEvent:(id)arg2 logTouch:(_Bool)arg3;
- (void)gestureRecognizer:(id)arg1 cancelledWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gestureRecognizer:(id)arg1 endedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gestureRecognizer:(id)arg1 movedWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)gestureRecognizer:(id)arg1 beganWithTouches:(id)arg2 andEvent:(id)arg3;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

