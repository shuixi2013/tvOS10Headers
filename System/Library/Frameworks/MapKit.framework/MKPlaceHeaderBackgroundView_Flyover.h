/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <MapKit/MKPlaceHeaderBackgroundView.h>

@class UITapGestureRecognizer, MKMapView, GEOPDFlyover;

@interface MKPlaceHeaderBackgroundView_Flyover : MKPlaceHeaderBackgroundView {

	BOOL _animationPaused;
	BOOL _animationPrepared;
	UITapGestureRecognizer* _interactionTapRecognizer;
	MKMapView* _mapView;
	GEOPDFlyover* _flyover;

}
-(void)setFrame:(CGRect)arg1 ;
-(void)reset;
-(void)resume;
-(void)present;
-(void)pause;
-(id)mapView;
-(void)setMapView:(id)arg1 ;
-(id)flyover;
-(void)setFlyover:(id)arg1 ;
-(void)prepareForPresentation;
-(id)initWithFrame:(CGRect)arg1 mapItem:(id)arg2 ;
-(void)_pauseTour;
@end

