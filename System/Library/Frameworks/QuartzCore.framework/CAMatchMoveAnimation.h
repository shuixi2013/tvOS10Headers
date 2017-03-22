/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CAAnimation.h>

@class CALayer, NSString, NSArray;

@interface CAMatchMoveAnimation : CAAnimation

@property (__weak) CALayer * sourceLayer; 
@property (copy) NSString * keyPath; 
@property (assign) BOOL targetsSuperlayer; 
@property (copy) NSArray * sourcePoints; 
@property (assign) BOOL appliesX; 
@property (assign) BOOL appliesY; 
@property (assign) BOOL appliesScale; 
@property (assign) BOOL appliesRotation; 
@property (getter=isAdditive) BOOL additive; 
+(id)defaultValueForKey:(id)arg1 ;
-(unsigned)_propertyFlagsForLayer:(id)arg1 ;
-(Animation*)_copyRenderAnimationForLayer:(id)arg1 ;
-(BOOL)_setCARenderAnimation:(Animation*)arg1 layer:(id)arg2 ;
-(BOOL)targetsSuperlayer;
-(BOOL)appliesScale;
-(BOOL)appliesRotation;
-(BOOL)appliesX;
-(BOOL)appliesY;
-(void)setTargetsSuperlayer:(BOOL)arg1 ;
-(void)setAppliesX:(BOOL)arg1 ;
-(void)setAppliesY:(BOOL)arg1 ;
-(void)setAppliesScale:(BOOL)arg1 ;
-(void)setAppliesRotation:(BOOL)arg1 ;
-(NSString *)keyPath;
-(void)setAdditive:(BOOL)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(BOOL)isAdditive;
-(void)applyForTime:(double)arg1 presentationObject:(id)arg2 modelObject:(id)arg3 ;
-(void)setSourceLayer:(CALayer *)arg1 ;
-(void)setSourcePoints:(NSArray *)arg1 ;
-(CALayer *)sourceLayer;
-(NSArray *)sourcePoints;
@end

