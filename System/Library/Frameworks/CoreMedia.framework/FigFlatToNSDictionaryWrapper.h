/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMedia.framework/CoreMedia
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreMedia/CoreMedia-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface FigFlatToNSDictionaryWrapper : NSDictionary {

	OpaqueFigFlatDictionaryRef _flatDictionary;
	OpaqueFigFlatDictionaryKeySpecRef _keySpec;
	int _keySpace;
	void* _dictionaryBacking;
	void* _exportedKeySpec;
	/*^block*/id _deallocatorBlock;

}
-(void)_initializeFlatDictionary;
-(id)arrayForFlatDictionaryArrayDataKey:(SCD_Struct_Fi2*)arg1 ;
-(id)initWithFlatDictionary:(OpaqueFigFlatDictionaryRef)arg1 keySpec:(OpaqueFigFlatDictionaryKeySpecRef)arg2 ;
-(id)initLazilyWithFlatDictionaryBacking:(void*)arg1 exportedKeySpec:(void*)arg2 deallocatorBlock:(/*^block*/id)arg3 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(id)initWithObjects:(const id*)arg1 forKeys:(const id*)arg2 count:(unsigned long long)arg3 ;
-(id)keyEnumerator;
@end

