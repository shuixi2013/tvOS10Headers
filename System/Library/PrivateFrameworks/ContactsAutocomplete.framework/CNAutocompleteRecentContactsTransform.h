/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, CRRecentContactsLibrary;

@interface CNAutocompleteRecentContactsTransform : NSObject {

	NSString* _priorityDomainForSorting;
	NSString* _sendingAddress;
	NSArray* _otherAddressesAlreadyChosen;
	NSString* _searchString;
	CRRecentContactsLibrary* _library;

}

@property (copy) NSString * priorityDomainForSorting;                //@synthesize priorityDomainForSorting=_priorityDomainForSorting - In the implementation block
@property (copy) NSString * sendingAddress;                          //@synthesize sendingAddress=_sendingAddress - In the implementation block
@property (copy) NSArray * otherAddressesAlreadyChosen;              //@synthesize otherAddressesAlreadyChosen=_otherAddressesAlreadyChosen - In the implementation block
@property (copy) NSString * searchString;                            //@synthesize searchString=_searchString - In the implementation block
@property (retain) CRRecentContactsLibrary * library;                //@synthesize library=_library - In the implementation block
+(/*^block*/id)resultTransformWithFactory:(id)arg1 membersFactory:(id)arg2 chosenAddressHashes:(id)arg3 searchString:(id)arg4 library:(id)arg5 ;
+(id)autocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 library:(id)arg6 ;
+(id)groupAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 membersFactory:(id)arg3 chosenAddressHashes:(id)arg4 searchString:(id)arg5 ;
+(id)contactAutocompleteResultForRecent:(id)arg1 factory:(id)arg2 completesChosenGroup:(BOOL)arg3 ;
+(long long)addressTypeForRecentContact:(id)arg1 ;
+(/*^block*/id)transformForRequest:(id)arg1 library:(id)arg2 ;
-(NSString *)searchString;
-(void)setSearchString:(NSString *)arg1 ;
-(void)setSendingAddress:(NSString *)arg1 ;
-(NSString *)sendingAddress;
-(NSString *)priorityDomainForSorting;
-(void)setPriorityDomainForSorting:(NSString *)arg1 ;
-(CRRecentContactsLibrary *)library;
-(void)setLibrary:(CRRecentContactsLibrary *)arg1 ;
-(NSArray *)otherAddressesAlreadyChosen;
-(void)setOtherAddressesAlreadyChosen:(NSArray *)arg1 ;
@end

