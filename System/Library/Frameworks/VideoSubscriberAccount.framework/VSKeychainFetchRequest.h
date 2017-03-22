/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VSKeychainItemKind, NSPredicate, NSArray;

@interface VSKeychainFetchRequest : NSObject <NSCopying> {

	BOOL _includesDataValues;
	VSKeychainItemKind* _itemKind;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _fetchLimit;

}

@property (nonatomic,copy) VSKeychainItemKind * itemKind;                //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                    //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL includesDataValues;                    //@synthesize includesDataValues=_includesDataValues - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(VSKeychainItemKind *)itemKind;
-(void)setItemKind:(VSKeychainItemKind *)arg1 ;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setIncludesDataValues:(BOOL)arg1 ;
-(BOOL)includesDataValues;
-(unsigned long long)fetchLimit;
@end

