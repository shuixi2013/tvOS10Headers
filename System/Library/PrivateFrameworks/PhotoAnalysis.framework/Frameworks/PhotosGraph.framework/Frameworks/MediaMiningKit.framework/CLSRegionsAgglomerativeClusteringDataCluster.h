/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CLSRegionsAgglomerativeClusteringDataCluster : NSObject {

	NSArray* _vectors;
	double _latitude;
	double _longitude;
	double _radius;
	double _score;

}

@property (readonly) NSArray * vectors;                     //@synthesize vectors=_vectors - In the implementation block
@property (assign,nonatomic) double latitude;               //@synthesize latitude=_latitude - In the implementation block
@property (assign,nonatomic) double longitude;              //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) double radius;                 //@synthesize radius=_radius - In the implementation block
@property (assign,nonatomic) double score;                  //@synthesize score=_score - In the implementation block
+(id)dataClusterWithDataVector:(id)arg1 ;
+(id)mergedClusterFrom:(id)arg1 ;
-(id)description;
-(void)setRadius:(double)arg1 ;
-(double)radius;
-(void)setScore:(double)arg1 ;
-(double)score;
-(double)latitude;
-(double)longitude;
-(void)setLatitude:(double)arg1 ;
-(void)setLongitude:(double)arg1 ;
-(id)initWithDataVector:(id)arg1 ;
-(NSArray *)vectors;
@end

