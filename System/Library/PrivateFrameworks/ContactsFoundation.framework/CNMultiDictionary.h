/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsFoundation/ContactsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSMutableDictionary, NSArray, NSDictionary;

@interface CNMultiDictionary : NSObject <NSCopying, NSMutableCopying> {

	NSMutableDictionary* _entries;

}

@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
+(id)multiDictionaryWithObject:(id)arg1 forKey:(id)arg2 ;
+(id)multiDictionary;
-(void)dealloc;
-(unsigned long long)count;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSArray *)allKeys;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(BOOL)containsKey:(id)arg1 ;
-(void)eachObject:(/*^block*/id)arg1 ;
-(id)objectsForKeys:(id)arg1 ;
-(id)objectsForKey:(id)arg1 ;
-(id)initWithEntries:(id)arg1 ;
@end

