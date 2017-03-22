/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface GEOLogMsgStateDeviceLocale : PBCodable <NSCopying> {

	NSString* _deviceInputLocale;
	NSString* _deviceOutputLocale;
	NSString* _deviceSettingsLocale;

}

@property (nonatomic,readonly) BOOL hasDeviceSettingsLocale; 
@property (nonatomic,retain) NSString * deviceSettingsLocale;              //@synthesize deviceSettingsLocale=_deviceSettingsLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceInputLocale; 
@property (nonatomic,retain) NSString * deviceInputLocale;                 //@synthesize deviceInputLocale=_deviceInputLocale - In the implementation block
@property (nonatomic,readonly) BOOL hasDeviceOutputLocale; 
@property (nonatomic,retain) NSString * deviceOutputLocale;                //@synthesize deviceOutputLocale=_deviceOutputLocale - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasDeviceSettingsLocale;
-(BOOL)hasDeviceInputLocale;
-(BOOL)hasDeviceOutputLocale;
-(NSString *)deviceSettingsLocale;
-(void)setDeviceSettingsLocale:(NSString *)arg1 ;
-(NSString *)deviceInputLocale;
-(void)setDeviceInputLocale:(NSString *)arg1 ;
-(NSString *)deviceOutputLocale;
-(void)setDeviceOutputLocale:(NSString *)arg1 ;
@end

