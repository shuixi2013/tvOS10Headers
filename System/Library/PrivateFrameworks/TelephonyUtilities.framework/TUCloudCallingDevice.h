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

@class NSString;

@interface TUCloudCallingDevice : NSObject <NSSecureCoding, NSCopying> {

	BOOL _defaultPairedDevice;
	NSString* _name;
	NSString* _modelIdentifier;
	NSString* _uniqueID;
	NSString* _phoneNumberURI;

}

@property (nonatomic,copy) NSString * name;                                                      //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSString * modelIdentifier;                                           //@synthesize modelIdentifier=_modelIdentifier - In the implementation block
@property (nonatomic,copy) NSString * uniqueID;                                                  //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,copy) NSString * phoneNumberURI;                                            //@synthesize phoneNumberURI=_phoneNumberURI - In the implementation block
@property (assign,getter=isDefaultPairedDevice,nonatomic) BOOL defaultPairedDevice;              //@synthesize defaultPairedDevice=_defaultPairedDevice - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)phoneNumberURI;
-(void)setPhoneNumberURI:(NSString *)arg1 ;
-(NSString *)uniqueID;
-(NSString *)modelIdentifier;
-(BOOL)isDefaultPairedDevice;
-(void)setModelIdentifier:(NSString *)arg1 ;
-(void)setDefaultPairedDevice:(BOOL)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
@end

