/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSOperation.h>
#import <libobjc.A.dylib/MDSearchQueryDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSArray, NSError, NSString, NSPredicate, NSObject, MDSearchQuery;

@interface ICSearchQueryOperation : NSOperation <MDSearchQueryDelegate> {

	NSArray* _results;
	NSError* _error;
	NSString* _queryString;
	NSPredicate* _predicate;
	NSObject*<OS_dispatch_semaphore> _semaphore;
	MDSearchQuery* _searchQuery;

}

@property (nonatomic,copy) NSString * queryString;                                    //@synthesize queryString=_queryString - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                                   //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> semaphore;              //@synthesize semaphore=_semaphore - In the implementation block
@property (nonatomic,retain) MDSearchQuery * searchQuery;                             //@synthesize searchQuery=_searchQuery - In the implementation block
@property (nonatomic,retain) NSArray * results;                                       //@synthesize results=_results - In the implementation block
@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)queryStringForSearchString:(id)arg1 ;
+(id)predicateForSearchString:(id)arg1 ;
-(void)cancel;
-(id)init;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(void)main;
-(NSArray *)results;
-(void)setResults:(NSArray *)arg1 ;
-(MDSearchQuery *)searchQuery;
-(NSString *)queryString;
-(void)setQueryString:(NSString *)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)setSearchQuery:(MDSearchQuery *)arg1 ;
-(id)initWithSearchString:(id)arg1 ;
-(id)initWithQueryString:(id)arg1 ;
-(void)searchQuery:(id)arg1 didReturnItems:(id)arg2 ;
-(void)searchQuery:(id)arg1 statusChanged:(unsigned long long)arg2 ;
-(void)searchQuery:(id)arg1 didFailWithError:(id)arg2 ;
-(id)initWithPredicate:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)semaphore;
-(void)setSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
@end

