/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHFetchDictionaryAccessing.h>
#import <libobjc.A.dylib/PHMutableFetchDictionaryAccessing.h>

@class PLManagedObject, NSMutableOrderedSet, NSMutableDictionary, NSString;

@interface PHObjectPLAdapter : NSObject <PHFetchDictionaryAccessing, PHMutableFetchDictionaryAccessing> {

	PLManagedObject* _backingManagedObject;
	NSMutableOrderedSet* _ignoredKeys;
	NSMutableDictionary* _modifiedKeyValues;

}

@property (nonatomic,readonly) PLManagedObject * backingManagedObject;              //@synthesize backingManagedObject=_backingManagedObject - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * ignoredKeys;                     //@synthesize ignoredKeys=_ignoredKeys - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * modifiedKeyValues;               //@synthesize modifiedKeyValues=_modifiedKeyValues - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)objectWithPropertySets:(id)arg1 ;
-(id)mutableAccessingCopy;
-(id)initWithPLManagedObject:(id)arg1 ;
-(PLManagedObject *)backingManagedObject;
-(NSMutableOrderedSet *)ignoredKeys;
-(void)setIgnoredKeys:(NSMutableOrderedSet *)arg1 ;
-(NSMutableDictionary *)modifiedKeyValues;
-(void)setModifiedKeyValues:(NSMutableDictionary *)arg1 ;
@end

