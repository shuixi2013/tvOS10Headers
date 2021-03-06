/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSITunesStore.h>
#import <TVContentPartnerKitUI/TVApplicationControllerDelegate.h>
#import <TVContentPartnerKitUI/TVSRemoteNotifierDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>
#import <TVContentPartnerKitUI/TVJSITunesStore.h>
@class NSString, NSDictionary;


@protocol TVJSITunesStore <JSExport>
@property (nonatomic,readonly) NSString * PCID; 
@property (nonatomic,readonly) NSDictionary * activeAccount; 
@property (nonatomic,readonly) BOOL preferSDHOverRegularSubtitles; 
@property (nonatomic,readonly) BOOL preferVideoDescriptions; 
@required
-(NSDictionary *)activeAccount;
-(BOOL)preferVideoDescriptions;
-(BOOL)preferSDHOverRegularSubtitles;
-(void)buyWithActionParams:(id)arg1 :(id)arg2;
-(void)loadRentals:(id)arg1;
-(void)refreshRentals:(id)arg1;
-(void)loadCountOfFavoriteShows:(id)arg1;
-(void)loadCountOfFavoriteMovies:(id)arg1;
-(void)addItemToFavoritesWithAdamID:(id)arg1;
-(void)removeItemFromFavoritesWithAdamID:(id)arg1;
-(void)determineStatusOfMovieWithAdamID:(id)arg1 :(id)arg2;
-(void)determineStatusOfSeasonWithAdamID:(id)arg1 :(id)arg2;
-(void)determineStatusOfItemWithAdamID:(id)arg1 :(id)arg2;
-(void)determineProgressForAdamIDs:(id)arg1 :(id)arg2;
-(void)markAsWatched:(id)arg1;
-(void)markAsUnwatched:(id)arg1;
-(void)loadExtrasURL:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(long long)arg5 :(id)arg6 :(BOOL)arg7;
-(void)loadStoreURL:(id)arg1;
-(void)loadBookmarkDataIfNeeded;
-(void)loadImageURLs:(id)arg1 :(id)arg2;
-(void)showMigrationForShowsIfNecessary;
-(void)showMigrationForMoviesIfNecessary;
-(NSString *)PCID;

@end


@class NSString, NSDictionary, TVSStoreFavoritesController, TVSStorePlaybackProgressFactory, TVApplicationController, TVNavigationController, TVRestrictionsPasscodeEntryViewController, TVImageView, UIActivityIndicatorView, UIVisualEffectView, _TVNavigationZoomAnimator, _TVProductTemplateZoomAnimator, TVSRemoteNotifier, NSDate;

@interface TVJSITunesStore : IKJSITunesStore <TVApplicationControllerDelegate, TVSRemoteNotifierDelegate, UIViewControllerTransitioningDelegate, TVJSITunesStore> {

	id _acquisitionToken;
	BOOL _didLoadStoreJS;
	id _rentalsDidChangeObserver;
	TVSStoreFavoritesController* _favoritesController;
	id _favoritesDidChangeObserver;
	TVSStorePlaybackProgressFactory* _progressFactory;
	id _progressDidChangeObserver;
	id _accountStoreChangeObserver;
	TVApplicationController* _extrasAppController;
	TVNavigationController* _extrasNavigationController;
	TVRestrictionsPasscodeEntryViewController* _extrasPasscodeViewController;
	TVImageView* _loadingImageView;
	UIActivityIndicatorView* _loadingSpinnerView;
	UIVisualEffectView* _loadingVisualEffectView;
	BOOL _extrasDidPushRoot;
	_TVNavigationZoomAnimator* _presentingAnimator;
	_TVProductTemplateZoomAnimator* _dismissingAnimator;
	BOOL _reverseDismissal;
	BOOL _playbackIsPasscodeRestricted;
	TVSRemoteNotifier* _remoteAcquisitionNotifier;
	TVJSITunesStore* _extrasOriginalJSITunesStore;
	NSDate* _passcodeRestrictedPlaybackBackgroundedDate;

}

