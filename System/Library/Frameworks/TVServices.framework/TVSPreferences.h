/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary;

@interface TVSPreferences : NSObject {

	NSString* _domain;

}

@property (assign,nonatomic) BOOL tvs_allDisplayModeRefreshRatesAllowed; 
@property (assign,nonatomic) BOOL shouldDisplayApplicationsQuotaExceededMessage; 
@property (nonatomic,readonly) NSDictionary * photoSourceInfo; 
@property (assign,nonatomic) BOOL repeatPhotos; 
@property (assign,nonatomic) BOOL shufflePhotos; 
@property (assign,nonatomic) BOOL shuffleMusic; 
@property (assign,nonatomic) long long timePerSlide; 
@property (nonatomic,retain) NSString * slideshowStyle; 
@property (nonatomic,retain) NSString * slideshowTransitionStyle; 
@property (nonatomic,readonly) NSString * screenSaverPhotoSourceIdentifier; 
@property (nonatomic,readonly) NSString * screenSaverPhotoCollectionIdentifier; 
@property (nonatomic,readonly) NSString * screenSaverName; 
@property (nonatomic,readonly) NSDictionary * screenSaverUserInfo; 
@property (assign,nonatomic) BOOL allowsScreenSaverOverMusic; 
@property (assign,nonatomic) long long activationDelay; 
@property (nonatomic,copy) NSString * screenSaverStyle; 
@property (assign,nonatomic) BOOL idleScreenEnabled; 
@property (nonatomic,copy) NSString * domain;                                                 //@synthesize domain=_domain - In the implementation block
+(id)preferencesWithDomain:(id)arg1 ;
+(id)sharedAppleTVServicesPreferences;
+(id)addObserverForDomain:(id)arg1 withDistributedSynchronizationHandler:(/*^block*/id)arg2 ;
+(void)removeDomainObserver:(id)arg1 ;
+(id)keyPathsForValuesAffectingTvs_allDisplayModeRefreshRatesAllowed;
+(BOOL)automaticallyNotifiesObserversOfTvs_allDisplayModeRefreshRatesAllowed;
+(id)sharedCacheDeletePreferences;
+(id)sharedSlideshowPreferences;
+(BOOL)_isValidStyle:(id)arg1 ;
+(id)sharedScreenSaverPreferences;
+(void)synchronizeAllDomains;
-(id)objectForKey:(id)arg1 ;
-(BOOL)setObject:(id)arg1 forKey:(id)arg2 ;
-(float)floatForKey:(id)arg1 ;
-(BOOL)synchronize;
-(NSString *)domain;
-(BOOL)boolForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 ;
-(BOOL)setBool:(BOOL)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
-(id)initWithDomain:(id)arg1 ;
-(BOOL)setInteger:(int)arg1 forKey:(id)arg2 ;
-(void)setDomain:(NSString *)arg1 ;
-(id)tvs_userDefaults;
-(BOOL)tvs_allDisplayModeRefreshRatesAllowed;
-(void)setTvs_allDisplayModeRefreshRatesAllowed:(BOOL)arg1 ;
-(void)setShouldDisplayApplicationsQuotaExceededMessage:(BOOL)arg1 ;
-(BOOL)shouldDisplayApplicationsQuotaExceededMessage;
-(NSDictionary *)photoSourceInfo;
-(BOOL)repeatPhotos;
-(BOOL)shufflePhotos;
-(BOOL)shuffleMusic;
-(NSString *)slideshowStyle;
-(NSString *)slideshowTransitionStyle;
-(void)setTimePerSlide:(long long)arg1 ;
-(long long)timePerSlide;
-(void)setRepeatPhotos:(BOOL)arg1 ;
-(void)setShufflePhotos:(BOOL)arg1 ;
-(void)setShuffleMusic:(BOOL)arg1 ;
-(void)setSlideshowStyle:(NSString *)arg1 ;
-(void)setSlideshowTransitionStyle:(NSString *)arg1 ;
-(id)slideshowMenuSettings;
-(id)slideshowThemeSettings;
-(id)slideshowThemeTransitionSettings;
-(void)setScreenSaverStyle:(NSString *)arg1 ;
-(void)setScreenSaverWithPhotoSource:(id)arg1 collection:(id)arg2 name:(id)arg3 style:(id)arg4 userInfo:(id)arg5 ;
-(void)setScreenSaverWithPhotoSource:(id)arg1 collection:(id)arg2 ;
-(void)setScreenSaverDisplayStatusForBundleIdentifier:(id)arg1 isEnabled:(BOOL)arg2 appInfo:(id)arg3 ;
-(id)getScreenSaverDisplayStatusForBundleIdentifier:(id)arg1 ;
-(NSString *)screenSaverPhotoSourceIdentifier;
-(NSString *)screenSaverPhotoCollectionIdentifier;
-(NSString *)screenSaverName;
-(NSDictionary *)screenSaverUserInfo;
-(BOOL)allowsScreenSaverOverMusic;
-(void)setAllowsScreenSaverOverMusic:(BOOL)arg1 ;
-(long long)activationDelay;
-(void)setActivationDelay:(long long)arg1 ;
-(NSString *)screenSaverStyle;
-(BOOL)idleScreenEnabled;
-(void)setIdleScreenEnabled:(BOOL)arg1 ;
-(double)doubleForKey:(id)arg1 defaultValue:(double)arg2 ;
-(BOOL)setDouble:(double)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 defaultValue:(int)arg2 ;
-(BOOL)boolForKey:(id)arg1 defaultValue:(BOOL)arg2 ;
-(float)floatForKey:(id)arg1 defaultValue:(float)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(BOOL)setFloat:(float)arg1 forKey:(id)arg2 ;
@end

