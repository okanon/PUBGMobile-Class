//
//     Generated by class-dump 3.5 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSError;

@protocol FNFDataLoaderDelegate
- (void)reportWarning:(NSError *)arg1;
- (void)dataWasReceivedForTrack:(long long)arg1 andIsComplete:(_Bool)arg2;
- (void)loadingDidFailWithError:(NSError *)arg1;
@end

