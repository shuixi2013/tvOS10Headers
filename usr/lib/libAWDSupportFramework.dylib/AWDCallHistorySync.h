/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /usr/lib/libAWDSupportFramework.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libAWDSupportFramework.dylib/libAWDSupportFramework.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDCallHistorySync : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	unsigned _downloadRecordCount;
	unsigned _uploadRecordCount;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasUploadRecordCount; 
@property (assign,nonatomic) unsigned uploadRecordCount;                //@synthesize uploadRecordCount=_uploadRecordCount - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadRecordCount; 
@property (assign,nonatomic) unsigned downloadRecordCount;              //@synthesize downloadRecordCount=_downloadRecordCount - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setUploadRecordCount:(unsigned)arg1 ;
-(void)setHasUploadRecordCount:(BOOL)arg1 ;
-(BOOL)hasUploadRecordCount;
-(void)setDownloadRecordCount:(unsigned)arg1 ;
-(void)setHasDownloadRecordCount:(BOOL)arg1 ;
-(BOOL)hasDownloadRecordCount;
-(unsigned)uploadRecordCount;
-(unsigned)downloadRecordCount;
@end

