/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/MDLTexture.h>

@interface MDLNoiseTexture : MDLTexture {

	BOOL _vectorNoise;
	float _smoothness;
	BOOL _grayScale;
	float _frequency;
	int _noiseMode;

}
-(id)generateDataAtLevel:(long long)arg1 ;
-(id)_generateCellularNoiseAtLevel:(long long)arg1 ;
-(id)initVectorNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
-(id)initScalarNoiseWithSmoothness:(float)arg1 name:(id)arg2 textureDimensions:(int)arg3 channelCount:(long long)arg4 channelEncoding:(BOOL)arg5 ;
-(id)initCellularNoiseWithFrequency:(float)arg1 name:(id)arg2 textureDimensions:(long long)arg3 ;
@end

