/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>
#import <libobjc.A.dylib/_MKInfoCardChildViewControllerAnalyticsDelegate.h>

@class MKMapItem, MKPlaceSectionHeaderView, _MKPlaceBusinessInfoRow, NSString;

@interface MKPlaceBusinessInfoViewController : MKPlaceSectionViewController <_MKInfoCardChildViewControllerAnalyticsDelegate> {

	MKMapItem* _mapItem;
	MKPlaceSectionHeaderView* _headerView;
	_MKPlaceBusinessInfoRow* _businessInfoRow;

}

@property (nonatomic,retain) MKMapItem * mapItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)mapItemHasBusinessInfoToDisplay:(id)arg1 ;
-(void)dealloc;
-(void)viewDidLoad;
-(MKMapItem *)mapItem;
-(void)setMapItem:(MKMapItem *)arg1 ;
-(void)infoCardThemeChanged:(id)arg1 ;
-(id)infoCardChildUnactionableUIElements;
-(void)_updateBusinessInfo;
@end

