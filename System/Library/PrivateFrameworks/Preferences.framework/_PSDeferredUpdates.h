/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableSet, PSSpecifierUpdates;

@interface _PSDeferredUpdates : NSObject {

	BOOL _invalidatedSpecifiers;
	NSMutableSet* _searchEntries;
	PSSpecifierUpdates* _specifierUpdates;

}

@property (nonatomic,retain) NSMutableSet * searchEntries;                       //@synthesize searchEntries=_searchEntries - In the implementation block
@property (nonatomic,retain) PSSpecifierUpdates * specifierUpdates;              //@synthesize specifierUpdates=_specifierUpdates - In the implementation block
@property (assign,nonatomic) BOOL invalidatedSpecifiers;                         //@synthesize invalidatedSpecifiers=_invalidatedSpecifiers - In the implementation block
+(id)deferredUpdatesWithEntries:(id)arg1 specifierUpdates:(id)arg2 ;
+(id)deferredInvalidationUpdatesWithEntries:(id)arg1 ;
-(id)initWithSearchEntries:(id)arg1 specifierUpdates:(id)arg2 invalidatedSpecifiers:(BOOL)arg3 ;
-(NSMutableSet *)searchEntries;
-(void)setSearchEntries:(NSMutableSet *)arg1 ;
-(PSSpecifierUpdates *)specifierUpdates;
-(void)setSpecifierUpdates:(PSSpecifierUpdates *)arg1 ;
-(BOOL)invalidatedSpecifiers;
-(void)setInvalidatedSpecifiers:(BOOL)arg1 ;
@end

