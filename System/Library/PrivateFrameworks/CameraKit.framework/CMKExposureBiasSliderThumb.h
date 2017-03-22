/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:19 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@interface CMKExposureBiasSliderThumb : UIView {

	float _normalizedExposureValue;

}

@property (assign,nonatomic) float normalizedExposureValue;              //@synthesize normalizedExposureValue=_normalizedExposureValue - In the implementation block
@property (nonatomic,readonly) double maxRadius; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(double)_sunRadius;
-(double)_sunRaySpacing;
-(double)_sunRayLength;
-(double)_interpolatedValueWithMin:(double)arg1 mid:(double)arg2 max:(double)arg3 ;
-(void)setNormalizedExposureValue:(float)arg1 ;
-(double)maxRadius;
-(float)normalizedExposureValue;
@end
