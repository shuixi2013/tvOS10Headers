/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLSSocialService, NSString;

@interface CLSRatingService : NSObject {

	BOOL _internetRequired;
	CLSSocialService* _socialService;
	NSString* _name;
	float _weight;

}

@property (nonatomic,retain) NSString * name;                                              //@synthesize name=_name - In the implementation block
@property (assign,getter=isInternetRequired,nonatomic) BOOL internetRequired;              //@synthesize internetRequired=_internetRequired - In the implementation block
@property (assign,nonatomic) float weight;                                                 //@synthesize weight=_weight - In the implementation block
+(id)ratingServiceWithDefaultPlist;
+(id)ratingService;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(float)weight;
-(void)setWeight:(float)arg1 ;
-(id)initWithWeightsAndLimits:(id)arg1 ;
-(id)localRateWithWeight:(float)arg1 andOperation:(id)arg2 ;
-(id)rateForProperties:(id)arg1 withWeight:(float)arg2 andOperation:(id)arg3 ;
-(id)initWithPlist:(id)arg1 ;
-(void)setWeightsAndLimits:(id)arg1 ;
-(id)checklistsWithOperation:(id)arg1 ;
-(id)absoluteRateWithWeight:(float)arg1 andOperation:(id)arg2 ;
-(id)usageRateWithWeight:(float)arg1 andOperation:(id)arg2 ;
-(id)checklistsOperationWithCompletionBlock:(/*^block*/id)arg1 ;
-(id)rateOperationWithCompletionBlock:(/*^block*/id)arg1 ;
-(BOOL)isInternetRequired;
-(void)setInternetRequired:(BOOL)arg1 ;
@end

