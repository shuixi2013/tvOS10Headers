/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/MKStackingViewControllerFixedHeightAware.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@protocol MKPlaceDealsViewControllerDelegate, MKMapItemVendorDeal;
@class _MKPlaceDealView, NSLayoutConstraint, NSString;

@interface MKPlaceDealsViewController : UIViewController <MKStackingViewControllerFixedHeightAware, _MKInfoCardChildViewControllerAnalyticsDelegate> {

	_MKPlaceDealView* _dealView;
	NSLayoutConstraint* _collapsedConstraint;
	BOOL _resizableViewsDisabled;
	id<MKPlaceDealsViewControllerDelegate> _delegate;
	id<MKMapItemVendorDeal> _deal;

}

@property (assign,nonatomic,__weak) id<MKPlaceDealsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<MKMapItemVendorDeal> deal;                                        //@synthesize deal=_deal - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL resizableViewsDisabled;                                         //@synthesize resizableViewsDisabled=_resizableViewsDisabled - In the implementation block
-(void)setDelegate:(id<MKPlaceDealsViewControllerDelegate>)arg1 ;
-(id<MKPlaceDealsViewControllerDelegate>)delegate;
-(void)loadView;
-(void)viewDidLoad;
-(void)updateViewConstraints;
-(double)extraHeightToReserveInLayout;
-(BOOL)resizableViewsDisabled;
-(void)setResizableViewsDisabled:(BOOL)arg1 ;
-(id<MKMapItemVendorDeal>)deal;
-(void)setDeal:(id<MKMapItemVendorDeal>)arg1 ;
-(void)_dealSelected:(id)arg1 ;
@end

