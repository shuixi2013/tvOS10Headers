/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GKNoiseSource.h>

@interface GKCoherentNoiseSource : GKNoiseSource {

	int _seed;
	double _frequency;
	long long _octaveCount;
	double _lacunarity;

}

@property (assign,nonatomic) double frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (assign,nonatomic) long long octaveCount;              //@synthesize octaveCount=_octaveCount - In the implementation block
@property (assign,nonatomic) double lacunarity;                  //@synthesize lacunarity=_lacunarity - In the implementation block
@property (assign,nonatomic) int seed;                           //@synthesize seed=_seed - In the implementation block
-(double)frequency;
-(void)setFrequency:(double)arg1 ;
-(int)seed;
-(double)valueAt:;
-(id)cloneModule;
-(void)setOctaveCount:(long long)arg1 ;
-(void)setLacunarity:(double)arg1 ;
-(long long)octaveCount;
-(double)lacunarity;
-(void)setSeed:(int)arg1 ;
@end

