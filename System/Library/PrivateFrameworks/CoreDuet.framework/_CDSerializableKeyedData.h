/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface _CDSerializableKeyedData : NSObject {

	NSData* _encodedKey;
	unsigned char _keyChecksum;
	unsigned char _dataChecksum;
	BOOL _dataChecksumNeedsUpdate;
	NSString* _key;
	NSData* _data;

}

@property (readonly) NSString * key;              //@synthesize key=_key - In the implementation block
@property (readonly) NSData * data;               //@synthesize data=_data - In the implementation block
+(id)log;
+(id)keyedDataDeserializedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 ;
+(id)errorForInvalidKeyEncoding;
+(unsigned char)byteChecksumOfData:(id)arg1 ;
+(id)dataDeseralizedFrom:(void*)arg1 maxSize:(unsigned long long)arg2 checksum:(char*)arg3 bytesRead:(unsigned long long*)arg4 ;
-(NSString *)key;
-(NSData *)data;
-(BOOL)setData:(NSData *)arg1 ;
-(unsigned long long)sizeWhenSerialized;
-(unsigned long long)serializeTo:(void*)arg1 maxSize:(unsigned long long)arg2 ;
-(id)initWithKey:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(unsigned long long)serializeData:(id)arg1 withChecksum:(unsigned char)arg2 to:(void*)arg3 ;
@end

