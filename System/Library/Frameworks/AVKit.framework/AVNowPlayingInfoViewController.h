/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <AVKit/AVNowPlayingInfoPanelFilmStripDelegate.h>
#import <UIKit/UITabBarControllerDelegate.h>
#import <UIKit/UIViewControllerTransitioningDelegate.h>

@protocol AVNowPlayingInfoPanelFilmStripDelegate, AVNowPlayingInfoPanelNavigationDelegate, AVNowPlayingInfoViewControllerDelegate, AVNowPlayingInfoProtocol;
@class NSArray, UIView, AVPlayerController, AVNowPlayingInfoPanelCollection, UIViewController, AVNowPlayingInfoTabBarController, UISwipeGestureRecognizer, UITapGestureRecognizer, UIVisualEffectView, AVNowPlayingInfoPanelMainDescription, AVNowPlayingInfoPanelFilmStrip, AVNowPlayingInfoPanelAudioViewController, AVNowPlayingInfoPanelItemList, NSString;

@interface AVNowPlayingInfoViewController : UIViewController <AVNowPlayingInfoPanelFilmStripDelegate, UITabBarControllerDelegate, UIViewControllerTransitioningDelegate> {

	id<AVNowPlayingInfoPanelFilmStripDelegate> _chaptersDelegate;
	NSArray* _availablePanelIdentifiersCached;
	BOOL _focusToTabBar;
	UIView* _dividerLine;
	BOOL _navigationEnabled;
	NSArray* _customInfoViewControllers;
	id<AVNowPlayingInfoPanelNavigationDelegate> _navigationDelegate;
	id<AVNowPlayingInfoViewControllerDelegate> _infoViewControllerDelegate;
	AVPlayerController* _playerController;
	AVNowPlayingInfoPanelCollection* _panels;
	UIViewController*<AVNowPlayingInfoProtocol> _activePanel;
	AVNowPlayingInfoTabBarController* _tabBarController;
	UIView* _tabBarContainer;
	UISwipeGestureRecognizer* _swipeUpRecognizer;
	UISwipeGestureRecognizer* _swipeDownRecognizer;
	UITapGestureRecognizer* _menuButtonRecognizer;
	UITapGestureRecognizer* _playPauseButtonRecognizer;
	UIVisualEffectView* _backdropView;
	UIVisualEffectView* _vibrantContainer;
	UIView* _dimmedBackground;

}

