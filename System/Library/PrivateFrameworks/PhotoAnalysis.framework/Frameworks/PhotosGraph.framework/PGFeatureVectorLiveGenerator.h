/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotosGraph/PGFeatureVectorGenerator.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@class NSString;

@interface PGFeatureVectorLiveGenerator : PGFeatureVectorGenerator <CLLocationManagerDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)enumerateFeatureVectorsByTypeUsingBlock:(/*^block*/id)arg1 ;
-(id)_nearestAssetsForCurrentDate:(id)arg1 atLocation:(id)arg2 ;
@end

