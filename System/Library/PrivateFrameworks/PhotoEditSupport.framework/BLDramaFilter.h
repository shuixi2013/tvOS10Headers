/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter, NSData;

@interface BLDramaFilter : CIFilter {

	BOOL _needsReprocess;
	float _lastAmount;
	float _lastPhototone;
	float _lastNeutralGamma;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	CIVector* _inputHueStrengthArray;
	NSNumber* _inputPhototone;
	NSNumber* _inputNeutralGamma;
	CIFilter* _colorCubeFilterDrama;
	NSData* _precomputedCube;
	CIVector* _lastHueStrengthArray;

}

@property (nonatomic,retain) CIFilter * colorCubeFilterDrama;              //@synthesize colorCubeFilterDrama=_colorCubeFilterDrama - In the implementation block
@property (nonatomic,retain) NSData * precomputedCube;                     //@synthesize precomputedCube=_precomputedCube - In the implementation block
@property (nonatomic,retain) CIVector * lastHueStrengthArray;              //@synthesize lastHueStrengthArray=_lastHueStrengthArray - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                         //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                         //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) CIVector * inputHueStrengthArray;               //@synthesize inputHueStrengthArray=_inputHueStrengthArray - In the implementation block
@property (nonatomic,copy) NSNumber * inputPhototone;                      //@synthesize inputPhototone=_inputPhototone - In the implementation block
@property (nonatomic,copy) NSNumber * inputNeutralGamma;                   //@synthesize inputNeutralGamma=_inputNeutralGamma - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(id)init;
-(id)outputImage;
-(void)setDefaults;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputHueStrengthArray:(CIVector *)arg1 ;
-(void)setInputPhototone:(NSNumber *)arg1 ;
-(NSData *)precomputedCube;
-(void)setPrecomputedCube:(NSData *)arg1 ;
-(CIFilter *)colorCubeFilterDrama;
-(void)setColorCubeFilterDrama:(CIFilter *)arg1 ;
-(void)setLastHueStrengthArray:(CIVector *)arg1 ;
-(CIVector *)inputHueStrengthArray;
-(NSNumber *)inputPhototone;
-(CIVector *)lastHueStrengthArray;
@end

