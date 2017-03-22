/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray;

@interface GKBehavior : NSObject <NSFastEnumeration, NSCopying> {

	NSMutableArray* _goals;
	NSMutableArray* _weights;

}

@property (readonly) long long goalCount; 
+(id)behaviorWithGoal:(id)arg1 weight:(float)arg2 ;
+(id)behaviorWithGoals:(id)arg1 ;
+(id)behaviorWithGoals:(id)arg1 andWeights:(id)arg2 ;
+(id)behaviorWithWeightedGoals:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_GK6*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(3)getTotalForce:(double)arg1 agent:(id)arg2 ;
-(long long)goalCount;
-(float)weightForGoal:(id)arg1 ;
-(id)initWithGoal:(id)arg1 weight:(float)arg2 ;
-(void)setWeight:(float)arg1 forGoal:(id)arg2 ;
-(id)initWithGoals:(id)arg1 ;
-(id)initWithGoals:(id)arg1 andWeights:(id)arg2 ;
-(id)initWithWeightedGoals:(id)arg1 ;
-(id)goals;
-(void)removeGoal:(id)arg1 ;
-(void)removeAllGoals;
-(id)weights;
@end

