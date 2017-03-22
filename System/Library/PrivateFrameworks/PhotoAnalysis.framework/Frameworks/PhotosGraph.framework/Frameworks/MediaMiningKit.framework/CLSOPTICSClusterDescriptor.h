/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/MediaMiningKit.framework/MediaMiningKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MediaMiningKit/MediaMiningKit-Structs.h>
@class NSNumber;

@interface CLSOPTICSClusterDescriptor : NSObject {

	NSNumber* _startIndex;
	NSNumber* _endIndex;
	NSRange _indexRange;
	NSNumber* _clusterSize;
	NSNumber* _rootLevel;
	NSNumber* _minCoreDistanceIndex;
	NSNumber* _minCoreDistance;
	NSNumber* _coreDistance;

}

@property (nonatomic,retain,readonly) NSNumber * startIndex;                        //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * endIndex;                          //@synthesize endIndex=_endIndex - In the implementation block
@property (nonatomic,readonly) NSRange indexRange; 
@property (nonatomic,retain,readonly) NSNumber * clusterSize;                       //@synthesize clusterSize=_clusterSize - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * rootLevel;                         //@synthesize rootLevel=_rootLevel - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minCoreDistanceIndex;              //@synthesize minCoreDistanceIndex=_minCoreDistanceIndex - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * minCoreDistance;                   //@synthesize coreDistance=_coreDistance - In the implementation block
+(id)clusterDescriptor:(NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4 ;
-(NSNumber *)endIndex;
-(NSNumber *)startIndex;
-(id)initWithParameters:(NSRange)arg1 rootLevel:(long long)arg2 minCoreDistanceIndex:(long long)arg3 minCoreDistance:(double)arg4 ;
-(NSRange)indexRange;
-(NSNumber *)clusterSize;
-(NSNumber *)rootLevel;
-(NSNumber *)minCoreDistanceIndex;
-(NSNumber *)minCoreDistance;
@end

