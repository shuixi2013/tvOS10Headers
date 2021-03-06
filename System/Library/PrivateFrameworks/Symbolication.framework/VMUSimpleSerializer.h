/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Symbolication/VMUAbstractSerializer.h>

@interface VMUSimpleSerializer : VMUAbstractSerializer {

	void* _map;
	unsigned _internCursor;

}
-(unsigned)serializeString:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)serialize32:(unsigned)arg1 ;
-(id)copyContiguousData;
-(void)serialize64:(unsigned long long)arg1 ;
-(unsigned)serializeNullTerminatedBytes:(const char*)arg1 ;
-(void)_serializeValues:(unsigned*)arg1 count:(unsigned)arg2 ;
@end

