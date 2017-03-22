/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

@interface CICircleGenerator : CIFilter {

	CIColor* inputColor;
	CIVector* inputCenter;
	NSNumber* inputRadius;
	NSNumber* inputEdgeBlur;

}
+(id)customAttributes;
-(id)_CICircle;
-(id)outputImage;
@end

