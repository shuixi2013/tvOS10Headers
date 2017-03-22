/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSMutableDictionary;

@interface MRContextState : NSObject {

	float modelViewMatrix[16];
	float textureMatrix[4][16];
	float normal[3];
	unsigned currentVBO;
	int currentVBOStride;
	int inSpriteCoordinatesStride;
	int textureCoordinatesStride[4];
	const float* vertex2DPointer;
	const float* vertex3DPointer;
	const float* colorsPointer;
	const float* normalsPointer;
	float* textureCoordinatesPointer[4];
	const float* inSpriteCoordinatesPointer;
	BOOL vertexArrayIsEnabled;
	BOOL foreColorArrayIsEnabled;
	BOOL normalArrayIsEnabled;
	BOOL textureCoordinatesArrayIsEnabled[4];
	BOOL inSpriteCoordinatesArrayIsEnabled;
	float foreColor[4];
	float backColor[4];
	unsigned textureTargetOnUnit[4];
	unsigned textureNameOnUnit[4];
	double textureTimestampOnUnit[4];
	BOOL blendingIsEnabled;
	int blendingType;
	BOOL cullingIsEnabled;
	BOOL cullFrontfacing;
	BOOL depthTestIsEnabled;
	NSString* _shaderID;
	NSDictionary* _shaderArguments;
	NSMutableDictionary* _vertexAttributes;
	NSMutableDictionary* _temporaryUniforms;

}

@property (copy) NSString * shaderID;                                      //@synthesize shaderID=_shaderID - In the implementation block
@property (copy) NSDictionary * shaderArguments;                           //@synthesize shaderArguments=_shaderArguments - In the implementation block
@property (readonly) NSMutableDictionary * vertexAttributes;               //@synthesize vertexAttributes=_vertexAttributes - In the implementation block
@property (readonly) NSMutableDictionary * temporaryUniforms;              //@synthesize temporaryUniforms=_temporaryUniforms - In the implementation block
-(void)dealloc;
-(id)init;
-(NSString *)shaderID;
-(void)setShaderID:(NSString *)arg1 ;
-(NSDictionary *)shaderArguments;
-(void)setShaderArguments:(NSDictionary *)arg1 ;
-(NSMutableDictionary *)vertexAttributes;
-(NSMutableDictionary *)temporaryUniforms;
@end

