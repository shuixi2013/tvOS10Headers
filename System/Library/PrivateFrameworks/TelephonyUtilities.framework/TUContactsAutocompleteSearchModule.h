/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNAutocompleteFetchDelegate.h>
#import <libobjc.A.dylib/TUSearchModuleProtocol.h>

@protocol CNCancelable, OS_dispatch_queue;
@class TUSearchController, CNAutocompleteStore, TUAutocompleteResultPartitioner, NSObject, NSString, TUSearchResults;

@interface TUContactsAutocompleteSearchModule : NSObject <CNAutocompleteFetchDelegate, TUSearchModuleProtocol> {

	BOOL _searchComplete;
	BOOL _cancelled;
	TUSearchController* _searchController;
	CNAutocompleteStore* _autocompleteStore;
	id<CNCancelable> _fetchRequest;
	TUAutocompleteResultPartitioner* _autocompleteResultPartitioner;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _completion;

}

@property (nonatomic,retain) CNAutocompleteStore * autocompleteStore;                                      //@synthesize autocompleteStore=_autocompleteStore - In the implementation block
@property (nonatomic,retain) id<CNCancelable> fetchRequest;                                                //@synthesize fetchRequest=_fetchRequest - In the implementation block
@property (nonatomic,retain) TUAutocompleteResultPartitioner * autocompleteResultPartitioner;              //@synthesize autocompleteResultPartitioner=_autocompleteResultPartitioner - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                           //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id completion;                                                                  //@synthesize completion=_completion - In the implementation block
@property (assign,getter=isSearchComplete,nonatomic) BOOL searchComplete;                                  //@synthesize searchComplete=_searchComplete - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled;                                            //@synthesize cancelled=_cancelled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) TUSearchResults * searchResults; 
@property (__weak) TUSearchController * searchController;                                                  //@synthesize searchController=_searchController - In the implementation block
-(id)init;
-(void)_cleanup;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(TUSearchController *)searchController;
-(void)setSearchController:(TUSearchController *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setSearchComplete:(BOOL)arg1 ;
-(void)searchForString:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)isSearchComplete;
-(TUAutocompleteResultPartitioner *)autocompleteResultPartitioner;
-(void)setAutocompleteResultPartitioner:(TUAutocompleteResultPartitioner *)arg1 ;
-(void)cancelSearch;
-(void)setAutocompleteStore:(CNAutocompleteStore *)arg1 ;
-(CNAutocompleteStore *)autocompleteStore;
-(void)autocompleteFetch:(id)arg1 didReceiveResults:(id)arg2 ;
-(void)autocompleteFetch:(id)arg1 didFailWithError:(id)arg2 ;
-(void)autocompleteFetchDidFinish:(id)arg1 ;
-(id<CNCancelable>)fetchRequest;
-(void)setFetchRequest:(id<CNCancelable>)arg1 ;
-(TUSearchResults *)searchResults;
@end

