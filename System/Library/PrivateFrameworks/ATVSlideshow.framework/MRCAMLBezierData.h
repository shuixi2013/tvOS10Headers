/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MRCAMLBezierData : NSObject {

	double ax;
	double bx;
	double cx;
	double ay;
	double by;
	double cy;

}
-(id)initWithControlPoints:(const double*)arg1 ;
-(double)evaluatAtTime:(double)arg1 ;
-(id)initWithTimingFunction:(id)arg1 ;
-(double)evaluate_inverseAtTime:(double)arg1 ;
-(double)sample_x:(double)arg1 ;
-(double)sample_x_derivative:(double)arg1 ;
-(double)sample_y:(double)arg1 ;
-(double)sample_y_derivative:(double)arg1 ;
-(double)solve_x:(double)arg1 epsilon:(double)arg2 ;
-(double)solve_y:(double)arg1 epsilon:(double)arg2 ;
@end

