/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CISkyAndGrassAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputSkyAmount;
	NSNumber* inputGrassAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputSkyAmount; 
@property (nonatomic,retain) NSNumber * inputGrassAmount; 
+(id)customAttributes;
-(id)_kernel;
-(NSNumber *)inputSkyAmount;
-(void)setInputSkyAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputGrassAmount;
-(void)setInputGrassAmount:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
@end
