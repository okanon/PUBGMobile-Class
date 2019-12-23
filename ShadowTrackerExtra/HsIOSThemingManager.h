//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, NSObject<OS_dispatch_queue>, NSString, UITraitCollection;

@interface HsIOSThemingManager : NSObject
{
    id <HSSDKDataDAO> _sdkDataDao;
    NSHashTable *_observers;
    NSString *_lightThemeName;
    NSString *_darkThemeName;
    NSString *_globalThemeName;
    NSObject<OS_dispatch_queue> *_themeManagerQueue;
    unsigned long long _themeMode;
    UITraitCollection *_currentTraits;
}

+ (id)sharedInstance;
@property(retain) UITraitCollection *currentTraits; // @synthesize currentTraits=_currentTraits;
@property unsigned long long themeMode; // @synthesize themeMode=_themeMode;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *themeManagerQueue; // @synthesize themeManagerQueue=_themeManagerQueue;
@property(retain, nonatomic) NSString *globalThemeName; // @synthesize globalThemeName=_globalThemeName;
@property(retain, nonatomic) NSString *darkThemeName; // @synthesize darkThemeName=_darkThemeName;
@property(retain, nonatomic) NSString *lightThemeName; // @synthesize lightThemeName=_lightThemeName;
@property(retain, nonatomic) NSHashTable *observers; // @synthesize observers=_observers;
- (void).cxx_destruct;
- (_Bool)shouldChangeAppearanceForNewTraitCollection:(id)arg1 fromOldTraitCollection:(id)arg2;
- (void)saveThemes;
- (void)changeTheme:(id)arg1;
- (_Bool)isValidTheme:(id)arg1;
- (void)forceReloadThemeForCurrentTraits;
- (void)setLightTheme:(id)arg1 darkTheme:(id)arg2;
- (void)setTheme:(id)arg1;
- (void)changeThemeForTraitCollection:(id)arg1;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (id)getDefaultDarkThemeName;
- (id)getDefaultLightThemeName;
- (void)initializeTheme;

@end
