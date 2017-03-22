/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter, BLPixelImageBuffer, NSData;

@interface BLBlackAndWhiteFilter : CIFilter {

	BOOL _needsReprocess;
	float _lastAmount;
	BOOL _lastAppySepia;
	BOOL _lastApplyGrain;
	CGRect _lastDestinationRect;
	long long _lastVersion;
	float _lastPhototone;
	float _lastNeutralGamma;
	int _lastPreset;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	NSNumber* _inputApplySepia;
	NSNumber* _inputApplyGrain;
	CIVector* _inputDestinationRect;
	CIVector* _inputHueStrengthArray;
	NSNumber* _inputVersion;
	NSNumber* _inputPhototone;
	NSNumber* _inputNeutralGamma;
	NSNumber* _inputPreset;
	NSNumber* _inputPadding;
	CIFilter* _colorCubeFilterBW;
	CIFilter* _colorCubeFilterGrain;
	BLPixelImageBuffer* _grainImage;
	NSData* _precomputedCube;
	CIVector* _lastHueStrengthArray;

}

@property (nonatomic,retain) CIFilter * colorCubeFilterBW;                 //@synthesize colorCubeFilterBW=_colorCubeFilterBW - In the implementation block
@property (nonatomic,retain) CIFilter * colorCubeFilterGrain;              //@synthesize colorCubeFilterGrain=_colorCubeFilterGrain - In the implementation block
@property (nonatomic,retain) BLPixelImageBuffer * grainImage;              //@synthesize grainImage=_grainImage - In the implementation block
@property (nonatomic,retain) NSData * precomputedCube;                     //@synthesize precomputedCube=_precomputedCube - In the implementation block
@property (nonatomic,retain) CIVector * lastHueStrengthArray;              //@synthesize lastHueStrengthArray=_lastHueStrengthArray - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                         //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                         //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) NSNumber * inputApplySepia;                     //@synthesize inputApplySepia=_inputApplySepia - In the implementation block
@property (nonatomic,copy) NSNumber * inputApplyGrain;                     //@synthesize inputApplyGrain=_inputApplyGrain - In the implementation block
@property (nonatomic,copy) CIVector * inputDestinationRect;                //@synthesize inputDestinationRect=_inputDestinationRect - In the implementation block
@property (nonatomic,copy) CIVector * inputHueStrengthArray;               //@synthesize inputHueStrengthArray=_inputHueStrengthArray - In the implementation block
@property (nonatomic,copy) NSNumber * inputVersion;                        //@synthesize inputVersion=_inputVersion - In the implementation block
@property (nonatomic,copy) NSNumber * inputPhototone;                      //@synthesize inputPhototone=_inputPhototone - In the implementation block
@property (nonatomic,copy) NSNumber * inputNeutralGamma;                   //@synthesize inputNeutralGamma=_inputNeutralGamma - In the implementation block
@property (nonatomic,copy) NSNumber * inputPreset;                         //@synthesize inputPreset=_inputPreset - In the implementation block
@property (nonatomic,copy) NSNumber * inputPadding;                        //@synthesize inputPadding=_inputPadding - In the implementation block
-(void)setInputAmount:(NSNumber *)arg1 ;
-(NSNumber *)inputAmount;
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(id)init;
-(id)outputImage;
-(void)setDefaults;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(NSNumber *)inputVersion;
-(void)setInputVersion:(NSNumber *)arg1 ;
-(void)setInputHueStrengthArray:(CIVector *)arg1 ;
-(void)setInputPhototone:(NSNumber *)arg1 ;
-(NSData *)precomputedCube;
-(void)setPrecomputedCube:(NSData *)arg1 ;
-(void)setLastHueStrengthArray:(CIVector *)arg1 ;
-(CIVector *)inputHueStrengthArray;
-(NSNumber *)inputPhototone;
-(CIVector *)lastHueStrengthArray;
-(void)setInputApplySepia:(NSNumber *)arg1 ;
-(void)setInputApplyGrain:(NSNumber *)arg1 ;
-(void)setInputPreset:(NSNumber *)arg1 ;
-(void)setInputPadding:(NSNumber *)arg1 ;
-(BLPixelImageBuffer *)grainImage;
-(void)setGrainImage:(BLPixelImageBuffer *)arg1 ;
-(id)generateGrain:(id)arg1 destRect:(CGRect)arg2 ;
-(id)loadGrain:(id)arg1 destRect:(CGRect)arg2 padding:(float)arg3 ;
-(CIFilter *)colorCubeFilterBW;
-(void)setColorCubeFilterBW:(CIFilter *)arg1 ;
-(CIFilter *)colorCubeFilterGrain;
-(void)setColorCubeFilterGrain:(CIFilter *)arg1 ;
-(id)applyGrain:(id)arg1 cube:(id)arg2 destRect:(CGRect)arg3 padding:(float)arg4 ;
-(NSNumber *)inputApplySepia;
-(NSNumber *)inputApplyGrain;
-(CIVector *)inputDestinationRect;
-(void)setInputDestinationRect:(CIVector *)arg1 ;
-(NSNumber *)inputPreset;
-(NSNumber *)inputPadding;
@end

