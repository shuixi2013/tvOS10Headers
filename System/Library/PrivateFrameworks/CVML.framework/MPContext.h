/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MPContext : NSObject {

	BOOL _useTimestampAdjustedDistances;
	BOOL _performClustersPostprocessing;
	BOOL _performSceneClassification;
	int _debugMode;
	int _timerMode;
	int _clusterSplitDistanceType;
	float _roiAreaThreshold;
	float _inliersRatioThreshold;
	int _numberOfKeypointsToConsider;
	float _naturalClusteringDistanceThreshold;
	NSArray* _qualityCriteriaList;

}

@property (assign) int debugMode;                                         //@synthesize debugMode=_debugMode - In the implementation block
@property (assign) int timerMode;                                         //@synthesize timerMode=_timerMode - In the implementation block
@property (assign) int clusterSplitDistanceType;                          //@synthesize clusterSplitDistanceType=_clusterSplitDistanceType - In the implementation block
@property (retain) NSArray * qualityCriteriaList;                         //@synthesize qualityCriteriaList=_qualityCriteriaList - In the implementation block
@property (assign) BOOL useTimestampAdjustedDistances;                    //@synthesize useTimestampAdjustedDistances=_useTimestampAdjustedDistances - In the implementation block
@property (assign) BOOL performClustersPostprocessing;                    //@synthesize performClustersPostprocessing=_performClustersPostprocessing - In the implementation block
@property (assign) BOOL performSceneClassification;                       //@synthesize performSceneClassification=_performSceneClassification - In the implementation block
@property (assign) float roiAreaThreshold;                                //@synthesize roiAreaThreshold=_roiAreaThreshold - In the implementation block
@property (assign) float inliersRatioThreshold;                           //@synthesize inliersRatioThreshold=_inliersRatioThreshold - In the implementation block
@property (assign) int numberOfKeypointsToConsider;                       //@synthesize numberOfKeypointsToConsider=_numberOfKeypointsToConsider - In the implementation block
@property (assign) float naturalClusteringDistanceThreshold;              //@synthesize naturalClusteringDistanceThreshold=_naturalClusteringDistanceThreshold - In the implementation block
-(void)setDebugMode:(int)arg1 ;
-(void)setTimerMode:(int)arg1 ;
-(void)setQualityCriteriaList:(NSArray *)arg1 ;
-(void)setClusterSplitDistanceType:(int)arg1 ;
-(void)setUseTimestampAdjustedDistances:(BOOL)arg1 ;
-(void)setPerformClustersPostprocessing:(BOOL)arg1 ;
-(void)setPerformSceneClassification:(BOOL)arg1 ;
-(void)setRoiAreaThreshold:(float)arg1 ;
-(void)setInliersRatioThreshold:(float)arg1 ;
-(void)setNumberOfKeypointsToConsider:(int)arg1 ;
-(void)setNaturalClusteringDistanceThreshold:(float)arg1 ;
-(NSArray *)qualityCriteriaList;
-(BOOL)useTimestampAdjustedDistances;
-(int)clusterSplitDistanceType;
-(float)naturalClusteringDistanceThreshold;
-(int)timerMode;
-(int)debugMode;
-(BOOL)performClustersPostprocessing;
-(BOOL)performSceneClassification;
-(float)roiAreaThreshold;
-(float)inliersRatioThreshold;
-(int)numberOfKeypointsToConsider;
@end

