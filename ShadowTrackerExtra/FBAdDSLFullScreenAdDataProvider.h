//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FBAdDSLFullScreenAdViewControllerDataSource.h"

@class FBAdDSLViewModel, NSString;

@interface FBAdDSLFullScreenAdDataProvider : NSObject <FBAdDSLFullScreenAdViewControllerDataSource>
{
    NSString *_authKey;
    NSString *_sdkVersion;
    NSString *_interfaceName;
    FBAdDSLViewModel *_adModel;
}

@property(retain, nonatomic) FBAdDSLViewModel *adModel; // @synthesize adModel=_adModel;
@property(readonly, copy, nonatomic) NSString *interfaceName; // @synthesize interfaceName=_interfaceName;
@property(readonly, copy, nonatomic) NSString *sdkVersion; // @synthesize sdkVersion=_sdkVersion;
@property(readonly, copy, nonatomic) NSString *authKey; // @synthesize authKey=_authKey;
- (void).cxx_destruct;
- (id)getDictionaryFromExtraData:(id)arg1;
- (id)setAssetsMessage;
- (id)remoteHTMLURLRequest;
- (id)localHTMLFileURL;
- (id)commonAssetsDirectoriesURL;
- (unsigned long long)HTMLFileloadSource;
- (id)messageToWebViewWithEvent:(unsigned long long)arg1;
- (id)initWithDataModel:(id)arg1 sdkVersion:(id)arg2;

@end
