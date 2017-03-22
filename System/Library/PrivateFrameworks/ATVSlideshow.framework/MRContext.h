/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MZMediaManagement;
#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class EAGLContext, MRImageManager, MRContextState, NSMutableDictionary, MRShader, MRImage;

@interface MRContext : NSObject {

	MRContext* mBaseContext;
	EAGLContext* mGLContext;
	CGPoint mPixelOffset;
	CGSize mPixelSize;
	int mVRAM;
	int mMaxTextureSize;
	float mFieldOfViewFactor;
	float mProjectionMatrix[16];
	int mOrientation;
	id<MZMediaManagement> mAssetManager;
	MRImageManager* mImageManager;
	BOOL mIsLocalContext;
	BOOL mIsFlipped;
	BOOL mYUVTextureUsesYUVBorderColor;
	MRContextState* mOuterState;
	MRContextState* mInnerState;
	NSMutableDictionary* mVertexAttributes;
	BOOL mCurrentVBOWasUpdated;
	BOOL mForceShaderUpdate;
	float mLocalAspectRatio;
	int mScissorRect[4];
	MRShader* mCurrentShader;
	MRImage* mTextureUnitImages[4];
	unsigned mActiveTextureUnit;
	int mRenderBuffer;
	MRImage* mBlackImage;
	int _dimensionalMode;

}

