/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSPredicate, NSString, NSArray;

@interface ASAssetQuery : NSObject {

	BOOL _queriesLocalAssetInformationOnly;
	NSPredicate* _predicate;
	double _networkTimeout;
	NSString* _assetType;
	NSArray* _results;

}

@property (nonatomic,copy) NSString * assetType;                                 //@synthesize assetType=_assetType - In the implementation block
@property (nonatomic,retain) NSArray * results;                                  //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                            //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) BOOL queriesLocalAssetInformationOnly;              //@synthesize queriesLocalAssetInformationOnly=_queriesLocalAssetInformationOnly - In the implementation block
@property (assign,nonatomic) double networkTimeout;                              //@synthesize networkTimeout=_networkTimeout - In the implementation block
+(id)queryPredicateForProperties:(id)arg1 ;
-(double)networkTimeout;
-(void)dealloc;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(id)initWithAssetType:(id)arg1 ;
-(void)setQueriesLocalAssetInformationOnly:(BOOL)arg1 ;
-(id)runQueryAndReturnError:(id*)arg1 ;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(void)setAssetType:(NSString *)arg1 ;
-(BOOL)queriesLocalAssetInformationOnly;
-(NSString *)assetType;
-(void)setNetworkTimeout:(double)arg1 ;
-(void)stopQuery;
-(void)startQuery:(/*^block*/id)arg1 ;
@end

