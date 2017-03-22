/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSSet, PLMomentNodeCache, CLGeocoder, NSMutableDictionary;

@interface PLMomentClustering : NSObject {

	BOOL _dirty;
	BOOL _shouldApplyUserInfluenceBeforeClustering;
	BOOL _accumulatesSmallClusters;
	BOOL _spatialJoinsAdjacentClusters;
	/*^block*/id _progressBlock;
	NSArray* _clusters;
	NSSet* _insertedClusters;
	NSSet* _updatedClusters;
	NSSet* _deletedClusters;
	double _sigma;
	double _theta;
	unsigned long long _accumulationSize;
	double _accumulationTimeInterval;
	double _accumulationJoinThreshold;
	double _accumulationRejectionThreshold;
	double _accumulationRejectionTimeInterval;
	double _spatialJoinTimeInterval;
	double _spatialJoinThreshold;
	unsigned long long __minimumNumberOfNodes;
	unsigned long long __numberOfVisitedNodes;
	unsigned long long __totalNumberOfNodes;
	PLMomentNodeCache* __nodeCache;
	CLGeocoder* __geocoder;
	NSMutableDictionary* __markedNodesByObjectID;
	NSMutableDictionary* __clustersByObjectID;
	NSMutableDictionary* __clustersByNodeObjectID;

}

