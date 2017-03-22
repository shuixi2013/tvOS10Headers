/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/MetalPerformanceShaders
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalPerformanceShaders/MetalPerformanceShaders-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MPSKernel : NSObject <NSCopying> {

	unsigned long long _options;
	MPSDevice* _device;
	MPSLibrary* _library;
	NSString* _label;
	unsigned long long _allowedOptions;
	unsigned _tuningParams;
	unsigned _maxTuningParams;

}

@property (assign,nonatomic) unsigned kernelTuningParams;                   //@synthesize tuningParams=_tuningParams - In the implementation block
@property (nonatomic,readonly) unsigned maxKernelTuningParams;              //@synthesize maxTuningParams=_maxTuningParams - In the implementation block
@property (assign,nonatomic) unsigned long long options;                    //@synthesize options=_options - In the implementation block
@property (nonatomic,retain,readonly) id<MTLDevice> device; 
@property (copy) NSString * label;                                          //@synthesize label=_label - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(unsigned)kernelTuningParams;
-(void)setKernelTuningParams:(unsigned)arg1 ;
-(unsigned)maxKernelTuningParams;
-(void)dealloc;
-(id)init;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)options;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setOptions:(unsigned long long)arg1 ;
-(id<MTLDevice>)device;
-(id)initWithDevice:(id)arg1 ;
@end

