/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/PhotoAnalysis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface PHADirtyChangeBuffer : NSObject {

	NSMutableDictionary* _workInfosByWorkerType;

}

@property (nonatomic,retain) NSMutableDictionary * workInfosByWorkerType;              //@synthesize workInfosByWorkerType=_workInfosByWorkerType - In the implementation block
-(id)init;
-(id)snapshot;
-(NSMutableDictionary *)workInfosByWorkerType;
-(void)setWorkInfosByWorkerType:(NSMutableDictionary *)arg1 ;
-(void)recordChangeForAssetIdentifier:(id)arg1 workerType:(int)arg2 workerFlags:(int)arg3 ;
@end

