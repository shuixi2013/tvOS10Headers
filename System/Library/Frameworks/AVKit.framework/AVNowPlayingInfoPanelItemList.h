/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UICollectionViewController.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <AVKit/AVNowPlayingInfoProtocol.h>

@protocol AVNowPlayingInfoPanelItemListDelegate;
@class NSArray, NSString;

@interface AVNowPlayingInfoPanelItemList : UICollectionViewController <UICollectionViewDelegateFlowLayout, AVNowPlayingInfoProtocol> {

	NSArray* _itemViews;
	double _combinedWidthOfItemViews;
	BOOL _hasImages;
	BOOL _showNavigationMarkerImages;
	BOOL _availabilityRequiresMultipleItems;
	NSString* _identifier;
	NSArray* _items;
	long long _currentItemIndex;
	id<AVNowPlayingInfoPanelItemListDelegate> _itemListDelegate;

}

@property (nonatomic,readonly) NSString * identifier;                                                        //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                                //@synthesize items=_items - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfItems; 
@property (assign,nonatomic) BOOL showNavigationMarkerImages;                                                //@synthesize showNavigationMarkerImages=_showNavigationMarkerImages - In the implementation block
@property (assign,nonatomic) BOOL availabilityRequiresMultipleItems;                                         //@synthesize availabilityRequiresMultipleItems=_availabilityRequiresMultipleItems - In the implementation block
@property (assign,nonatomic) long long currentItemIndex;                                                     //@synthesize currentItemIndex=_currentItemIndex - In the implementation block
@property (assign,nonatomic,__weak) id<AVNowPlayingInfoPanelItemListDelegate> itemListDelegate;              //@synthesize itemListDelegate=_itemListDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 canFocusItemAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(NSString *)identifier;
-(NSArray *)items;
-(void)loadView;
-(unsigned long long)numberOfItems;
-(void)setItems:(NSArray *)arg1 ;
-(id)preferredFocusEnvironments;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(CGSize)preferredContentSize;
-(BOOL)_tvTabBarShouldOverlap;
-(BOOL)_tvTabBarShouldAutohide;
-(BOOL)hasContent;
-(id)initWithIdentifier:(id)arg1 ;
-(void)_reloadData;
-(void)setMediaSelectionOptions:(id)arg1 externalLanguages:(id)arg2 ;
-(BOOL)_hasImages;
-(id)initWithIdentifier:(id)arg1 hasImages:(BOOL)arg2 ;
-(double)_totalHeight;
-(double)_itemHeight;
-(void)selectItemIndex:(long long)arg1 ;
-(void)setCurrentItemIndex:(long long)arg1 ;
-(void)revealCurrentItem;
-(id)indexPathCurrentItem;
-(void)_recenter;
-(id)_itemStringForIndex:(long long)arg1 ;
-(id)_itemImageForIndex:(long long)arg1 ;
-(id)itemTextForItem:(long long)arg1 ;
-(id)titleForIndexPath:(id)arg1 ;
-(id)imageForIndexPath:(id)arg1 ;
-(id)imageProxyForIndexPath:(id)arg1 ;
-(CGSize)displaySizeOfImages;
-(CGSize)displayImageSizeForIndexPath:(id)arg1 ;
-(BOOL)_haveImageLayout;
-(BOOL)showNavigationMarkerImages;
-(void)setShowNavigationMarkerImages:(BOOL)arg1 ;
-(BOOL)availabilityRequiresMultipleItems;
-(void)setAvailabilityRequiresMultipleItems:(BOOL)arg1 ;
-(long long)currentItemIndex;
-(id<AVNowPlayingInfoPanelItemListDelegate>)itemListDelegate;
-(void)setItemListDelegate:(id<AVNowPlayingInfoPanelItemListDelegate>)arg1 ;
@end

