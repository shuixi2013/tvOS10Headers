/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDate;

@interface DAStatusReport : NSObject {

	BOOL _syncingAllowed;
	int _numHBIDataPoints;
	NSString* _persistentUUID;
	NSString* _displayName;
	NSString* _accountType;
	NSNumber* _timeSpan;
	NSNumber* _timeInNetworking;
	NSNumber* _averageHBI;
	NSNumber* _successfulRequests;
	NSNumber* _failedNetworkRequests;
	NSNumber* _failedProtocolRequests;
	NSNumber* _downloadedElements;
	NSNumber* _uploadedElements;
	NSNumber* _falseMoreAvailableCount;
	NSString* _protocolVersion;
	NSDate* _lastSuccessDate;
	NSDate* _lastFailureDate;
	NSDate* _creationDate;

}

@property (nonatomic,retain) NSDate * creationDate;                           //@synthesize creationDate=_creationDate - In the implementation block
@property (assign,nonatomic) int numHBIDataPoints;                            //@synthesize numHBIDataPoints=_numHBIDataPoints - In the implementation block
@property (nonatomic,retain) NSDate * lastSuccessDate;                        //@synthesize lastSuccessDate=_lastSuccessDate - In the implementation block
@property (nonatomic,retain) NSDate * lastFailureDate;                        //@synthesize lastFailureDate=_lastFailureDate - In the implementation block
@property (nonatomic,retain) NSString * persistentUUID;                       //@synthesize persistentUUID=_persistentUUID - In the implementation block
@property (nonatomic,retain) NSString * displayName;                          //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSString * accountType;                          //@synthesize accountType=_accountType - In the implementation block
@property (nonatomic,retain) NSNumber * timeSpan;                             //@synthesize timeSpan=_timeSpan - In the implementation block
@property (nonatomic,retain) NSNumber * timeInNetworking;                     //@synthesize timeInNetworking=_timeInNetworking - In the implementation block
@property (nonatomic,retain) NSNumber * averageHBI;                           //@synthesize averageHBI=_averageHBI - In the implementation block
@property (nonatomic,retain) NSNumber * successfulRequests;                   //@synthesize successfulRequests=_successfulRequests - In the implementation block
@property (nonatomic,retain) NSNumber * failedNetworkRequests;                //@synthesize failedNetworkRequests=_failedNetworkRequests - In the implementation block
@property (nonatomic,retain) NSNumber * failedProtocolRequests;               //@synthesize failedProtocolRequests=_failedProtocolRequests - In the implementation block
@property (nonatomic,retain) NSNumber * downloadedElements;                   //@synthesize downloadedElements=_downloadedElements - In the implementation block
@property (nonatomic,retain) NSNumber * uploadedElements;                     //@synthesize uploadedElements=_uploadedElements - In the implementation block
@property (nonatomic,retain) NSNumber * falseMoreAvailableCount;              //@synthesize falseMoreAvailableCount=_falseMoreAvailableCount - In the implementation block
@property (nonatomic,retain) NSString * protocolVersion;                      //@synthesize protocolVersion=_protocolVersion - In the implementation block
@property (assign,nonatomic) BOOL syncingAllowed;                             //@synthesize syncingAllowed=_syncingAllowed - In the implementation block
-(id)init;
-(id)description;
-(id)dictionaryRepresentation;
-(NSString *)displayName;
-(void)setTimeInNetworking:(NSNumber *)arg1 ;
-(void)setAverageHBI:(NSNumber *)arg1 ;
-(void)setSuccessfulRequests:(NSNumber *)arg1 ;
-(void)setFailedNetworkRequests:(NSNumber *)arg1 ;
-(void)setFailedProtocolRequests:(NSNumber *)arg1 ;
-(void)setDownloadedElements:(NSNumber *)arg1 ;
-(void)setUploadedElements:(NSNumber *)arg1 ;
-(void)setFalseMoreAvailableCount:(NSNumber *)arg1 ;
-(void)setLastSuccessDate:(NSDate *)arg1 ;
-(void)setLastFailureDate:(NSDate *)arg1 ;
-(NSNumber *)timeInNetworking;
-(NSNumber *)averageHBI;
-(NSNumber *)successfulRequests;
-(NSNumber *)failedNetworkRequests;
-(NSNumber *)failedProtocolRequests;
-(NSNumber *)downloadedElements;
-(NSNumber *)uploadedElements;
-(NSNumber *)falseMoreAvailableCount;
-(BOOL)syncingAllowed;
-(NSDate *)lastSuccessDate;
-(NSDate *)lastFailureDate;
-(void)mergeStatusReport:(id)arg1 ;
-(int)numHBIDataPoints;
-(void)setNumHBIDataPoints:(int)arg1 ;
-(void)setProtocolVersion:(NSString *)arg1 ;
-(NSString *)protocolVersion;
-(id)initWithDictionaryRepresentation:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(NSDate *)creationDate;
-(void)setDisplayName:(NSString *)arg1 ;
-(void)setSyncingAllowed:(BOOL)arg1 ;
-(void)setPersistentUUID:(NSString *)arg1 ;
-(NSString *)persistentUUID;
-(void)setAccountType:(NSString *)arg1 ;
-(NSString *)accountType;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 numUploadedElements:(int)arg2 ;
-(void)noteFalseMoreAvailableResponse;
-(void)noteNewHBIDataPoint:(int)arg1 ;
-(void)noteTimeSpentInNetworking:(double)arg1 ;
-(void)noteSuccessfulRequestWithNumDownloadedElements:(int)arg1 ;
-(void)noteFailedProtocolRequest;
-(void)noteFailedNetworkRequest;
-(void)setTimeSpan:(NSNumber *)arg1 ;
-(NSNumber *)timeSpan;
@end

