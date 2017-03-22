/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <PhysicsKit/PKPhysicsBody.h>

@interface PKExtendedPhysicsBody : PKPhysicsBody {

	long long _associations;
	double _areaFactor;

}

@property (assign,nonatomic) double normalizedDensity; 
+(id)bodyWithRectangleOfSize:(CGSize)arg1 ;
+(id)bodyWithRectangleOfSize:(CGSize)arg1 center:(CGPoint)arg2 ;
+(id)bodyWithCircleOfRadius:(double)arg1 ;
+(id)bodyWithEllipseInRect:(CGRect)arg1 ;
+(id)bodyWithPolygonFromPath:(CGPathRef)arg1 ;
+(id)bodyWithBodies:(id)arg1 ;
+(id)bodyWithEdgeLoopFromPath:(CGPathRef)arg1 ;
+(id)bodyWithEdgeFromPoint:(CGPoint)arg1 toPoint:(CGPoint)arg2 ;
+(id)bodyWithEdgeChainFromPath:(CGPathRef)arg1 ;
-(id)init;
-(id)description;
-(void)setNormalizedDensity:(double)arg1 ;
-(double)normalizedDensity;
-(BOOL)dissociate;
-(void)associate;
-(id)initWithRectangleOfSize:(CGSize)arg1 ;
@end

