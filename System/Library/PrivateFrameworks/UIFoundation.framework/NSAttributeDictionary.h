/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSAttributeDictionary : NSDictionary {

	unsigned long long numElements;
	NSAttributeDictionaryElement elements[1];

}
+(id)newWithDictionary:(id)arg1 ;
+(id)emptyAttributeDictionary;
+(void)initialize;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
@end
