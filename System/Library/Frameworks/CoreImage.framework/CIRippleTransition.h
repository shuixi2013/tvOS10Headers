/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIRippleTransition : CIFilter {

	CIImage* inputImage;
	CIImage* inputTargetImage;
	CIImage* inputShadingImage;
	CIVector* inputCenter;
	CIVector* inputExtent;
	NSNumber* inputTime;
	NSNumber* inputWidth;
	NSNumber* inputScale;

}
+(id)customAttributes;
-(id)_CIRippleTransition;
-(id)outputImage;
@end

