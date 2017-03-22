/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIKernel.h>

@interface CIWarpKernel : CIKernel
+(id)kernelWithString:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 ;
-(id)_initWithDict:(id)arg1 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 arguments:(id)arg3 options:(id)arg4 ;
-(CGRect)autogenerateROI:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 arguments:(id)arg3 extent:(CGRect)arg4 ;
-(id)applyWithExtent:(CGRect)arg1 roiCallback:(/*^block*/id)arg2 inputImage:(id)arg3 arguments:(id)arg4 options:(id)arg5 ;
-(id)generateGeneralKernelFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)generateMainFromWarpKernel:(WarpKernel*)arg1 args:(SerialObjectPtrArray*)arg2 ;
-(id)makeGridImage:(CGRect)arg1 nx:(int)arg2 ny:(int)arg3 ;
@end

