/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary;

@interface PHAAnalysisProgress : NSObject {

	NSDictionary* _countDictionariesByWorkerType;
	NSDictionary* _countOfDeletionsByWorkerType;
	NSDictionary* _totalProgressCountsByWorkerType;

}
+(void)requestCurrentProgressWithLibrary:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)init;
-(id)description;
-(id)statusAsDictionary;
-(float)_progressFromProcessedCount:(long long)arg1 outOfPossibleCount:(long long)arg2 ;
-(id)initWithCounts:(id)arg1 totalProgressCounts:(id)arg2 countOfDeletionsByWorkerType:(id)arg3 ;
-(float)percentAnalyzedForWorkerType:(short)arg1 ;
-(float)localPercentAnalyzedForWorkerType:(short)arg1 ;
-(unsigned long long)countOfDeletionsForWorkerType:(short)arg1 ;
@end

