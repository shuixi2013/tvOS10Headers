/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/NSSQLStoreRequestContext.h>

@class NSSQLiteStatement, NSFetchRequest, NSBatchUpdateRequest, NSSQLFetchRequestContext, NSSQLCountRequestContext;

@interface NSSQLBatchUpdateRequestContext : NSSQLStoreRequestContext {

	NSSQLiteStatement* _updateStatement;
	NSFetchRequest* _fetchRequest;

}

@property (nonatomic,readonly) NSBatchUpdateRequest * request; 
@property (nonatomic,readonly) NSSQLFetchRequestContext * createFetchRequestContextForObjectsToUpdate; 
@property (nonatomic,readonly) NSSQLCountRequestContext * createCountRequestContextForObjectsToUpdate; 
@property (nonatomic,readonly) NSSQLiteStatement * updateStatement; 
-(id)initWithRequest:(id)arg1 context:(id)arg2 sqlCore:(id)arg3 ;
-(BOOL)isWritingRequest;
-(void)executeRequestUsingConnection:(id)arg1 ;
-(void)executePrologue;
-(id)fetchRequestDescribingObjectsToUpdate;
-(void)_createUpdateStatement;
-(NSSQLiteStatement *)updateStatement;
-(NSSQLFetchRequestContext *)createFetchRequestContextForObjectsToUpdate;
-(NSSQLCountRequestContext *)createCountRequestContextForObjectsToUpdate;
-(void)dealloc;
-(NSBatchUpdateRequest *)request;
@end

