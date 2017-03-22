/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSSerializerStream.h>

@interface NSAKSerializerStream : NSObject <NSSerializerStream> {

	void* memory;
	unsigned long long current;
	unsigned long long max;
	CFDictionaryRef roomForIntLocations;

}
-(void)copySerializationInto:(void*)arg1 ;
-(unsigned long long)writeInt:(unsigned long long)arg1 ;
-(unsigned long long)writeAlignedDataSize:(unsigned long long)arg1 ;
-(unsigned long long)writeData:(const void*)arg1 length:(unsigned long long)arg2 ;
-(unsigned long long)writeRoomForInt:(int*)arg1 ;
-(void)writeDelayedInt:(unsigned long long)arg1 for:(int)arg2 ;
-(BOOL)writeToPath:(id)arg1 safely:(BOOL)arg2 ;
-(void)dealloc;
@end

