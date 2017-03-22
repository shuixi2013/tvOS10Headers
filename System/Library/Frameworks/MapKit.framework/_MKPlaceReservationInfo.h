/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MKPlaceReservationDelegate;
@class NSString, UIImage, NSArray;

@interface _MKPlaceReservationInfo : NSObject {

	NSString* _attributionProviderDisplayName;
	UIImage* _attributionProviderLogoImage;
	NSArray* _openTimes;
	id<_MKPlaceReservationDelegate> _reservationDelegate;

}

@property (nonatomic,copy,readonly) NSArray * openTimes;                                                //@synthesize openTimes=_openTimes - In the implementation block
@property (nonatomic,copy,readonly) NSString * attributionProviderDisplayName;                          //@synthesize attributionProviderDisplayName=_attributionProviderDisplayName - In the implementation block
@property (nonatomic,readonly) UIImage * attributionProviderLogoImage;                                  //@synthesize attributionProviderLogoImage=_attributionProviderLogoImage - In the implementation block
@property (nonatomic,__weak,readonly) id<_MKPlaceReservationDelegate> reservationDelegate;              //@synthesize reservationDelegate=_reservationDelegate - In the implementation block
-(id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4 ;
-(NSString *)attributionProviderDisplayName;
-(UIImage *)attributionProviderLogoImage;
-(NSArray *)openTimes;
-(id<_MKPlaceReservationDelegate>)reservationDelegate;
@end

