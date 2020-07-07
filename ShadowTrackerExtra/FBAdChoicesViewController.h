//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBAdChoicesContentView, FBAdReportingConfig;

@interface FBAdChoicesViewController : UIViewController
{
    CDUnknownBlockType _onOptionSelected;
    CDUnknownBlockType _onDismiss;
    FBAdChoicesContentView *_bodyView;
    FBAdReportingConfig *_adReportingConfig;
}

@property(retain, nonatomic) FBAdReportingConfig *adReportingConfig; // @synthesize adReportingConfig=_adReportingConfig;
@property(retain, nonatomic) FBAdChoicesContentView *bodyView; // @synthesize bodyView=_bodyView;
@property(copy, nonatomic) CDUnknownBlockType onDismiss; // @synthesize onDismiss=_onDismiss;
@property(copy, nonatomic) CDUnknownBlockType onOptionSelected; // @synthesize onOptionSelected=_onOptionSelected;
- (void).cxx_destruct;
- (void)handleDismissTap:(id)arg1;
- (void)setupTapRecognizer;
- (void)setupBodyViewWithLayoutType:(long long)arg1;
- (void)viewDidLoad;
- (id)init;
- (id)initWithLayoutType:(long long)arg1;

@end

