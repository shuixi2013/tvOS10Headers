/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:06 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <Foundation/NSCoder.h>

@interface NSUnarchiver : NSCoder {

	void* datax;
	unsigned long long cursor;
	NSZone* objectZone;
	unsigned long long systemVersion;
	char streamerVersion;
	char swap;
	char unused1;
	char unused2;
	void* pointerTable;
	void* stringTable;
	id classVersions;
	long long lastLabel;
	void* map;
	void* allUnarchivedObjects;
	id reserved;

}

@property (getter=isAtEnd,readonly) BOOL atEnd; 
@property (readonly) unsigned systemVersion; 
+(void)decodeClassName:(id)arg1 asClassName:(id)arg2 ;
+(id)classNameDecodedForArchiveClassName:(id)arg1 ;
+(void)initialize;
+(id)unarchiveObjectWithData:(id)arg1 ;
+(id)unarchiveObjectWithFile:(id)arg1 ;
-(void)decodeClassName:(id)arg1 asClassName:(id)arg2 ;
-(id)classNameDecodedForArchiveClassName:(id)arg1 ;
-(void)_setAllowedClasses:(id)arg1 ;
-(void)setObjectZone:(NSZone*)arg1 ;
-(NSZone*)objectZone;
-(void)dealloc;
-(unsigned)systemVersion;
-(id)data;
-(id)initForReadingWithData:(id)arg1 ;
-(BOOL)isAtEnd;
-(void)decodeValueOfObjCType:(const char*)arg1 at:(void*)arg2 ;
-(id)decodeDataObject;
-(long long)versionForClassName:(id)arg1 ;
-(void)replaceObject:(id)arg1 withObject:(id)arg2 ;
-(id)decodeObject;
-(void)decodeValuesOfObjCTypes:(const char*)arg1 ;
-(void)decodeArrayOfObjCType:(const char*)arg1 count:(unsigned long long)arg2 at:(void*)arg3 ;
-(void*)decodeBytesWithReturnedLength:(unsigned long long*)arg1 ;
@end

