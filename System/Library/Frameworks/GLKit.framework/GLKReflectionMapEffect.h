/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GLKit.framework/GLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GLKit/GLKBaseEffect.h>
#import <GLKit/GLKNamedEffect.h>

@class GLKEffectPropertyTexture;

@interface GLKReflectionMapEffect : GLKBaseEffect <GLKNamedEffect> {

	GLKEffectPropertyTexture* _textureCubeMap;
	GLKMatrix3 _matrix;
	BOOL _dirtyUniforms;
	int _matrixLoc;

}

@property (assign,nonatomic) BOOL dirtyUniforms;                                       //@synthesize dirtyUniforms=_dirtyUniforms - In the implementation block
@property (assign,nonatomic) int matrixLoc;                                            //@synthesize matrixLoc=_matrixLoc - In the implementation block
@property (nonatomic,readonly) GLKEffectPropertyTexture * textureCubeMap;              //@synthesize textureCubeMap=_textureCubeMap - In the implementation block
@property (assign,nonatomic) _GLKMatrix3 matrix;                                       //@synthesize matrix=_matrix - In the implementation block
-(void)dealloc;
-(id)init;
-(id)description;
-(void)prepareToDraw;
-(void)setDirtyUniforms:(BOOL)arg1 ;
-(BOOL)dirtyUniforms;
-(GLKEffectPropertyTexture *)textureCubeMap;
-(int)matrixLoc;
-(void)setMatrixLoc:(int)arg1 ;
-(_GLKMatrix3)matrix;
-(void)setMatrix:(_GLKMatrix3)arg1 ;
@end

