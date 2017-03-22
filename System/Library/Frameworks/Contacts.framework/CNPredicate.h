/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Contacts/Contacts-Structs.h>
#import <Foundation/NSPredicate.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSPredicate, NSArray;

@interface CNPredicate : NSPredicate <NSCopying> {

	NSPredicate* _cn_predicate;
	BOOL _augmentMainStoreResults;
	NSArray* _mainStoreContactIdentifiers;

}

@property (nonatomic,retain) NSArray * mainStoreContactIdentifiers;              //@synthesize mainStoreContactIdentifiers=_mainStoreContactIdentifiers - In the implementation block
@property (assign,nonatomic) BOOL augmentMainStoreResults;                       //@synthesize augmentMainStoreResults=_augmentMainStoreResults - In the implementation block
+(id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(BOOL)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 ;
-(BOOL)augmentMainStoreResults;
-(NSArray *)mainStoreContactIdentifiers;
-(void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3 ;
-(id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(BOOL)arg3 service:(id)arg4 error:(id*)arg5 ;
-(void)setMainStoreContactIdentifiers:(NSArray *)arg1 ;
-(id)cn_predicate;
-(void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2 ;
-(void)setAugmentMainStoreResults:(BOOL)arg1 ;
-(id)initWithPredicate:(id)arg1 ;
-(BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2 ;
-(id)predicateFormat;
@end

