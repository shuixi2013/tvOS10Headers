/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CIColorMonochrome : CIFilter {

	CIImage* inputImage;
	CIColor* inputColor;
	NSNumber* inputIntensity;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIColor * inputColor; 
@property (nonatomic,retain) NSNumber * inputIntensity; 
+(id)customAttributes;
-(id)_kernel;
-(id)outputImage;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputIntensity:(NSNumber *)arg1 ;
-(NSNumber *)inputIntensity;
@end

