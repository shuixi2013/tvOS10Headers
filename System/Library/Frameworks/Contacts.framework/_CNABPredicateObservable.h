/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/CNObservable.h>
#import <libobjc.A.dylib/ABPredicateDelegate.h>

@protocol CNObserver;
@class CNCancelationToken, ABPredicate, NSString;

@interface _CNABPredicateObservable : CNObservable <ABPredicateDelegate> {

	void* _addressBook;
	unsigned _sortOrdering;
	CNCancelationToken* _cancelationToken;
	ABPredicate* _predicate;
	unsigned long long _options;
	id<CNObserver> _observer;

}

@property (nonatomic,retain) ABPredicate * predicate;                  //@synthesize predicate=_predicate - In the implementation block
@property (assign,nonatomic) unsigned sortOrdering;                    //@synthesize sortOrdering=_sortOrdering - In the implementation block
@property (assign,nonatomic) unsigned long long options;               //@synthesize options=_options - In the implementation block
@property (assign,nonatomic) void* addressBook; 
@property (nonatomic,retain) id<CNObserver> observer;                  //@synthesize observer=_observer - In the implementation block
@property (retain) CNCancelationToken * cancelationToken;              //@synthesize cancelationToken=_cancelationToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)globalQueue;
-(void)dealloc;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(void)setPredicate:(ABPredicate *)arg1 ;
-(ABPredicate *)predicate;
-(void)setObserver:(id<CNObserver>)arg1 ;
-(id<CNObserver>)observer;
-(id)initWithPredicate:(id)arg1 sortOrdering:(unsigned)arg2 options:(unsigned long long)arg3 addressBook:(void*)arg4 ;
-(void)setCancelationToken:(CNCancelationToken *)arg1 ;
-(CNCancelationToken *)cancelationToken;
-(void)setAddressBook:(void*)arg1 ;
-(id)subscribe:(id)arg1 ;
-(unsigned)sortOrdering;
-(void)setSortOrdering:(unsigned)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 metadata:(id)arg3 ;
-(BOOL)predicateShouldContinue:(id)arg1 afterFindingRecord:(void*)arg2 moreComing:(BOOL)arg3 ;
-(void*)addressBook;
@end

