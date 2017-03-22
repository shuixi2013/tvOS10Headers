/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PGGraphNode, NSSet, NSDate;

@interface PGGraphMatchingContextItem : NSObject {

	double _score;
	unsigned long long _relatedType;
	unsigned long long _criteria;
	PGGraphNode* _referenceNode;
	PGGraphNode* _matchedNode;
	NSSet* _contextNodes;
	NSDate* _localStartDate;
	NSDate* _localEndDate;

}

@property (nonatomic,readonly) PGGraphNode * referenceNode;                 //@synthesize referenceNode=_referenceNode - In the implementation block
@property (nonatomic,readonly) PGGraphNode * matchedNode;                   //@synthesize matchedNode=_matchedNode - In the implementation block
@property (nonatomic,readonly) NSSet * contextNodes;                        //@synthesize contextNodes=_contextNodes - In the implementation block
@property (nonatomic,readonly) unsigned long long relatedType;              //@synthesize relatedType=_relatedType - In the implementation block
@property (assign,nonatomic) double score;                                  //@synthesize score=_score - In the implementation block
@property (assign,nonatomic) unsigned long long criteria;                   //@synthesize criteria=_criteria - In the implementation block
@property (nonatomic,readonly) NSDate * localStartDate;                     //@synthesize localStartDate=_localStartDate - In the implementation block
@property (nonatomic,readonly) NSDate * localEndDate;                       //@synthesize localEndDate=_localEndDate - In the implementation block
+(id)contextItemWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6 ;
+(unsigned long long)criteriaForLocationLabel:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(void)setScore:(double)arg1 ;
-(double)score;
-(unsigned long long)criteria;
-(void)setCriteria:(unsigned long long)arg1 ;
-(NSDate *)localStartDate;
-(NSDate *)localEndDate;
-(NSSet *)contextNodes;
-(unsigned long long)relatedType;
-(id)initWithRelatedType:(unsigned long long)arg1 score:(double)arg2 criteria:(unsigned long long)arg3 referenceNode:(id)arg4 matchedNode:(id)arg5 contextNodes:(id)arg6 ;
-(void)_findLocalStartAndEndDate;
-(PGGraphNode *)matchedNode;
-(BOOL)isEqualToContextItem:(id)arg1 ;
-(id)_matchedAddressNode;
-(PGGraphNode *)referenceNode;
@end

