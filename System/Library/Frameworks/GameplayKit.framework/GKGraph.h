/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameplayKit.framework/GameplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameplayKit/GameplayKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray;

@interface GKGraph : NSObject <NSCopying, NSCoding> {

	NSMutableArray* _nodes;
	GKCGraph* _cGraph;
	NSMutableDictionary* __info;

}

@property (nonatomic,retain) NSMutableDictionary * _info;              //@synthesize _info=__info - In the implementation block
@property (nonatomic,readonly) NSArray * nodes; 
+(id)graph;
+(id)graphWithNodes:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableDictionary *)_info;
-(void)removeNodes:(id)arg1 ;
-(NSArray *)nodes;
-(void)addNodes:(id)arg1 ;
-(id)initWithNodes:(id)arg1 ;
-(GKCGraph*)makeCGraph;
-(GKCGraph*)cGraph;
-(id)nodesMut;
-(void)connectNodeToLowestCostNode:(id)arg1 bidirectional:(BOOL)arg2 ;
-(id)findPathFromNode:(id)arg1 toNode:(id)arg2 ;
-(void)set_info:(NSMutableDictionary *)arg1 ;
@end

