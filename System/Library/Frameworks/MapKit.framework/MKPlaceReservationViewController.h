/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionViewController.h>

@class MKPlaceReservationRowView, _MKPlaceReservationInfo;

@interface MKPlaceReservationViewController : MKPlaceSectionViewController {

	MKPlaceReservationRowView* _reservationCell;
	_MKPlaceReservationInfo* _reservationInfo;

}

@property (nonatomic,retain) _MKPlaceReservationInfo * reservationInfo;              //@synthesize reservationInfo=_reservationInfo - In the implementation block
-(void)viewDidLoad;
-(void)setReservationInfo:(_MKPlaceReservationInfo *)arg1 ;
-(void)_updateReservationInfoAnimated:(BOOL)arg1 ;
-(_MKPlaceReservationInfo *)reservationInfo;
@end
