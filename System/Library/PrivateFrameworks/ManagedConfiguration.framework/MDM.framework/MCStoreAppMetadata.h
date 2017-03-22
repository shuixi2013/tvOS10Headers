/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSError, SSPurchase;

@interface MCStoreAppMetadata : NSObject {

	BOOL _hasRetrievedMetadata;
	BOOL _isLicensed;
	BOOL _success;
	BOOL _isRedownload;
	BOOL _isRedemptionNeeded;
	NSString* _bundleID;
	NSNumber* _iTunesStoreID;
	NSNumber* _externalVersionIdentifer;
	NSString* _localizedAppTitle;
	NSError* _error;
	long long _changeType;
	SSPurchase* _purchase;

}

@property (nonatomic,retain) NSString * bundleID;                              //@synthesize bundleID=_bundleID - In the implementation block
@property (nonatomic,retain) NSNumber * iTunesStoreID;                         //@synthesize iTunesStoreID=_iTunesStoreID - In the implementation block
@property (nonatomic,retain) NSNumber * externalVersionIdentifer;              //@synthesize externalVersionIdentifer=_externalVersionIdentifer - In the implementation block
@property (nonatomic,retain) NSString * localizedAppTitle;                     //@synthesize localizedAppTitle=_localizedAppTitle - In the implementation block
@property (assign,nonatomic) BOOL hasRetrievedMetadata;                        //@synthesize hasRetrievedMetadata=_hasRetrievedMetadata - In the implementation block
@property (assign,nonatomic) long long changeType;                             //@synthesize changeType=_changeType - In the implementation block
@property (assign,nonatomic) BOOL success;                                     //@synthesize success=_success - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) BOOL isLicensed;                                //@synthesize isLicensed=_isLicensed - In the implementation block
@property (nonatomic,readonly) SSPurchase * purchase;                          //@synthesize purchase=_purchase - In the implementation block
@property (nonatomic,readonly) BOOL isRedownload;                              //@synthesize isRedownload=_isRedownload - In the implementation block
@property (nonatomic,readonly) BOOL isRedemptionNeeded;                        //@synthesize isRedemptionNeeded=_isRedemptionNeeded - In the implementation block
-(NSNumber *)iTunesStoreID;
-(void)setITunesStoreID:(NSNumber *)arg1 ;
-(void)setPurchase:(SSPurchase *)arg1 ;
-(id)initWithPurchase:(id)arg1 ;
-(id)description;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(SSPurchase *)purchase;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setBundleID:(NSString *)arg1 ;
-(NSString *)bundleID;
-(void)setChangeType:(long long)arg1 ;
-(long long)changeType;
-(void)updateWithMetadataResponse:(id)arg1 changeType:(long long)arg2 success:(BOOL)arg3 error:(id)arg4 ;
-(NSString *)localizedAppTitle;
-(void)setLocalizedAppTitle:(NSString *)arg1 ;
-(void)setExternalVersionIdentifer:(NSNumber *)arg1 ;
-(id)initWithBundleID:(id)arg1 iTunesStoreID:(id)arg2 ;
-(id)initWithMetadataResponse:(id)arg1 iTunesStoreID:(id)arg2 changeType:(long long)arg3 success:(BOOL)arg4 error:(id)arg5 ;
-(id)initWithPurchase:(id)arg1 isRedownload:(BOOL)arg2 redemptionNeeded:(BOOL)arg3 ;
-(BOOL)hasSufficientInfoForManagementChange;
-(void)updateWithMetadataPurchase:(id)arg1 isRedownload:(BOOL)arg2 redemptionNeeded:(BOOL)arg3 ;
-(NSNumber *)externalVersionIdentifer;
-(BOOL)hasRetrievedMetadata;
-(void)setHasRetrievedMetadata:(BOOL)arg1 ;
-(BOOL)isLicensed;
-(BOOL)isRedownload;
-(BOOL)isRedemptionNeeded;
-(BOOL)success;
@end

