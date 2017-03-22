/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVSlideshow/ATVSlideshow-Structs.h>
#import <ATVSlideshow/MREffect.h>

@class MRImageProvider, NSMutableDictionary;

@interface MREffectScrapbook_Old : MREffect {

	MRImageProvider* mImageProviders[7];
	MRImageProvider* mBackgroundImageProvider;
	NSMutableDictionary* mSprites;
	unsigned long long mNumberOfVertices;
	float* mMeshVertices;
	float* mMeshTextureVertices;
	float mLocalTranslationX;
	float mLocalTranslationY;
	float mZoomScale;
	double mPhaseTime;

}
+(void)initialize;
+(void)renderImage:(id)arg1 withFrame:(id)arg2 andMask:(id)arg3 usingSprite:(id)arg4 inContext:(id)arg5 ;
+(void)renderDumbImage:(id)arg1 inContext:(id)arg2 atPosition:(CGPoint)arg3 andSize:(CGSize)arg4 zRotation:(float)arg5 withBorderRect:(CGRect)arg6 ;
-(BOOL)isOpaque;
-(void)_cleanup;
-(id)initWithEffectID:(id)arg1 ;
-(void)setPixelSize:(CGSize)arg1 ;
-(void)_unload;
-(void)renderAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)prerenderForTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(BOOL)isAlphaFriendly;
-(id)elementHitAtPoint:(CGPoint)arg1 withInverseMatrix:(float)arg2 localPoint:(CGPoint*)arg3 ;
-(BOOL)getVerticesCoordinates:(CGPoint*)arg1 withMatrix:(float)arg2 forElement:(id)arg3 ;
-(void)renderEffect2AtTime:(double)arg1 movieVersion:(BOOL)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect3AtTime:(double)arg1 movieVersion:(BOOL)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect4AtTime:(double)arg1 movieVersion:(BOOL)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect5AtTime:(double)arg1 movieVersion:(BOOL)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect6AtTime:(double)arg1 movieVersion:(BOOL)arg2 inContext:(id)arg3 withArguments:(id)arg4 ;
-(void)renderEffect7AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderEffect8AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderEffect9AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderEffect10AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderEffect1AtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 ;
-(void)renderBackgroundAtTime:(double)arg1 inContext:(id)arg2 withArguments:(id)arg3 subtractingSprites:(id)arg4 withTranslation:(CGPoint)arg5 andScale:(double)arg6 ;
@end