@property (nonatomic,retain) AVNowPlayingInfoPanelCollection * panels;                                                  //@synthesize panels=_panels - In the implementation block
@property (nonatomic,retain) UIViewController*<AVNowPlayingInfoProtocol> activePanel;                                   //@synthesize activePanel=_activePanel - In the implementation block
@property (nonatomic,retain) AVNowPlayingInfoTabBarController * tabBarController;                                       //@synthesize tabBarController=_tabBarController - In the implementation block
@property (nonatomic,retain) UIView * tabBarContainer;                                                                  //@synthesize tabBarContainer=_tabBarContainer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeUpRecognizer;                                              //@synthesize swipeUpRecognizer=_swipeUpRecognizer - In the implementation block
@property (nonatomic,retain) UISwipeGestureRecognizer * swipeDownRecognizer;                                            //@synthesize swipeDownRecognizer=_swipeDownRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * menuButtonRecognizer;                                             //@synthesize menuButtonRecognizer=_menuButtonRecognizer - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * playPauseButtonRecognizer;                                        //@synthesize playPauseButtonRecognizer=_playPauseButtonRecognizer - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * backdropView;                                                         //@synthesize backdropView=_backdropView - In the implementation block
@property (nonatomic,retain) UIVisualEffectView * vibrantContainer;                                                     //@synthesize vibrantContainer=_vibrantContainer - In the implementation block
@property (nonatomic,retain) UIView * dimmedBackground;                                                                 //@synthesize dimmedBackground=_dimmedBackground - In the implementation block
@property (nonatomic,readonly) NSArray * availablePanelIdentifiers; 
@property (nonatomic,retain) NSArray * customInfoViewControllers;                                                       //@synthesize customInfoViewControllers=_customInfoViewControllers - In the implementation block
@property (assign,nonatomic,__weak) id<AVNowPlayingInfoPanelNavigationDelegate> navigationDelegate;                     //@synthesize navigationDelegate=_navigationDelegate - In the implementation block
@property (assign,nonatomic) BOOL navigationEnabled;                                                                    //@synthesize navigationEnabled=_navigationEnabled - In the implementation block
@property (readonly) AVNowPlayingInfoPanelMainDescription * descriptionPanel; 
@property (readonly) AVNowPlayingInfoPanelFilmStrip * chaptersPanel; 
@property (readonly) AVNowPlayingInfoPanelAudioViewController * audioCombinedOptionsPanel; 
@property (readonly) AVNowPlayingInfoPanelItemList * subtitleOptionsPanel; 
@property (assign,nonatomic,__weak) id<AVNowPlayingInfoViewControllerDelegate> infoViewControllerDelegate;              //@synthesize infoViewControllerDelegate=_infoViewControllerDelegate - In the implementation block
@property (assign,nonatomic,__weak) AVPlayerController * playerController;                                              //@synthesize playerController=_playerController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)didReceiveMemoryWarning;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(BOOL)shouldUpdateFocusFromView:(id)arg1 toView:(id)arg2 heading:(unsigned long long)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)removeFromParentViewController;
-(AVNowPlayingInfoTabBarController *)tabBarController;
-(BOOL)_tvTabBarShouldAutohide;
-(void)tabBarController:(id)arg1 didSelectViewController:(id)arg2 ;
-(BOOL)tabBarController:(id)arg1 shouldSelectViewController:(id)arg2 ;
-(BOOL)isVisible;
-(void)dismiss;
-(UIVisualEffectView *)backdropView;
-(void)setBackdropView:(UIVisualEffectView *)arg1 ;
-(id<AVNowPlayingInfoPanelNavigationDelegate>)navigationDelegate;
-(void)setNavigationDelegate:(id<AVNowPlayingInfoPanelNavigationDelegate>)arg1 ;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(UITapGestureRecognizer *)playPauseButtonRecognizer;
-(void)setPlayPauseButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(unsigned long long)numberOfFramesForFilmStrip:(id)arg1 ;
-(id)filmStrip:(id)arg1 imageForFrameIndex:(unsigned long long)arg2 ;
-(id)filmStrip:(id)arg1 imageProxyForFrameIndex:(unsigned long long)arg2 ;
-(id)filmStrip:(id)arg1 titleForFrame:(unsigned long long)arg2 ;
-(void)filmStrip:(id)arg1 didSelectFrameIndex:(unsigned long long)arg2 ;
-(void)setCustomInfoViewControllers:(NSArray *)arg1 ;
-(NSArray *)availablePanelIdentifiers;
-(void)setNavigationEnabled:(BOOL)arg1 ;
-(void)_updatePanelAvailability;
-(void)instantiatePanels;
-(void)loadPanels;
-(void)centerTabBar;
-(void)centerPanel:(id)arg1 ;
-(void)centerActivePanel;
-(void)resizeForCurrentPanel;
-(id)_tabBarControllerWrapperView;
-(id)currentPanel;
-(double)currentPanelHeight;
-(CGSize)currentPreferredContentSize;
-(void)_resizeBackdropViewForPanel:(id)arg1 ;
-(id)panelForIdentifier:(id)arg1 ;
-(id)panelForViewController:(id)arg1 ;
-(AVNowPlayingInfoPanelMainDescription *)descriptionPanel;
-(AVNowPlayingInfoPanelFilmStrip *)chaptersPanel;
-(AVNowPlayingInfoPanelItemList *)subtitleOptionsPanel;
-(AVNowPlayingInfoPanelAudioViewController *)audioCombinedOptionsPanel;
-(void)selectPanelForIdentifier:(id)arg1 ;
-(BOOL)userInteractionAllowedByPanel:(id)arg1 ;
-(void)focusPanelForIdentifier:(id)arg1 ;
-(void)focusCurrentPanel;
-(void)focusTabBar;
-(void)deactivatePanel;
-(void)activatePanel:(id)arg1 ;
-(void)swipeGesture:(id)arg1 ;
-(void)menuButtonGesture:(id)arg1 ;
-(void)playPauseGesture:(id)arg1 ;
-(void)didSelectTab:(unsigned long long)arg1 ;
-(void)didHighlightTab:(unsigned long long)arg1 ;
-(void)setChaptersFilmStripDelegate:(id)arg1 ;
-(id)chaptersDelegate;
-(void)navigateLeft;
-(void)navigateRight;
-(NSArray *)customInfoViewControllers;
-(BOOL)navigationEnabled;
-(id<AVNowPlayingInfoViewControllerDelegate>)infoViewControllerDelegate;
-(void)setInfoViewControllerDelegate:(id<AVNowPlayingInfoViewControllerDelegate>)arg1 ;
-(AVNowPlayingInfoPanelCollection *)panels;
-(void)setPanels:(AVNowPlayingInfoPanelCollection *)arg1 ;
-(UIViewController*<AVNowPlayingInfoProtocol>)activePanel;
-(void)setActivePanel:(UIViewController*<AVNowPlayingInfoProtocol>)arg1 ;
-(void)setTabBarController:(AVNowPlayingInfoTabBarController *)arg1 ;
-(UIView *)tabBarContainer;
-(void)setTabBarContainer:(UIView *)arg1 ;
-(UISwipeGestureRecognizer *)swipeUpRecognizer;
-(void)setSwipeUpRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UISwipeGestureRecognizer *)swipeDownRecognizer;
-(void)setSwipeDownRecognizer:(UISwipeGestureRecognizer *)arg1 ;
-(UITapGestureRecognizer *)menuButtonRecognizer;
-(void)setMenuButtonRecognizer:(UITapGestureRecognizer *)arg1 ;
-(UIVisualEffectView *)vibrantContainer;
-(void)setVibrantContainer:(UIVisualEffectView *)arg1 ;
-(UIView *)dimmedBackground;
-(void)setDimmedBackground:(UIView *)arg1 ;
-(AVPlayerController *)playerController;
-(void)setPlayerController:(AVPlayerController *)arg1 ;
@end

