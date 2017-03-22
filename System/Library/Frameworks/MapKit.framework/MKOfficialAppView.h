/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceSectionRowView.h>

@protocol MKOfficialAppViewDelegate;
@class UIImageView, UIView, _MKUILabel, UIButton, NSMutableArray, NSLayoutConstraint, SSLookupItem, UIImage;

@interface MKOfficialAppView : MKPlaceSectionRowView {

	UIImageView* _storeAppImageView;
	UIView* _labelContainerView;
	_MKUILabel* _appNameLabel;
	_MKUILabel* _developerLabel;
	UIView* _categoryContainerView;
	_MKUILabel* _categoryLabel;
	_MKUILabel* _ratingLabel;
	UIButton* _punchOutButton;
	NSMutableArray* _constraintArray;
	NSLayoutConstraint* _nameBaselineToTopConstraint;
	NSLayoutConstraint* _developerBaselineToNameBaselineConstraint;
	NSLayoutConstraint* _categoryBaselineToDeveloperBaselineConstraint;
	NSLayoutConstraint* _ratingBaselineToCategoryBaslineConstraint;
	NSLayoutConstraint* _categoryLeadingToCategoryContainerLeadingConstraint;
	NSLayoutConstraint* _categoryTrailingToCategoryContainerTrailingConstraint;
	SSLookupItem* _storeItem;
	UIImage* _storeItemImage;
	id<MKOfficialAppViewDelegate> _delegate;

}

@property (nonatomic,retain) SSLookupItem * storeItem;                                   //@synthesize storeItem=_storeItem - In the implementation block
@property (nonatomic,retain) UIImage * storeItemImage;                                   //@synthesize storeItemImage=_storeItemImage - In the implementation block
@property (assign,nonatomic,__weak) id<MKOfficialAppViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<MKOfficialAppViewDelegate>)arg1 ;
-(id<MKOfficialAppViewDelegate>)delegate;
-(void)_commonInit;
-(SSLookupItem *)storeItem;
-(void)infoCardThemeChanged:(id)arg1 ;
-(void)contentSizeDidChange;
-(void)_punchOutButtonSelected:(id)arg1 ;
-(void)setStoreItemImage:(UIImage *)arg1 ;
-(void)setStoreItem:(SSLookupItem *)arg1 ;
-(void)updateButtonText;
-(BOOL)_appIsInstalled;
-(void)_createConstraints;
-(void)setConstraintConstants;
-(UIImage *)storeItemImage;
-(void)_updateLabelText;
@end

