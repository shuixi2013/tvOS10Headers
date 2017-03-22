/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreBluetooth/CoreBluetooth-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface CBUUID : NSObject <NSCopying> {

	unsigned char _bytes[16];
	char _type;

}

@property (nonatomic,readonly) NSData * data; 
@property (nonatomic,readonly) NSString * UUIDString; 
+(id)UUIDWithData:(id)arg1 ;
+(id)UUIDWithCFUUID:(CFUUIDRef)arg1 ;
+(id)UUIDWithNSUUID:(id)arg1 ;
+(id)UUIDWithString:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSData *)data;
-(id)initWithData:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSString *)UUIDString;
-(id)initWithCFUUID:(CFUUIDRef)arg1 ;
-(id)initWithNSUUID:(id)arg1 ;
@end

