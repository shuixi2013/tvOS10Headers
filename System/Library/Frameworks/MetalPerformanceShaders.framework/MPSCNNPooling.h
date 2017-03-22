/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <MetalPerformanceShaders/MPSCNNKernel.h>

@interface MPSCNNPooling : MPSCNNKernel {

	unsigned long long _kernelWidth;
	unsigned long long _kernelHeight;
	unsigned long long _strideInPixelsX;
	unsigned long long _strideInPixelsY;

}

@property (nonatomic,readonly) unsigned long long kernelWidth;                  //@synthesize kernelWidth=_kernelWidth - In the implementation block
@property (nonatomic,readonly) unsigned long long kernelHeight;                 //@synthesize kernelHeight=_kernelHeight - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsX;              //@synthesize strideInPixelsX=_strideInPixelsX - In the implementation block
@property (nonatomic,readonly) unsigned long long strideInPixelsY;              //@synthesize strideInPixelsY=_strideInPixelsY - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 ;
-(unsigned long long)kernelWidth;
-(unsigned long long)kernelHeight;
-(unsigned long long)strideInPixelsX;
-(unsigned long long)strideInPixelsY;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 kernelWidth:(unsigned long long)arg2 kernelHeight:(unsigned long long)arg3 strideInPixelsX:(unsigned long long)arg4 strideInPixelsY:(unsigned long long)arg5 ;
-(id)initWithDevice:(id)arg1 ;
@end

