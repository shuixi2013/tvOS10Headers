/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:27 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreData/CoreData-Structs.h>
@class NSSQLEntity, NSSQLiteStatement, NSMutableDictionary;

@interface NSSQLiteStatementCache : NSObject {

	NSSQLEntity* _entity;
	NSSQLiteStatement* _insertStatementCache;
	NSSQLiteStatement* _deletionStatementCache;
	NSSQLiteStatement* _faultingStatementCache;
	NSMutableDictionary* _toManyRelationshipStatementCache;
	CFDictionaryRef _correlationInsertCache;
	CFDictionaryRef _correlationDeleteCache;
	CFDictionaryRef _correlationMasterReorderCache;
	CFDictionaryRef _correlationMasterReorderCachePart2;
	CFDictionaryRef _correlationReorderCache;

}
-(id)initWithEntity:(id)arg1 ;
-(void)clearCachedStatements;
-(void)cacheInsertStatement:(id)arg1 ;
-(void)cacheDeletionStatement:(id)arg1 ;
-(void)cacheFaultingStatement:(id)arg1 ;
-(CFDictionaryRef)createCorrelationCacheDictionary;
-(void)insertOrReplaceStatement:(id)arg1 forRelationship:(id)arg2 inDictionary:(CFDictionaryRef)arg3 ;
-(id)insertStatement;
-(id)deletionStatement;
-(id)faultingStatement;
-(id)correlationInsertStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationInsertStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationMasterReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationMasterReorderStatementPart2ForRelationship:(id)arg1 ;
-(void)cacheCorrelationMasterReorderStatementPart2:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationReorderStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationReorderStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)correlationDeleteStatementForRelationship:(id)arg1 ;
-(void)cacheCorrelationDeleteStatement:(id)arg1 forRelationship:(id)arg2 ;
-(id)preparedFaultingCachesForRelationship:(id)arg1 ;
-(void)cacheFaultingStatement:(id)arg1 andFetchRequest:(id)arg2 forRelationship:(id)arg3 ;
-(void)dealloc;
@end

