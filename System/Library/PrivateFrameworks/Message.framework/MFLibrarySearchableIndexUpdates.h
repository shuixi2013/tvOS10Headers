/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface MFLibrarySearchableIndexUpdates : NSObject {

	NSArray* _addedIndexItems;
	NSArray* _removedIdentifiers;
	NSArray* _removedDomainIdentifiers;

}

@property (nonatomic,copy) NSArray * addedIndexItems;                       //@synthesize addedIndexItems=_addedIndexItems - In the implementation block
@property (nonatomic,copy) NSArray * removedIdentifiers;                    //@synthesize removedIdentifiers=_removedIdentifiers - In the implementation block
@property (nonatomic,copy) NSArray * removedDomainIdentifiers;              //@synthesize removedDomainIdentifiers=_removedDomainIdentifiers - In the implementation block
+(id)updates;
-(void)dealloc;
-(id)description;
-(NSArray *)addedIndexItems;
-(NSArray *)removedIdentifiers;
-(NSArray *)removedDomainIdentifiers;
-(void)setAddedIndexItems:(NSArray *)arg1 ;
-(void)setRemovedIdentifiers:(NSArray *)arg1 ;
-(void)setRemovedDomainIdentifiers:(NSArray *)arg1 ;
@end

