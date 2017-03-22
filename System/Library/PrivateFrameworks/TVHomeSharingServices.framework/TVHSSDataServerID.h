/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:48 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVHomeSharingServices.framework/TVHomeSharingServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVHomeSharingServices/TVHomeSharingServices-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface TVHSSDataServerID : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _databaseID;
	unsigned long long _machineID;
	NSString* _serviceName;
	NSString* _serviceType;
	NSString* _serviceDomain;

}

@property (assign,nonatomic) unsigned long long databaseID;              //@synthesize databaseID=_databaseID - In the implementation block
@property (assign,nonatomic) unsigned long long machineID;               //@synthesize machineID=_machineID - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                       //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                       //@synthesize serviceType=_serviceType - In the implementation block
@property (nonatomic,copy) NSString * serviceDomain;                     //@synthesize serviceDomain=_serviceDomain - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(unsigned long long)machineID;
-(void)setMachineID:(unsigned long long)arg1 ;
-(unsigned long long)databaseID;
-(void)setDatabaseID:(unsigned long long)arg1 ;
-(void)setServiceDomain:(NSString *)arg1 ;
-(BOOL)_isEqualToDataServerID:(id)arg1 ;
-(id)initWithMachineID:(unsigned long long)arg1 databaseID:(unsigned long long)arg2 serviceName:(id)arg3 serviceType:(id)arg4 serviceDomain:(id)arg5 ;
-(void)setServiceName:(NSString *)arg1 ;
-(NSString *)serviceName;
-(NSString *)serviceDomain;
@end