@property (assign,nonatomic) double sigma;                                                                           //@synthesize sigma=_sigma - In the implementation block
@property (assign,nonatomic) double theta;                                                                           //@synthesize theta=_theta - In the implementation block
@property (assign,setter=_setDirty:,getter=isDirty,nonatomic) BOOL dirty;                                            //@synthesize dirty=_dirty - In the implementation block
@property (setter=_setClusters:,nonatomic,copy) NSArray * clusters;                                                  //@synthesize clusters=_clusters - In the implementation block
@property (assign,nonatomic) BOOL shouldApplyUserInfluenceBeforeClustering;                                          //@synthesize shouldApplyUserInfluenceBeforeClustering=_shouldApplyUserInfluenceBeforeClustering - In the implementation block
@property (assign,nonatomic) BOOL accumulatesSmallClusters;                                                          //@synthesize accumulatesSmallClusters=_accumulatesSmallClusters - In the implementation block
@property (assign,nonatomic) unsigned long long accumulationSize;                                                    //@synthesize accumulationSize=_accumulationSize - In the implementation block
@property (assign,nonatomic) double accumulationTimeInterval;                                                        //@synthesize accumulationTimeInterval=_accumulationTimeInterval - In the implementation block
@property (assign,nonatomic) double accumulationJoinThreshold;                                                       //@synthesize accumulationJoinThreshold=_accumulationJoinThreshold - In the implementation block
@property (assign,nonatomic) double accumulationRejectionThreshold;                                                  //@synthesize accumulationRejectionThreshold=_accumulationRejectionThreshold - In the implementation block
@property (assign,nonatomic) double accumulationRejectionTimeInterval;                                               //@synthesize accumulationRejectionTimeInterval=_accumulationRejectionTimeInterval - In the implementation block
@property (assign,nonatomic) BOOL spatialJoinsAdjacentClusters;                                                      //@synthesize spatialJoinsAdjacentClusters=_spatialJoinsAdjacentClusters - In the implementation block
@property (assign,nonatomic) double spatialJoinTimeInterval;                                                         //@synthesize spatialJoinTimeInterval=_spatialJoinTimeInterval - In the implementation block
@property (assign,nonatomic) double spatialJoinThreshold;                                                            //@synthesize spatialJoinThreshold=_spatialJoinThreshold - In the implementation block
@property (assign,setter=_setMinimumNumberOfNodes:,nonatomic) unsigned long long _minimumNumberOfNodes;              //@synthesize _minimumNumberOfNodes=__minimumNumberOfNodes - In the implementation block
@property (assign,setter=_setNumberOfVisitedNodes:,nonatomic) unsigned long long _numberOfVisitedNodes;              //@synthesize _numberOfVisitedNodes=__numberOfVisitedNodes - In the implementation block
@property (assign,setter=_setTotalNumberOfNodes:,nonatomic) unsigned long long _totalNumberOfNodes;                  //@synthesize _totalNumberOfNodes=__totalNumberOfNodes - In the implementation block
@property (nonatomic,readonly) PLMomentNodeCache * _nodeCache;                                                       //@synthesize _nodeCache=__nodeCache - In the implementation block
@property (nonatomic,readonly) CLGeocoder * _geocoder;                                                               //@synthesize _geocoder=__geocoder - In the implementation block
@property (nonatomic,readonly) BOOL hasMarkedNodes; 
@property (nonatomic,readonly) NSMutableDictionary * _markedNodesByObjectID;                                         //@synthesize _markedNodesByObjectID=__markedNodesByObjectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByObjectID;                                            //@synthesize _clustersByObjectID=__clustersByObjectID - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * _clustersByNodeObjectID;                                        //@synthesize _clustersByNodeObjectID=__clustersByNodeObjectID - In the implementation block
@property (setter=_setInsertedClusters:,nonatomic,copy) NSSet * insertedClusters;                                    //@synthesize insertedClusters=_insertedClusters - In the implementation block
@property (setter=_setUpdatedClusters:,nonatomic,copy) NSSet * updatedClusters;                                      //@synthesize updatedClusters=_updatedClusters - In the implementation block
@property (setter=_setDeletedClusters:,nonatomic,copy) NSSet * deletedClusters;                                      //@synthesize deletedClusters=_deletedClusters - In the implementation block
@property (nonatomic,copy) id progressBlock;                                                                         //@synthesize progressBlock=_progressBlock - In the implementation block
+(double)maximumClusterTime;
-(void)dealloc;
-(id)init;
-(NSArray *)clusters;
-(id)progressBlock;
-(void)_commonPLMomentClusteringManagerInitialization;
-(void)_setDirty:(BOOL)arg1 ;
-(BOOL)hasMarkedNodes;
-(void)_setNumberOfVisitedNodes:(unsigned long long)arg1 ;
-(void)_setTotalNumberOfNodes:(unsigned long long)arg1 ;
-(PLMomentNodeCache *)_nodeCache;
-(NSMutableDictionary *)_clustersByObjectID;
-(NSMutableDictionary *)_clustersByNodeObjectID;
-(double)sigma;
-(double)theta;
-(id)clustersWithNodes:(id)arg1 sigma:(double)arg2 theta:(double)arg3 ;
-(id)spatialJoinClustersFromClusters:(id)arg1 ;
-(id)accumulateSmallClustersFromClusters:(id)arg1 ;
-(id)clustersByApplyingUserInfluenceToClusters:(id)arg1 ;
-(NSMutableDictionary *)_markedNodesByObjectID;
-(void)_setInsertedClusters:(id)arg1 ;
-(void)_setUpdatedClusters:(id)arg1 ;
-(void)_setDeletedClusters:(id)arg1 ;
-(void)_setClusters:(id)arg1 ;
-(unsigned long long)_minimumNumberOfNodes;
-(id)neighborsOfNode:(id)arg1 ;
-(unsigned long long)_numberOfVisitedNodes;
-(unsigned long long)_totalNumberOfNodes;
-(BOOL)shouldApplyUserInfluenceBeforeClustering;
-(id)neighborsOfTaggedNode:(id)arg1 ;
-(id)temporalSnapshotOfNode:(id)arg1 withRange:(double)arg2 ;
-(BOOL)accumulatesSmallClusters;
-(double)accumulationTimeInterval;
-(unsigned long long)accumulationSize;
-(double)accumulationJoinThreshold;
-(double)accumulationRejectionTimeInterval;
-(double)accumulationRejectionThreshold;
-(BOOL)spatialJoinsAdjacentClusters;
-(double)spatialJoinTimeInterval;
-(double)spatialJoinThreshold;
-(id)_clustersBySplittingUserInfluencedClusters:(id)arg1 ;
-(id)_clustersByMergingUserInfluencedClusters:(id)arg1 ;
-(id)initWithManagedMoments:(id)arg1 ;
-(void)setSigma:(double)arg1 ;
-(void)setTheta:(double)arg1 ;
-(id)generateClustersForAssets:(id)arg1 ;
-(void)generateClustersForAssets:(id)arg1 withCompletionBlock:(/*^block*/id)arg2 ;
-(void)markNodeForDiagnosis:(id)arg1 ;
-(void)setProgressBlock:(id)arg1 ;
-(NSSet *)insertedClusters;
-(NSSet *)updatedClusters;
-(NSSet *)deletedClusters;
-(BOOL)isDirty;
-(void)setShouldApplyUserInfluenceBeforeClustering:(BOOL)arg1 ;
-(void)setAccumulatesSmallClusters:(BOOL)arg1 ;
-(void)setAccumulationSize:(unsigned long long)arg1 ;
-(void)setAccumulationTimeInterval:(double)arg1 ;
-(void)setAccumulationJoinThreshold:(double)arg1 ;
-(void)setAccumulationRejectionThreshold:(double)arg1 ;
-(void)setAccumulationRejectionTimeInterval:(double)arg1 ;
-(void)setSpatialJoinsAdjacentClusters:(BOOL)arg1 ;
-(void)setSpatialJoinTimeInterval:(double)arg1 ;
-(void)setSpatialJoinThreshold:(double)arg1 ;
-(void)_setMinimumNumberOfNodes:(unsigned long long)arg1 ;
-(CLGeocoder *)_geocoder;
@end

