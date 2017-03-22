/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GeoServices/GeoServices-Structs.h>
@class NSString, NSNumber;

@interface GEOUserSessionEntity : NSObject {

	GEOSessionID _sessionID;
	unsigned _sequenceNumber;
	double _sessionCreationTime;

}

@property (assign) GEOSessionID sessionID;                                  //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) unsigned sequenceNumber;                       //@synthesize sequenceNumber=_sequenceNumber - In the implementation block
@property (assign) double sessionCreationTime;                              //@synthesize sessionCreationTime=_sessionCreationTime - In the implementation block
@property (readonly) double sessionRelativeTimestamp; 
@property (nonatomic,readonly) NSString * sessionEntityString; 
@property (nonatomic,readonly) NSString * sessionIDString; 
@property (nonatomic,readonly) NSString * sessionUUIDString; 
@property (nonatomic,readonly) NSNumber * sessionIDLow; 
@property (nonatomic,readonly) NSNumber * sessionIDHigh; 
@property (nonatomic,readonly) NSString * sessionIDLowString; 
@property (nonatomic,readonly) NSString * sessionIDHighString; 
-(id)init;
-(id)description;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(GEOSessionID)sessionID;
-(void)setSequenceNumber:(unsigned)arg1 ;
-(unsigned)sequenceNumber;
-(unsigned)rawSequenceNumber;
-(double)sessionRelativeTimestamp;
-(id)initWithSessionID:(GEOSessionID)arg1 sessionCreationTime:(double)arg2 sequenceNumber:(unsigned)arg3 ;
-(id)initWithSessionEntityString:(id)arg1 ;
-(NSString *)sessionEntityString;
-(NSString *)sessionIDString;
-(NSString *)sessionUUIDString;
-(NSNumber *)sessionIDLow;
-(NSNumber *)sessionIDHigh;
-(NSString *)sessionIDLowString;
-(NSString *)sessionIDHighString;
-(BOOL)_isValidSessionIDHighOrLowString:(id)arg1 ;
-(void)updateWithSessionEntityString:(id)arg1 ;
-(void)updateSessionIDFromUUIDString:(id)arg1 ;
-(double)sessionCreationTime;
-(void)setSessionCreationTime:(double)arg1 ;
@end