@property (nonatomic,retain) TVSRemoteNotifier * remoteAcquisitionNotifier;                     //@synthesize remoteAcquisitionNotifier=_remoteAcquisitionNotifier - In the implementation block
@property (assign,nonatomic,__weak) TVJSITunesStore * extrasOriginalJSITunesStore;              //@synthesize extrasOriginalJSITunesStore=_extrasOriginalJSITunesStore - In the implementation block
@property (assign,nonatomic) BOOL playbackIsPasscodeRestricted;                                 //@synthesize playbackIsPasscodeRestricted=_playbackIsPasscodeRestricted - In the implementation block
@property (nonatomic,copy) NSDate * passcodeRestrictedPlaybackBackgroundedDate;                 //@synthesize passcodeRestrictedPlaybackBackgroundedDate=_passcodeRestrictedPlaybackBackgroundedDate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * PCID; 
@property (nonatomic,readonly) NSDictionary * activeAccount; 
@property (nonatomic,readonly) BOOL preferSDHOverRegularSubtitles; 
@property (nonatomic,readonly) BOOL preferVideoDescriptions; 
+(void)initialize;
-(void)dealloc;
-(id)animationControllerForPresentedController:(id)arg1 presentingController:(id)arg2 sourceController:(id)arg3 ;
-(id)animationControllerForDismissedController:(id)arg1 ;
-(NSDictionary *)activeAccount;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
-(void)_applicationWillEnterForegroundNotification:(id)arg1 ;
-(BOOL)preferVideoDescriptions;
-(BOOL)preferSDHOverRegularSubtitles;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(void)setPlaybackIsPasscodeRestricted:(BOOL)arg1 ;
-(BOOL)playbackIsPasscodeRestricted;
-(NSDate *)passcodeRestrictedPlaybackBackgroundedDate;
-(void)setPasscodeRestrictedPlaybackBackgroundedDate:(NSDate *)arg1 ;
-(id)DSID;
-(void)_hideSpinner;
-(void)_showSpinner;
-(id)initWithAppContext:(id)arg1 ;
-(void)appController:(id)arg1 evaluateAppJavaScriptInContext:(id)arg2 ;
-(void)_controllerDidDisplay:(id)arg1 ;
-(id)_extrasNavigationController;
-(id)_rentalInfoFromDataItems:(id)arg1 ;
-(id)_optionsFromActiveAccount;
-(void)_showStoreDemoModeRestrictionMessage:(id)arg1 ;
-(void)_buyWithActionParams:(id)arg1 :(id)arg2 ;
-(void)_reportAggregateDataWithCategory:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)_loadCountOfFavoritesInCategory:(unsigned long long)arg1 withCallback:(id)arg2 ;
-(BOOL)shouldPreventActionForStoreDemoModeWithMessage:(id)arg1 ;
-(void)_determineStatusOfItemInCategory:(unsigned long long)arg1 withAdamID:(id)arg2 :(id)arg3 ;
-(BOOL)_showPasscodePromptForContentRatingRanking:(id)arg1 ;
-(void)_loadExtrasURL:(id)arg1 adamID:(id)arg2 actionParams:(id)arg3 previewURL:(id)arg4 loadingImage:(id)arg5 lightTheme:(BOOL)arg6 presentImmediately:(BOOL)arg7 ;
-(void)_dismissExtrasNavigationControllerAnimated:(BOOL)arg1 reverseAnimation:(BOOL)arg2 ;
-(void)_stopExtrasApp;
-(void)_hideExtrasLoadingImageView;
-(void)setExtrasOriginalJSITunesStore:(TVJSITunesStore *)arg1 ;
-(TVJSITunesStore *)extrasOriginalJSITunesStore;
-(void)dismissExtrasWithNavigationURL:(id)arg1 ;
-(TVSRemoteNotifier *)remoteAcquisitionNotifier;
-(void)buyWithActionParams:(id)arg1 :(id)arg2 ;
-(void)loadRentals:(id)arg1 ;
-(void)refreshRentals:(id)arg1 ;
-(void)loadCountOfFavoriteShows:(id)arg1 ;
-(void)loadCountOfFavoriteMovies:(id)arg1 ;
-(void)addItemToFavoritesWithAdamID:(id)arg1 ;
-(void)removeItemFromFavoritesWithAdamID:(id)arg1 ;
-(void)determineStatusOfMovieWithAdamID:(id)arg1 :(id)arg2 ;
-(void)determineStatusOfSeasonWithAdamID:(id)arg1 :(id)arg2 ;
-(void)determineStatusOfItemWithAdamID:(id)arg1 :(id)arg2 ;
-(void)determineProgressForAdamIDs:(id)arg1 :(id)arg2 ;
-(void)markAsWatched:(id)arg1 ;
-(void)markAsUnwatched:(id)arg1 ;
-(void)loadExtrasURL:(id)arg1 :(id)arg2 :(id)arg3 :(id)arg4 :(long long)arg5 :(id)arg6 :(BOOL)arg7 ;
-(void)loadStoreURL:(id)arg1 ;
-(void)loadBookmarkDataIfNeeded;
-(void)loadImageURLs:(id)arg1 :(id)arg2 ;
-(void)showMigrationForShowsIfNecessary;
-(void)showMigrationForMoviesIfNecessary;
-(NSString *)PCID;
-(void)setRemoteAcquisitionNotifier:(TVSRemoteNotifier *)arg1 ;
@end

