/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class NSLayoutConstraint, UIView, UIImageView;

@interface _MKZoomSliderView : UIView {

	NSLayoutConstraint* _knobCenterYConstraint;
	UIView* _knob;
	double _zoomFraction;
	BOOL _active;
	UIImageView* _shadowImageView;
	double _lastTrackShadowImageScale;

}

@property (assign,nonatomic) double zoomFraction;                      //@synthesize zoomFraction=_zoomFraction - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)setBounds:(CGRect)arg1 ;
-(BOOL)isActive;
-(void)updateConstraints;
-(void)setActive:(BOOL)arg1 ;
-(void)setZoomFraction:(double)arg1 ;
-(double)zoomFraction;
@end

