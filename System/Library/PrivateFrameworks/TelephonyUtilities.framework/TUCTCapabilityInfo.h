/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUtilities/TelephonyUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/TUPubliclyAccessibleCopying.h>

@class NSURL, NSData, NSString;

@interface TUCTCapabilityInfo : NSObject <NSSecureCoding, NSCopying, TUPubliclyAccessibleCopying> {

	BOOL _canEnable;
	BOOL _enabled;
	BOOL _canEnableRoaming;
	BOOL _roamingEnabled;
	int _provisioningStatus;
	NSURL* _provisioningURL;
	NSData* _provisioningPostData;

}

@property (assign,nonatomic) int provisioningStatus;                                                     //@synthesize provisioningStatus=_provisioningStatus - In the implementation block
@property (nonatomic,retain) NSURL * provisioningURL;                                                    //@synthesize provisioningURL=_provisioningURL - In the implementation block
@property (nonatomic,retain) NSData * provisioningPostData;                                              //@synthesize provisioningPostData=_provisioningPostData - In the implementation block
@property (assign,nonatomic) BOOL canEnable;                                                             //@synthesize canEnable=_canEnable - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                                              //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic) BOOL canEnableRoaming;                                                      //@synthesize canEnableRoaming=_canEnableRoaming - In the implementation block
@property (assign,getter=isRoamingEnabled,nonatomic) BOOL roamingEnabled;                                //@synthesize roamingEnabled=_roamingEnabled - In the implementation block
@property (getter=isProvisioningURLInvalid,nonatomic,readonly) BOOL provisioningURLInvalid; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)canEnable;
-(BOOL)isRoamingEnabled;
-(int)provisioningStatus;
-(NSURL *)provisioningURL;
-(void)invalidateProvisioningURL;
-(NSData *)provisioningPostData;
-(void)setProvisioningURL:(NSURL *)arg1 ;
-(void)setProvisioningStatus:(int)arg1 ;
-(void)setProvisioningPostData:(NSData *)arg1 ;
-(void)setCanEnable:(BOOL)arg1 ;
-(void)setRoamingEnabled:(BOOL)arg1 ;
-(void)setCanEnableRoaming:(BOOL)arg1 ;
-(BOOL)canEnableRoaming;
-(id)publiclyAccessibleCopyWithZone:(NSZone*)arg1 ;
-(id)publiclyAccessibleCopy;
-(BOOL)isProvisioningURLInvalid;
@end

