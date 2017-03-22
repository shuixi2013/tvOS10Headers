/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProVideo/ProVideo-Structs.h>
#import <ProVideo/FxImage.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface FxTexture : FxImage <NSCopying> {

	FxTexturePriv* _texturePriv;

}
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setData:(void*)arg1 ;
-(void)setTarget:(unsigned)arg1 ;
-(unsigned)target;
-(void)draw;
-(void)enable;
-(void)disable;
-(BOOL)_verifyImage;
-(unsigned)textureId;
-(void)bind;
-(BOOL)isInputImage;
-(void)setTextureId:(unsigned)arg1 ;
-(void*)createData:(unsigned)arg1 withType:(unsigned)arg2 ;
-(void)setAsActiveTexture;
-(void)getTextureCoords:(double*)arg1 right:(double*)arg2 bottom:(double*)arg3 top:(double*)arg4 ;
-(void)setIsInputImage:(BOOL)arg1 ;
-(id)initWithInfo:(SCD_Struct_Fx42)arg1 textureId:(unsigned)arg2 andTarget:(unsigned)arg3 ;
@end

