/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaMiningKit/CSLClassifier.h>

@class NSMutableDictionary;

@interface CSLNBClassifier : CSLClassifier {

	BOOL _fitPrior;
	int _trainingCount;
	int _featureCount;
	int _biasWeight;
	NSMutableDictionary* _featureOccurrences;
	NSMutableDictionary* _categoryOccurrences;
	NSMutableDictionary* _categoryOccurrencesAllFeatures;
	NSMutableDictionary* _bias;

}

@property (nonatomic,retain) NSMutableDictionary * featureOccurrences;                          //@synthesize featureOccurrences=_featureOccurrences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * categoryOccurrences;                         //@synthesize categoryOccurrences=_categoryOccurrences - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * categoryOccurrencesAllFeatures;              //@synthesize categoryOccurrencesAllFeatures=_categoryOccurrencesAllFeatures - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bias;                                        //@synthesize bias=_bias - In the implementation block
@property (assign) int trainingCount;                                                           //@synthesize trainingCount=_trainingCount - In the implementation block
@property (assign) int featureCount;                                                            //@synthesize featureCount=_featureCount - In the implementation block
@property (assign) int biasWeight;                                                              //@synthesize biasWeight=_biasWeight - In the implementation block
@property (assign) BOOL fitPrior;                                                               //@synthesize fitPrior=_fitPrior - In the implementation block
+(id)meanOf:(id)arg1 ;
+(id)standardDeviationOf:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)bias;
-(id)initFromFile:(id)arg1 ;
-(id)classifyFeatureVector:(id)arg1 ;
-(id)bestCategoriesFromPredictions:(id)arg1 ;
-(void)setBias:(NSMutableDictionary *)arg1 ;
-(void)trainOnFeatureVectors:(id)arg1 ;
-(BOOL)writeModelToFile:(id)arg1 ;
-(BOOL)readModelFromFile:(id)arg1 ;
-(id)getDocumentFrequencyFrom:(id)arg1 ;
-(id)getMaxTfFrom:(id)arg1 ;
-(NSMutableDictionary *)featureOccurrences;
-(int)featureCount;
-(void)setFeatureCount:(int)arg1 ;
-(NSMutableDictionary *)categoryOccurrencesAllFeatures;
-(NSMutableDictionary *)categoryOccurrences;
-(int)biasWeight;
-(void)incrementFeature:(id)arg1 category:(id)arg2 value:(id)arg3 ;
-(void)incrementCategory:(id)arg1 ;
-(int)trainingCount;
-(void)setTrainingCount:(int)arg1 ;
-(void)trainWithSingleFeatureVector:(id)arg1 ;
-(BOOL)fitPrior;
-(float)pCategory:(id)arg1 ;
-(int)countCategory:(id)arg1 andFeatureID:(id)arg2 ;
-(int)countAllFeaturesWithCategory:(id)arg1 ;
-(void)setFeatureOccurrences:(NSMutableDictionary *)arg1 ;
-(void)setCategoryOccurrences:(NSMutableDictionary *)arg1 ;
-(void)setCategoryOccurrencesAllFeatures:(NSMutableDictionary *)arg1 ;
-(void)setFitPrior:(BOOL)arg1 ;
-(void)setBiasWeight:(int)arg1 ;
-(void)doNotFitPrior;
-(void)doNotBiasModel;
@end

