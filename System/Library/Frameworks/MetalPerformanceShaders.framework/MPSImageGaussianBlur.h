/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSUnaryImageKernel.h>

@class MPSImageConvolution;

@interface MPSImageGaussianBlur : MPSUnaryImageKernel {

	float _sigma;
	MPSImageConvolution* smallConv;
	int _planSteps[8];
	unsigned long long _numSteps;
	const double* _plan;
	BOOL _cheesyBlur;
	float _scale;

}

@property (nonatomic,readonly) float sigma;              //@synthesize sigma=_sigma - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(MPSRegion)sourceRegionForDestinationSize:(SCD_Struct_MP5)arg1 ;
-(void)toggleCheesyBlur;
-(id)initWithDevice:(id)arg1 sigma:(float)arg2 ;
-(void)dealloc;
-(id)debugDescription;
-(float)sigma;
-(id)initWithDevice:(id)arg1 ;
@end

