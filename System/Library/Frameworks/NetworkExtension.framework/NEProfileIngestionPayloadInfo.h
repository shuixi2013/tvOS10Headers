/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate;

@interface NEProfileIngestionPayloadInfo : NSObject <NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	BOOL _isSetAside;
	BOOL _applicationCreated;
	NSString* _payloadProtocolType;
	NSString* _payloadUUID;
	NSString* _payloadOrganization;
	NSString* _profileOrganization;
	NSString* _profileIdentifier;
	NSString* _profileUUID;
	NSDate* _profileIngestionDate;
	NSString* _systemVersion;
	long long _profileSource;

}

@property (assign) long long profileSource;                   //@synthesize profileSource=_profileSource - In the implementation block
@property (copy) NSString * payloadProtocolType;              //@synthesize payloadProtocolType=_payloadProtocolType - In the implementation block
@property (copy) NSString * payloadUUID;                      //@synthesize payloadUUID=_payloadUUID - In the implementation block
@property (copy) NSString * payloadOrganization;              //@synthesize payloadOrganization=_payloadOrganization - In the implementation block
@property (copy) NSString * profileOrganization;              //@synthesize profileOrganization=_profileOrganization - In the implementation block
@property (copy) NSString * profileIdentifier;                //@synthesize profileIdentifier=_profileIdentifier - In the implementation block
@property (copy) NSString * profileUUID;                      //@synthesize profileUUID=_profileUUID - In the implementation block
@property (copy) NSDate * profileIngestionDate;               //@synthesize profileIngestionDate=_profileIngestionDate - In the implementation block
@property (copy) NSString * systemVersion;                    //@synthesize systemVersion=_systemVersion - In the implementation block
@property (assign) BOOL isSetAside;                           //@synthesize isSetAside=_isSetAside - In the implementation block
@property (assign) BOOL applicationCreated;                   //@synthesize applicationCreated=_applicationCreated - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setSystemVersion:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)systemVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)profileIdentifier;
-(void)setProfileIdentifier:(NSString *)arg1 ;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(id)copyLegacyDictionary;
-(id)initFromLegacyDictionary:(id)arg1 ;
-(BOOL)applicationCreated;
-(BOOL)isSetAside;
-(void)setApplicationCreated:(BOOL)arg1 ;
-(void)setPayloadUUID:(NSString *)arg1 ;
-(void)setPayloadOrganization:(NSString *)arg1 ;
-(void)setProfileOrganization:(NSString *)arg1 ;
-(void)setProfileUUID:(NSString *)arg1 ;
-(void)setIsSetAside:(BOOL)arg1 ;
-(NSString *)payloadUUID;
-(NSString *)payloadProtocolType;
-(NSString *)payloadOrganization;
-(NSString *)profileUUID;
-(NSString *)profileOrganization;
-(NSDate *)profileIngestionDate;
-(long long)profileSource;
-(void)setPayloadProtocolType:(NSString *)arg1 ;
-(void)setProfileIngestionDate:(NSDate *)arg1 ;
-(void)setProfileSource:(long long)arg1 ;
@end

