/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <SiriUI/SiriUIContentCollectionViewCell.h>

@class MKMapView;

@interface SiriUIMapCollectionViewCell : SiriUIContentCollectionViewCell {

	MKMapView* _mapView;

}
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)unloadExpensiveViews;
-(void)setLatitude:(double)arg1 longitude:(double)arg2 ;
-(void)_setCoordinate:(CLLocationCoordinate2D)arg1 ;
@end
