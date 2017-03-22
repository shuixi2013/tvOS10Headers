/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:20 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreInterest.framework/CoreInterest
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreInterest/CoreInterest-Structs.h>
#import <CoreInterest/IFDataStore.h>

@interface IFGraphDataStore : IFDataStore
+(id)sharedInstance;
+(id)migrationPlan;
-(id)initWithPath:(id)arg1 ;
-(void)clear;
-(BOOL)insertTopicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3 parent:(id)arg4 ;
-(void)_insertRoot;
-(id)_indicationFromStatement:(sqlite3_stmtRef)arg1 ;
-(id)topicWithName:(id)arg1 label:(id)arg2 identifier:(id)arg3 ;
-(id)_parentForTopic:(id)arg1 ;
-(id)_childrenForTopic:(id)arg1 ;
-(id)_indicationsForTopic:(id)arg1 ;
-(id)_topicFromStatement:(sqlite3_stmtRef)arg1 ;
-(BOOL)insertIndication:(id)arg1 topic:(id)arg2 ;
-(id)selectTopicsForQuery:(id)arg1 ;
@end

