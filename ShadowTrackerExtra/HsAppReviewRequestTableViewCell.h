//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HsAgentTextMessageTableViewCell.h"

@class HsThemeableButton, NSLayoutConstraint;

@interface HsAppReviewRequestTableViewCell : HsAgentTextMessageTableViewCell
{
    NSLayoutConstraint *_buttonContainerHeightConstrain;
    HsThemeableButton *_reviewButton;
}

@property(nonatomic) __weak HsThemeableButton *reviewButton; // @synthesize reviewButton=_reviewButton;
@property(retain, nonatomic) NSLayoutConstraint *buttonContainerHeightConstrain; // @synthesize buttonContainerHeightConstrain=_buttonContainerHeightConstrain;
- (void).cxx_destruct;
- (void)reviewButtonTapped:(id)arg1;
- (void)updateWithDM:(id)arg1;
- (void)setupDefaultTexts;
- (void)setupViewDefaults;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;

@end

