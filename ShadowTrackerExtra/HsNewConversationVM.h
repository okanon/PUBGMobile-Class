//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "HsNewConversationListener.h"

@class HsAttachmentPreviewViewState, HsButtonViewState, HsConversationInboxDM, HsDescriptionViewState, HsDomain, HsEmailViewState, HsNameViewState, HsProfileFormViewState, HsProgressBarViewState, HsSDKConfigurationDM, HsViewStateFactory, NSString;

@interface HsNewConversationVM : NSObject <HsNewConversationListener>
{
    _Bool _sendAnyway;
    HsNameViewState *_nameFieldViewState;
    HsEmailViewState *_emailFieldViewState;
    HsDescriptionViewState *_descriptionFieldViewState;
    HsProgressBarViewState *_progressBarViewState;
    HsProfileFormViewState *_profileFormViewState;
    HsAttachmentPreviewViewState *_attachmentPreviewViewState;
    HsButtonViewState *_attachmentButton;
    HsButtonViewState *_startConversationButton;
    NSString *_networkErrorString;
    id <HsPlatform> _platform;
    HsDomain *_domain;
    HsSDKConfigurationDM *_sdkConfigDM;
    HsConversationInboxDM *_conversationInboxDM;
    id <HsNewConversationRenderer> _rendererWeakRef;
    HsViewStateFactory *_viewStateFactory;
}

@property(retain) HsViewStateFactory *viewStateFactory; // @synthesize viewStateFactory=_viewStateFactory;
@property _Bool sendAnyway; // @synthesize sendAnyway=_sendAnyway;
@property __weak id <HsNewConversationRenderer> rendererWeakRef; // @synthesize rendererWeakRef=_rendererWeakRef;
@property(retain) HsConversationInboxDM *conversationInboxDM; // @synthesize conversationInboxDM=_conversationInboxDM;
@property(retain) HsSDKConfigurationDM *sdkConfigDM; // @synthesize sdkConfigDM=_sdkConfigDM;
@property(retain) HsDomain *domain; // @synthesize domain=_domain;
@property(retain) id <HsPlatform> platform; // @synthesize platform=_platform;
@property(retain, nonatomic) NSString *networkErrorString; // @synthesize networkErrorString=_networkErrorString;
@property(retain, nonatomic) HsButtonViewState *startConversationButton; // @synthesize startConversationButton=_startConversationButton;
@property(retain, nonatomic) HsButtonViewState *attachmentButton; // @synthesize attachmentButton=_attachmentButton;
@property(retain, nonatomic) HsAttachmentPreviewViewState *attachmentPreviewViewState; // @synthesize attachmentPreviewViewState=_attachmentPreviewViewState;
@property(retain, nonatomic) HsProfileFormViewState *profileFormViewState; // @synthesize profileFormViewState=_profileFormViewState;
@property(retain, nonatomic) HsProgressBarViewState *progressBarViewState; // @synthesize progressBarViewState=_progressBarViewState;
@property(retain, nonatomic) HsDescriptionViewState *descriptionFieldViewState; // @synthesize descriptionFieldViewState=_descriptionFieldViewState;
@property(retain, nonatomic) HsEmailViewState *emailFieldViewState; // @synthesize emailFieldViewState=_emailFieldViewState;
@property(retain, nonatomic) HsNameViewState *nameFieldViewState; // @synthesize nameFieldViewState=_nameFieldViewState;
- (void).cxx_destruct;
- (void)newConversationViewControllerDidDisappear;
- (void)newConversationViewControllerDidAppear;
- (void)conversationCreationFailedWithError:(id)arg1;
- (void)conversationCreationSuccessfulWithLocalId:(id)arg1;
- (void)setConversationViewState:(unsigned long long)arg1;
- (id)userAttachmentFileNameWithExtension:(id)arg1;
- (id)currentUserLocalId;
- (_Bool)isFormValid;
- (void)startNewConversation;
- (_Bool)shouldShowSearchOnNewConversation;
- (void)showSearchOrStartNewConversation:(_Bool)arg1;
- (void)setSearchQuery:(id)arg1;
- (void)setAttachmentName:(id)arg1;
- (void)setEmail:(id)arg1;
- (void)setName:(id)arg1;
- (void)setDescription:(id)arg1;
- (id)initWithPlatform:(id)arg1 domain:(id)arg2 conversationInboxDM:(id)arg3 renderer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
