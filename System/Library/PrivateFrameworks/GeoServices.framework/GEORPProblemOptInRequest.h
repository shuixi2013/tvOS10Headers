/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData, NSString, GEORPUserCredentials;

@interface GEORPProblemOptInRequest : PBRequest <NSCopying> {

	NSData* _devicePushToken;
	NSString* _problemId;
	GEORPUserCredentials* _userCredentials;
	NSString* _userEmail;
	BOOL _didOptIn;
	SCD_Struct_GE15 _has;

}

@property (nonatomic,readonly) BOOL hasProblemId; 
@property (nonatomic,retain) NSString * problemId;                                //@synthesize problemId=_problemId - In the implementation block
@property (assign,nonatomic) BOOL hasDidOptIn; 
@property (assign,nonatomic) BOOL didOptIn;                                       //@synthesize didOptIn=_didOptIn - In the implementation block
@property (nonatomic,readonly) BOOL hasUserCredentials; 
@property (nonatomic,retain) GEORPUserCredentials * userCredentials;              //@synthesize userCredentials=_userCredentials - In the implementation block
@property (nonatomic,readonly) BOOL hasDevicePushToken; 
@property (nonatomic,retain) NSData * devicePushToken;                            //@synthesize devicePushToken=_devicePushToken - In the implementation block
@property (nonatomic,readonly) BOOL hasUserEmail; 
@property (nonatomic,retain) NSString * userEmail;                                //@synthesize userEmail=_userEmail - In the implementation block
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
-(BOOL)hasDevicePushToken;
-(BOOL)hasUserEmail;
-(NSData *)devicePushToken;
-(void)setDevicePushToken:(NSData *)arg1 ;
-(NSString *)userEmail;
-(void)setUserEmail:(NSString *)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(id)initWithSubmissionID:(id)arg1 allowContactBackAtEmailAddress:(id)arg2 traits:(id)arg3 ;
-(BOOL)hasProblemId;
-(NSString *)problemId;
-(void)setProblemId:(NSString *)arg1 ;
-(BOOL)hasUserCredentials;
-(GEORPUserCredentials *)userCredentials;
-(void)setUserCredentials:(GEORPUserCredentials *)arg1 ;
-(void)setDidOptIn:(BOOL)arg1 ;
-(void)setHasDidOptIn:(BOOL)arg1 ;
-(BOOL)hasDidOptIn;
-(BOOL)didOptIn;
@end

