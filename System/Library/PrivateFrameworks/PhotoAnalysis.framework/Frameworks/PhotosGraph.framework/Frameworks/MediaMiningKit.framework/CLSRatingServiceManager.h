/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PIPipeline, CLSReachability, NSArray;

@interface CLSRatingServiceManager : NSObject {

	PIPipeline* _pipeline;
	CLSReachability* _reachability;
	NSArray* _ratingServices;

}

@property (nonatomic,retain) NSArray * ratingServices;              //@synthesize ratingServices=_ratingServices - In the implementation block
+(Class)linkedInRatingServiceClass;
-(id)init;
-(id)_localServices;
-(id)checklistsWithServiceCompletionBlock:(/*^block*/id)arg1 ;
-(id)ratesWithServiceCompletionBlock:(/*^block*/id)arg1 ;
-(NSArray *)ratingServices;
-(void)setRatingServices:(NSArray *)arg1 ;
@end

