/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString;

@interface _MRSendHIDReportMessageProtobuf : PBCodable <NSCopying> {

	NSData* _report;
	NSString* _virtualDeviceID;

}

@property (nonatomic,readonly) BOOL hasVirtualDeviceID; 
@property (nonatomic,retain) NSString * virtualDeviceID;              //@synthesize virtualDeviceID=_virtualDeviceID - In the implementation block
@property (nonatomic,readonly) BOOL hasReport; 
@property (nonatomic,retain) NSData * report;                         //@synthesize report=_report - In the implementation block
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
-(void)setVirtualDeviceID:(NSString *)arg1 ;
-(BOOL)hasVirtualDeviceID;
-(NSString *)virtualDeviceID;
-(void)setReport:(NSData *)arg1 ;
-(BOOL)hasReport;
-(NSData *)report;
@end

