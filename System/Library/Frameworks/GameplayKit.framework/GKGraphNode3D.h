/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraphNode.h>

@interface GKGraphNode3D : GKGraphNode {

	GKCGraphNode3D* _cGraphNode3D;

}

@property (assign,nonatomic)  position; 
+(id)nodeWithPoint:;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setPosition:;
-()position;
-(float)costToNode:(id)arg1 ;
-(float)estimatedCostToNode:(id)arg1 ;
-(id)initWithPoint:;
-(void)deleteCGraphNode;
-(GKCGraphNode*)makeCGraphNode;
-(GKCGraphNode3D*)cGraphNode3D;
@end

