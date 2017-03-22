/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary;

@interface CSLClassifier : NSObject {

	BOOL _tfidf;
	BOOL _scaling;
	NSString* _key;
	NSArray* _maxTf;
	NSDictionary* _df;

}

@property (retain) NSString * key;                 //@synthesize key=_key - In the implementation block
@property (retain) NSArray * maxTf;                //@synthesize maxTf=_maxTf - In the implementation block
@property (retain) NSDictionary * df;              //@synthesize df=_df - In the implementation block
@property (assign) BOOL tfidf;                     //@synthesize tfidf=_tfidf - In the implementation block
@property (assign) BOOL scaling;                   //@synthesize scaling=_scaling - In the implementation block
+(long long)eventTypeForIdentifier:(id)arg1 ;
+(id)identifierForEventType:(long long)arg1 ;
-(id)init;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setScaling:(BOOL)arg1 ;
-(BOOL)scaling;
-(id)initWithKey:(id)arg1 ;
-(id)classifyFeatureVector:(id)arg1 ;
-(id)bestCategoriesFromPredictions:(id)arg1 ;
-(void)trainOnFeatureVectors:(id)arg1 ;
-(id)meanOf:(id)arg1 ;
-(NSDictionary *)df;
-(float)evaluateOnTestingVectors:(id)arg1 ;
-(id)standardDeviationOf:(id)arg1 ;
-(id)getDocumentFrequencyFrom:(id)arg1 ;
-(id)getMaxTfFrom:(id)arg1 ;
-(float)getTfIdfForFeature:(id)arg1 maxTf:(float)arg2 sizeCorpus:(int)arg3 frequency:(float)arg4 ;
-(NSArray *)maxTf;
-(void)setMaxTf:(NSArray *)arg1 ;
-(void)setDf:(NSDictionary *)arg1 ;
-(BOOL)tfidf;
-(void)setTfidf:(BOOL)arg1 ;
@end

