/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MediaRemote-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class _MRGameControllerAccelerationProtobuf;

@interface _MRGameControllerMotionProtobuf : PBCodable <NSCopying> {

	_MRGameControllerAccelerationProtobuf* _gravity;
	_MRGameControllerAccelerationProtobuf* _userAcceleration;

}

@property (nonatomic,readonly) BOOL hasGravity; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * gravity;                       //@synthesize gravity=_gravity - In the implementation block
@property (nonatomic,readonly) BOOL hasUserAcceleration; 
@property (nonatomic,retain) _MRGameControllerAccelerationProtobuf * userAcceleration;              //@synthesize userAcceleration=_userAcceleration - In the implementation block
-(_MRGameControllerAccelerationProtobuf *)userAcceleration;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(_MRGameControllerAccelerationProtobuf *)gravity;
-(void)setGravity:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setUserAcceleration:(_MRGameControllerAccelerationProtobuf *)arg1 ;
-(BOOL)hasGravity;
-(BOOL)hasUserAcceleration;
@end

