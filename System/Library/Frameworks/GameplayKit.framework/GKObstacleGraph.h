/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <GameplayKit/GKGraph.h>

@class NSMutableArray, NSArray;

@interface GKObstacleGraph : GKGraph {

	NSMutableArray* _sourceObstacles;
	GKCObstacleGraph* _cObstacleGraph;
	Class _nodeClass;

}

@property (nonatomic,readonly) NSArray * obstacles; 
@property (nonatomic,readonly) float bufferRadius; 
+(id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
+(id)graphWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(float)bufferRadius;
-(GKCGraph*)makeCGraph;
-(NSArray *)obstacles;
-(void)addObstacles:(id)arg1 ;
-(void)removeObstacles:(id)arg1 ;
-(void)connectNodeUsingObstacles:(id)arg1 ;
-(Class)classForGenericArgumentAtIndex:(unsigned long long)arg1 ;
-(id)mutObstacles;
-(id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 ;
-(id)initWithObstacles:(id)arg1 bufferRadius:(float)arg2 nodeClass:(Class)arg3 ;
-(GKCObstacleGraph*)cObstacleGraph;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringObstacles:(id)arg2 ;
-(void)connectNodeUsingObstacles:(id)arg1 ignoringBufferRadiusOfObstacles:(id)arg2 ;
-(void)removeAllObstacles;
-(id)nodesForObstacle:(id)arg1 ;
-(void)lockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)unlockConnectionFromNode:(id)arg1 toNode:(id)arg2 ;
-(BOOL)isConnectionLockedFromNode:(id)arg1 toNode:(id)arg2 ;
-(Class)nodeClass;
@end

