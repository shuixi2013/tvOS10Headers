/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CNCancelable.h>

@protocol CNScheduler, CNAutocompleteSearchProvider, CNAutocompleteProbeProvider, CNCancelable;
@class CNAutocompleteFetchRequest, CNAutocompleteDelegateWrapper, CNCancelationToken, CNAutocompleteUserSession, NSString;

@interface CNAutocompleteQuery : NSObject <CNCancelable> {

	CNAutocompleteFetchRequest* _request;
	CNAutocompleteDelegateWrapper* _delegate;
	id<CNScheduler> _scheduler;
	CNCancelationToken* _cancelationToken;
	id<CNAutocompleteSearchProvider> _searchProvider;
	id<CNAutocompleteProbeProvider> _probeProvider;
	CNAutocompleteUserSession* _userSession;
	id<CNCancelable> _delegateToken;

}

@property (copy) CNAutocompleteFetchRequest * request;                           //@synthesize request=_request - In the implementation block
@property (retain) id<CNAutocompleteSearchProvider> searchProvider;              //@synthesize searchProvider=_searchProvider - In the implementation block
@property (retain) CNAutocompleteDelegateWrapper * delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (retain) id<CNScheduler> scheduler;                                    //@synthesize scheduler=_scheduler - In the implementation block
@property (retain) id<CNAutocompleteProbeProvider> probeProvider;                //@synthesize probeProvider=_probeProvider - In the implementation block
@property (retain) CNAutocompleteUserSession * userSession;                      //@synthesize userSession=_userSession - In the implementation block
@property (retain) CNCancelationToken * cancelationToken;                        //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (__weak) id<CNCancelable> delegateToken;                               //@synthesize delegateToken=_delegateToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldSuppressAddressesAlreadyChosenForRequest:(id)arg1 ;
+(BOOL)searchTypeSupportsSuppressionOfAlreadyChosenAddresses:(unsigned long long)arg1 ;
+(id)observableForQuery:(id)arg1 ;
+(BOOL)shouldPerformQueryForRequest:(id)arg1 ;
+(void)configureNetworkForBuilder:(id)arg1 query:(id)arg2 ;
+(id)observableWithSupplementalResultsForQuery:(id)arg1 ;
+(void)configureNetworkPolicyForBuilder:(id)arg1 query:(id)arg2 ;
+(void)configureNetworkActivityHandlersForBuilder:(id)arg1 query:(id)arg2 ;
+(id)queryWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7 ;
-(void)cancel;
-(void)setDelegate:(CNAutocompleteDelegateWrapper *)arg1 ;
-(CNAutocompleteDelegateWrapper *)delegate;
-(CNAutocompleteFetchRequest *)request;
-(void)setRequest:(CNAutocompleteFetchRequest *)arg1 ;
-(CNAutocompleteUserSession *)userSession;
-(void)setUserSession:(CNAutocompleteUserSession *)arg1 ;
-(void)setCancelationToken:(CNCancelationToken *)arg1 ;
-(CNCancelationToken *)cancelationToken;
-(id<CNScheduler>)scheduler;
-(void)setScheduler:(id<CNScheduler>)arg1 ;
-(id<CNAutocompleteProbeProvider>)probeProvider;
-(id<CNAutocompleteSearchProvider>)searchProvider;
-(id)initWithRequest:(id)arg1 searchProvider:(id)arg2 delegate:(id)arg3 probeProvider:(id)arg4 scheduler:(id)arg5 userSession:(id)arg6 delegateToken:(id)arg7 ;
-(id)makeDelegateWrapperWithDelegate:(id)arg1 forRequest:(id)arg2 userSession:(id)arg3 ;
-(void)searchOperationReportedResults:(id)arg1 ;
-(void)searchOperationsHaveFinished;
-(void)searchOperationEncounteredError:(id)arg1 ;
-(void)searchOperationsHaveBegunNetworkActivity;
-(void)searchOperationsHaveEndedNetworkActivity;
-(id<CNCancelable>)delegateToken;
-(void)setSearchProvider:(id<CNAutocompleteSearchProvider>)arg1 ;
-(void)setProbeProvider:(id<CNAutocompleteProbeProvider>)arg1 ;
-(void)setDelegateToken:(id<CNCancelable>)arg1 ;
-(id)execute;
@end

