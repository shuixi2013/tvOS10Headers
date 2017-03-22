/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MetalTools/MetalTools-Structs.h>
#import <MetalTools/MTLToolsBlitCommandEncoder.h>

@protocol MTLDevice;
@interface MTLDebugBlitCommandEncoder : MTLToolsBlitCommandEncoder {

	BOOL canDealloc;
	BOOL canEndEncoding;
	BOOL hasEndEncoding;
	deque<__weak id, std::__1::allocator<__weak id> >* updatedFences;
	id<MTLDevice> _cachedDevice;

}

@property (nonatomic,readonly) id<MTLDevice> cachedDevice;              //@synthesize cachedDevice=_cachedDevice - In the implementation block
-(void)dealloc;
-(void)endEncoding;
-(void)generateMipmapsForTexture:(id)arg1 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT3)arg4 sourceSize:(SCD_Struct_MT3)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT3)arg9 ;
-(void)updateFence:(id)arg1 ;
-(void)waitForFence:(id)arg1 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT3)arg4 sourceSize:(SCD_Struct_MT3)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT3)arg9 options:(unsigned long long)arg10 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT3)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT3)arg9 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT3)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT3)arg9 options:(unsigned long long)arg10 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT3)arg4 sourceSize:(SCD_Struct_MT3)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 ;
-(void)copyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT3)arg4 sourceSize:(SCD_Struct_MT3)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10 ;
-(void)copyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 toBuffer:(id)arg3 destinationOffset:(unsigned long long)arg4 size:(unsigned long long)arg5 ;
-(void)fillBuffer:(id)arg1 range:(NSRange)arg2 value:(unsigned char)arg3 ;
-(void)_setDefaults;
-(void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT3)arg4 sourceSize:(SCD_Struct_MT3)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT3)arg9 options:(unsigned long long)arg10 ;
-(void)validateCopyFromBuffer:(id)arg1 sourceOffset:(unsigned long long)arg2 sourceBytesPerRow:(unsigned long long)arg3 sourceBytesPerImage:(unsigned long long)arg4 sourceSize:(SCD_Struct_MT3)arg5 toTexture:(id)arg6 destinationSlice:(unsigned long long)arg7 destinationLevel:(unsigned long long)arg8 destinationOrigin:(SCD_Struct_MT3)arg9 options:(unsigned long long)arg10 ;
-(void)validateCopyFromTexture:(id)arg1 sourceSlice:(unsigned long long)arg2 sourceLevel:(unsigned long long)arg3 sourceOrigin:(SCD_Struct_MT3)arg4 sourceSize:(SCD_Struct_MT3)arg5 toBuffer:(id)arg6 destinationOffset:(unsigned long long)arg7 destinationBytesPerRow:(unsigned long long)arg8 destinationBytesPerImage:(unsigned long long)arg9 options:(unsigned long long)arg10 ;
-(id)initWithBlitCommandEncoder:(id)arg1 commandBuffer:(id)arg2 ;
-(id<MTLDevice>)cachedDevice;
@end

