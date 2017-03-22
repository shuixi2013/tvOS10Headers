/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Metal.framework/Metal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface MTLIndexedConstantValue : NSObject {

	unsigned long long _index;
	unsigned long long _dataType;
	char* _data;

}

@property (readonly) unsigned long long index;                 //@synthesize index=_index - In the implementation block
@property (readonly) unsigned long long dataType;              //@synthesize dataType=_dataType - In the implementation block
@property (readonly) void* data;                               //@synthesize data=_data - In the implementation block
-(id)describe;
-(id)initWithValue:(const void*)arg1 type:(unsigned long long)arg2 index:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(void*)data;
-(unsigned long long)index;
-(unsigned long long)dataType;
@end

