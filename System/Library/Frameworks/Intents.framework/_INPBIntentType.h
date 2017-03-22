/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface _INPBIntentType : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _type;

}

@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasType;
@end
