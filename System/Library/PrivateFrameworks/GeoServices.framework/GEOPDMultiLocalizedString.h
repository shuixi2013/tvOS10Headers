/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray;

@interface GEOPDMultiLocalizedString : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _localizedStrings;

}

@property (nonatomic,retain) NSMutableArray * localizedStrings;              //@synthesize localizedStrings=_localizedStrings - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)localizedStringType;
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
-(PBUnknownFields *)unknownFields;
-(id)bestLocalizedName;
-(void)clearLocalizedStrings;
-(void)addLocalizedString:(id)arg1 ;
-(unsigned long long)localizedStringsCount;
-(id)localizedStringAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedStrings;
-(void)setLocalizedStrings:(NSMutableArray *)arg1 ;
@end