@property (readonly) MRContext * baseContext; 
@property (readonly) EAGLContext * glContext; 
@property (retain) id<MZMediaManagement> assetManager; 
@property (readonly) MRImageManager * imageManager; 
@property (readonly) CGColorSpaceRef colorSpace; 
@property (readonly) CGColorSpaceRef monochromaticColorSpace; 
@property (nonatomic,readonly) unsigned long long virtualScreen; 
@property (assign,nonatomic) CGPoint pixelOffset; 
@property (assign,nonatomic) CGSize pixelSize; 
@property (nonatomic,readonly) CGSize size; 
@property (nonatomic,readonly) float aspectRatio; 
@property (assign,nonatomic) int orientation; 
@property (assign,nonatomic) float localAspectRatio; 
@property (nonatomic,readonly) int vram; 
@property (readonly) int maxTextureSize; 
@property (assign,nonatomic) BOOL isFlipped; 
@property (nonatomic,readonly) BOOL isDoubleBuffered; 
@property (nonatomic,readonly) unsigned maxDimension; 
@property (nonatomic,readonly) const float* foreColor; 
@property (nonatomic,readonly) BOOL foreColorIsOpaqueWhite; 
@property (nonatomic,readonly) const float* backColor; 
@property (nonatomic,readonly) const float* modelViewMatrix; 
@property (nonatomic,readonly) const float* projectionMatrix; 
@property (assign,nonatomic) int dimensionalMode;                             //@synthesize dimensionalMode=_dimensionalMode - In the implementation block
-(void)finalize;
-(CGSize)size;
-(void)dealloc;
-(void)flush;
-(void)setOrientation:(int)arg1 ;
-(int)orientation;
-(void)lock;
-(void)unlock;
-(CGColorSpaceRef)colorSpace;
-(id<MZMediaManagement>)assetManager;
-(void)cleanup;
-(void)clear:(int)arg1 ;
-(float)aspectRatio;
-(const float*)modelViewMatrix;
-(const float*)foreColor;
-(const float*)backColor;
-(MRContext *)baseContext;
-(int)vram;
-(void)updateGeometry;
-(id)retainedByUserBlackImage;
-(EAGLContext *)glContext;
-(void)purgeResources:(BOOL)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(id)initLocalWithContext:(id)arg1 texture:(id)arg2 andSize:(CGSize)arg3 ;
-(void)setBackColor:(const float*)arg1 saveTo:(float*)arg2 ;
-(void)setScissorRect:(const int*)arg1 saveTo:(int*)arg2 ;
-(void)setForeColor:(const float*)arg1 saveTo:(float*)arg2 ;
-(void)setTextureMatrix:(float)arg1 onTextureUnit:(unsigned long long)arg2 ;
-(void)setShader:(id)arg1 ;
-(void)setShaderUniformInt:(int)arg1 forKey:(id)arg2 ;
-(void)setShaderUniformVec2:(float)arg1 :(float)arg2 forKey:(id)arg3 ;
-(void)setShaderUniformVec4:(float)arg1 :(float)arg2 :(float)arg3 :(float)arg4 forKey:(id)arg5 ;
-(void)setShaderUniformFloat:(float)arg1 forKey:(id)arg2 ;
-(void)_commitOuterToInner;
-(void)unsetShader;
-(void)_updateTextureOnUnit:(unsigned long long)arg1 ;
-(void)setNormal:(float)arg1 :(float)arg2 :(float)arg3 ;
-(void)setModelViewMatrix:(float)arg1 saveTo:(float*)arg2 ;
-(BOOL)commitShaderChange;
-(id)initWithEAGLContext:(id)arg1 andAssetManager:(id)arg2 ;
-(id)initLocalWithContext:(id)arg1 glContext:(id)arg2 andSize:(CGSize)arg3 ;
-(void)setDimensionalMode:(int)arg1 ;
-(CGColorSpaceRef)monochromaticColorSpace;
-(BOOL)isDoubleBuffered;
-(unsigned long long)virtualScreen;
-(unsigned)maxDimension;
-(id)beginLocalContextWithSize:(CGSize)arg1 backgroundColor:(const float*)arg2 state:(SCD_Struct_MR8*)arg3 ;
-(id)retainedByUserImageByEndingLocalContext:(id)arg1 andRestoreState:(const SCD_Struct_MR8*)arg2 ;
-(void)setIsFlipped:(BOOL)arg1 ;
-(void)blend:(int)arg1 ;
-(void)cull:(int)arg1 ;
-(void)depthTest:(BOOL)arg1 ;
-(void)restoreScissorRect:(const int*)arg1 ;
-(BOOL)foreColorIsOpaqueWhite;
-(void)setForeColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float*)arg5 ;
-(void)composeForeColor:(const float*)arg1 saveTo:(float*)arg2 ;
-(void)composeForeColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float*)arg5 ;
-(void)restoreForeColor:(const float*)arg1 ;
-(void)setBackColorRed:(float)arg1 green:(float)arg2 blue:(float)arg3 alpha:(float)arg4 saveTo:(float*)arg5 ;
-(void)restoreBackColor:(const float*)arg1 ;
-(void)setImage:(id)arg1 onTextureUnit:(unsigned long long)arg2 withReferenceAspectRatio:(float)arg3 state:(SCD_Struct_MR9*)arg4 ;
-(void)unsetImage:(id)arg1 onTextureUnit:(unsigned long long)arg2 state:(const SCD_Struct_MR9*)arg3 ;
-(id)imageSetOnTextureUnit:(unsigned long long)arg1 ;
-(BOOL)shaderIsSet;
-(void)setShaderUniformVec3:(float)arg1 :(float)arg2 :(float)arg3 forKey:(id)arg4 ;
-(void)setShaderUniformMat3:(float)arg1 forKey:(id)arg2 ;
-(void)setShaderUniformMat4:(float)arg1 forKey:(id)arg2 ;
-(const float*)projectionMatrix;
-(void)composeModelViewMatrix:(float)arg1 saveTo:(float*)arg2 ;
-(void)translateModelViewMatrixByX:(float)arg1 Y:(float)arg2 Z:(float)arg3 saveTo:(float*)arg4 ;
-(void)restoreModelViewMatrix:(float)arg1 ;
-(void)setVertexBuffer2D:(unsigned)arg1 withStride:(unsigned long long)arg2 inSpriteCoordinatesOffset:(unsigned long long)arg3 texture0CoordinatesOffset:(unsigned long long)arg4 ;
-(void)setVertexBuffer2D:(unsigned)arg1 withFeatures:(unsigned long long)arg2 ;
-(void)setVertex2DPointer:(const float*)arg1 ;
-(void)setVertex3DPointer:(const float*)arg1 ;
-(void)setNormalsPointer:(const float*)arg1 ;
-(void)setColorsPointer:(const float*)arg1 ;
-(void)setTextureCoordinatesPointer:(const float*)arg1 onTextureUnit:(unsigned long long)arg2 ;
-(void)setInSpriteCoordinatesPointer:(const float*)arg1 ;
-(void)setVertexAttributePointer:(const float*)arg1 ofSize:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)unsetVertexPointer;
-(void)unsetNormalsPointer;
-(void)unsetColorsPointer;
-(void)unsetTextureCoordinatesPointerOnTextureUnit:(unsigned long long)arg1 ;
-(void)unsetInSpriteCoordinatesPointer;
-(void)unsetVertexAttributePointerForKey:(id)arg1 ;
-(unsigned)createVBO;
-(void)deleteVBO:(unsigned)arg1 ;
-(void)uploadBuffer:(void*)arg1 withSize:(int)arg2 toVertexBuffer2D:(unsigned)arg3 ;
-(void)drawTriangleStripFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)drawTrianglesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(void)drawLinesFromOffset:(unsigned long long)arg1 count:(unsigned long long)arg2 ;
-(BOOL)supportsMirroredRepeatForImage:(id)arg1 ;
-(CGPoint)pixelOffset;
-(void)setPixelOffset:(CGPoint)arg1 ;
-(float)localAspectRatio;
-(void)setLocalAspectRatio:(float)arg1 ;
-(BOOL)isFlipped;
-(int)maxTextureSize;
-(int)dimensionalMode;
-(MRImageManager *)imageManager;
-(void)setAssetManager:(id<MZMediaManagement>)arg1 ;
-(CGSize)pixelSize;
@end

