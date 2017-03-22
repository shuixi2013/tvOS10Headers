/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBook.framework/AddressBook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AddressBook/AddressBook-Structs.h>
@class NSMutableArray;

@interface ABFavoritesListManager : NSObject {

	void* _addressBook;
	NSMutableArray* _list;
	CFDictionaryRef _uidToEntry;
	struct {
		unsigned dirty : 1;
		unsigned postCount : 1;
		unsigned needsReload : 1;
		unsigned unused : 29;
	}  _flags;

}
+(id)sharedInstance;
+(id)sharedInstanceWithAddressBook:(void*)arg1 ;
-(void)dealloc;
-(id)entries;
-(void)_loadListWithAddressBook:(void*)arg1 ;
-(void)_loadList;
-(id)entriesForPeople:(id)arg1 ;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 identifier:(int)arg4 value:(id)arg5 label:(id)arg6 ;
-(id)entryFromEntries:(id)arg1 type:(int)arg2 property:(int)arg3 value:(id)arg4 label:(id)arg5 ;
-(void)_listChangedExternally;
-(void)addEntry:(id)arg1 ;
-(void)save;
-(void)_entryIdentityChanged:(id)arg1 ;
-(void)_addEntryToMap:(id)arg1 ;
-(void)_removeEntryFromMap:(id)arg1 withUid:(int)arg2 ;
-(void)_scheduleSave;
-(void)_delayedLookup;
-(BOOL)_isValueForEntry:(id)arg1 equalToValue:(id)arg2 ;
-(void)removeAllEntries;
-(void)saveImmediately;
-(id)initWithAddressBook:(void*)arg1 ;
-(id)entriesForPerson:(void*)arg1 ;
-(void)removeEntryAtIndex:(long long)arg1 ;
-(void)moveEntryAtIndex:(long long)arg1 toIndex:(long long)arg2 ;
-(void)recacheIdentitiesSoon;
-(BOOL)containsEntryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(BOOL)containsEntryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(id)entryWithIdentifier:(int)arg1 forPerson:(void*)arg2 ;
-(id)entryWithType:(int)arg1 forPerson:(void*)arg2 property:(int)arg3 identifier:(int)arg4 ;
-(BOOL)addEntryForPerson:(void*)arg1 property:(int)arg2 withIdentifier:(int)arg3 ;
-(BOOL)entryIsDuplicateAndThusRemoved:(id)arg1 oldUid:(int)arg2 ;
-(BOOL)isFull;
-(void)_postChangeNotification;
@end

