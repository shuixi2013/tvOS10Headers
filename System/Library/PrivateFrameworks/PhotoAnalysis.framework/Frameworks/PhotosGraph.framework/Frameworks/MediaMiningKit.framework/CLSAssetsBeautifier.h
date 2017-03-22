/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLSAssetsBeautifier : NSObject {

	BOOL _enableStatisticalSampling;
	BOOL _enableNetworkAccess;
	BOOL _enableJunk;
	double _junkThreshold;
	BOOL _enableBlurriness;
	double _blurrinessThreshold;
	BOOL _enableIntermediateNaturalClustering;
	BOOL _enableFinalNaturalClustering;
	BOOL _enableFinalTimeClustering;
	BOOL _usesVision;
	BOOL _usesKMeans;

}

@property (assign,nonatomic) BOOL enableStatisticalSampling;                        //@synthesize enableStatisticalSampling=_enableStatisticalSampling - In the implementation block
@property (assign,nonatomic) BOOL enableNetworkAccess;                              //@synthesize enableNetworkAccess=_enableNetworkAccess - In the implementation block
@property (assign,nonatomic) BOOL enableJunk;                                       //@synthesize enableJunk=_enableJunk - In the implementation block
@property (assign,nonatomic) double junkThreshold;                                  //@synthesize junkThreshold=_junkThreshold - In the implementation block
@property (assign,nonatomic) BOOL enableBlurriness;                                 //@synthesize enableBlurriness=_enableBlurriness - In the implementation block
@property (assign,nonatomic) double blurrinessThreshold;                            //@synthesize blurrinessThreshold=_blurrinessThreshold - In the implementation block
@property (assign,nonatomic) BOOL enableIntermediateNaturalClustering;              //@synthesize enableIntermediateNaturalClustering=_enableIntermediateNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalNaturalClustering;                     //@synthesize enableFinalNaturalClustering=_enableFinalNaturalClustering - In the implementation block
@property (assign,nonatomic) BOOL enableFinalTimeClustering;                        //@synthesize enableFinalTimeClustering=_enableFinalTimeClustering - In the implementation block
@property (assign,nonatomic) BOOL usesVision;                                       //@synthesize usesVision=_usesVision - In the implementation block
@property (assign,nonatomic) BOOL usesKMeans;                                       //@synthesize usesKMeans=_usesKMeans - In the implementation block
+(id)beautifier;
-(id)init;
-(/*^block*/id)hierarchicalClusteringDistanceBlock;
-(/*^block*/id)timeClusteringDistanceBlock;
-(id)bestItemInArray:(id)arg1 ;
-(id)_naturalClusteringFromDataset:(id)arg1 withThreshold:(double)arg2 timestampSupport:(BOOL)arg3 ;
-(id)sortedByDateAndIdentifier:(id)arg1 ;
-(BOOL)enableNetworkAccess;
-(id)_naturalClusteringBestItemFromDataset:(id)arg1 ;
-(id)performWithDataset:(id)arg1 maximumNumberOfItems:(unsigned long long)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)enableStatisticalSampling;
-(void)setEnableStatisticalSampling:(BOOL)arg1 ;
-(void)setEnableNetworkAccess:(BOOL)arg1 ;
-(BOOL)enableJunk;
-(void)setEnableJunk:(BOOL)arg1 ;
-(double)junkThreshold;
-(void)setJunkThreshold:(double)arg1 ;
-(BOOL)enableBlurriness;
-(void)setEnableBlurriness:(BOOL)arg1 ;
-(double)blurrinessThreshold;
-(void)setBlurrinessThreshold:(double)arg1 ;
-(BOOL)enableIntermediateNaturalClustering;
-(void)setEnableIntermediateNaturalClustering:(BOOL)arg1 ;
-(BOOL)enableFinalNaturalClustering;
-(void)setEnableFinalNaturalClustering:(BOOL)arg1 ;
-(BOOL)enableFinalTimeClustering;
-(void)setEnableFinalTimeClustering:(BOOL)arg1 ;
-(BOOL)usesVision;
-(void)setUsesVision:(BOOL)arg1 ;
-(BOOL)usesKMeans;
-(void)setUsesKMeans:(BOOL)arg1 ;
@end

