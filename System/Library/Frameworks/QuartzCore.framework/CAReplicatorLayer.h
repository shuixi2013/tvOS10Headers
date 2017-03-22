/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CAReplicatorLayer : CALayer

@property (assign) long long instanceCount; 
@property (assign) BOOL preservesDepth; 
@property (assign) double instanceDelay; 
@property (assign) CATransform3D instanceTransform; 
@property (assign) CGColorRef instanceColor; 
@property (assign) float instanceRedOffset; 
@property (assign) float instanceGreenOffset; 
@property (assign) float instanceBlueOffset; 
@property (assign) float instanceAlphaOffset; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(BOOL)preservesDepth;
-(BOOL)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(void)setPreservesDepth:(BOOL)arg1 ;
-(void)_renderSublayersInContext:(CGContextRef)arg1 ;
-(double)instanceDelay;
-(CGColorRef)instanceColor;
-(float)instanceRedOffset;
-(float)instanceGreenOffset;
-(float)instanceBlueOffset;
-(float)instanceAlphaOffset;
-(void)setInstanceDelay:(double)arg1 ;
-(void)setInstanceRedOffset:(float)arg1 ;
-(void)setInstanceGreenOffset:(float)arg1 ;
-(void)setInstanceBlueOffset:(float)arg1 ;
-(id)init;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(void)setInstanceCount:(long long)arg1 ;
-(void)setInstanceTransform:(CATransform3D)arg1 ;
-(void)setInstanceAlphaOffset:(float)arg1 ;
-(void)setInstanceColor:(CGColorRef)arg1 ;
-(CATransform3D)instanceTransform;
-(long long)instanceCount;
@end

