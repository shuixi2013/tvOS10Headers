/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface MIPLibraryIdentifier : PBCodable <NSCopying> {

	long long _libraryId;
	NSString* _libraryName;
	SCD_Struct_MI3 _has;

}

@property (nonatomic,readonly) BOOL hasLibraryName; 
@property (nonatomic,retain) NSString * libraryName;              //@synthesize libraryName=_libraryName - In the implementation block
@property (assign,nonatomic) BOOL hasLibraryId; 
@property (assign,nonatomic) long long libraryId;                 //@synthesize libraryId=_libraryId - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setLibraryName:(NSString *)arg1 ;
-(BOOL)hasLibraryName;
-(void)setLibraryId:(long long)arg1 ;
-(void)setHasLibraryId:(BOOL)arg1 ;
-(BOOL)hasLibraryId;
-(NSString *)libraryName;
-(long long)libraryId;
@end

