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

@interface _MRSendCommandResultMessageProtobuf : PBCodable <NSCopying> {

	SCD_Struct_MR12* _handlerReturnStatus;
	unsigned _errorCode;
	SCD_Struct_MR3 _has;

}

@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) unsigned errorCode;                                         //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,readonly) unsigned long long handlerReturnStatusCount; 
@property (nonatomic,readonly) unsigned* handlerReturnStatus; 
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
-(void)setErrorCode:(unsigned)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(unsigned)errorCode;
-(unsigned long long)handlerReturnStatusCount;
-(void)clearHandlerReturnStatus;
-(unsigned)handlerReturnStatusAtIndex:(unsigned long long)arg1 ;
-(void)addHandlerReturnStatus:(unsigned)arg1 ;
-(unsigned*)handlerReturnStatus;
-(void)setHandlerReturnStatus:(unsigned*)arg1 count:(unsigned long long)arg2 ;
@end

