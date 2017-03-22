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

@class NSMutableArray;

@interface GEOPDPlace : PBCodable <NSCopying> {

	unsigned long long _muid;
	unsigned long long _preferredMuid;
	unsigned long long _updateVersion;
	NSMutableArray* _components;
	int _referenceFrame;
	int _resultProviderId;
	int _status;
	SCD_Struct_LO18 _has;

}

@property (assign,nonatomic) BOOL hasReferenceFrame; 
@property (assign,nonatomic) int referenceFrame; 
@property (assign,nonatomic) BOOL hasMuid; 
@property (assign,nonatomic) unsigned long long muid;                       //@synthesize muid=_muid - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                    //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasPreferredMuid; 
@property (assign,nonatomic) unsigned long long preferredMuid;              //@synthesize preferredMuid=_preferredMuid - In the implementation block
@property (nonatomic,retain) NSMutableArray * components;                   //@synthesize components=_components - In the implementation block
@property (assign,nonatomic) BOOL hasResultProviderId; 
@property (assign,nonatomic) int resultProviderId;                          //@synthesize resultProviderId=_resultProviderId - In the implementation block
@property (assign,nonatomic) BOOL hasUpdateVersion; 
@property (assign,nonatomic) unsigned long long updateVersion;              //@synthesize updateVersion=_updateVersion - In the implementation block
+(Class)componentType;
+(id)failedPlaceDataForMuid:(unsigned long long)arg1 ;
+(id)failedPlaceData;
+(id)attributionForPlaceData:(id)arg1 type:(int)arg2 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSMutableArray *)components;
-(int)status;
-(void)setStatus:(int)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setMuid:(unsigned long long)arg1 ;
-(void)setHasMuid:(BOOL)arg1 ;
-(BOOL)hasMuid;
-(unsigned long long)muid;
-(int)referenceFrame;
-(void)setReferenceFrame:(int)arg1 ;
-(void)setHasReferenceFrame:(BOOL)arg1 ;
-(BOOL)hasReferenceFrame;
-(id)referenceFrameAsString:(int)arg1 ;
-(int)StringAsReferenceFrame:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(BOOL)isDisputed;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(void)setResultProviderId:(int)arg1 ;
-(void)setHasResultProviderId:(BOOL)arg1 ;
-(BOOL)hasResultProviderId;
-(int)resultProviderId;
-(id)spokenNameForLocale:(id)arg1 ;
-(BOOL)isCacheable;
-(id)compactDebugDescription;
-(id)_cleanedPhoneNumberForPhoneNumberRepresentation:(id)arg1 ;
-(id)_entityName;
-(void)_removeETAComponents;
-(id)phoneNumbers;
-(BOOL)phoneNumberOptsOutOfAds:(id)arg1 ;
-(BOOL)hasExpiredComponentsAsOf:(double)arg1 ;
-(id)bestName;
-(id)businessURL;
-(id)copyWithoutETAComponents;
-(id)copyWithStrippedOptionalData;
-(void)setFirstSeenTimestamp:(double)arg1 ;
-(id)geoMapItem;
-(void)setPreferredMuid:(unsigned long long)arg1 ;
-(void)setHasPreferredMuid:(BOOL)arg1 ;
-(BOOL)hasPreferredMuid;
-(void)clearComponents;
-(void)addComponent:(id)arg1 ;
-(unsigned long long)componentsCount;
-(id)componentAtIndex:(unsigned long long)arg1 ;
-(void)setUpdateVersion:(unsigned long long)arg1 ;
-(void)setHasUpdateVersion:(BOOL)arg1 ;
-(BOOL)hasUpdateVersion;
-(unsigned long long)preferredMuid;
-(void)setComponents:(NSMutableArray *)arg1 ;
-(unsigned long long)updateVersion;
-(id)geoMapItemWithDetourInfo:(id)arg1 ;
@end

