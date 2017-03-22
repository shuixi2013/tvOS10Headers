/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSNumber, NSString;

@interface HMDHAPMetadataCategory : NSObject <NSSecureCoding> {

	NSNumber* _identifier;
	NSString* _uuidStr;
	NSString* _name;
	NSString* _catDescription;

}

@property (nonatomic,retain) NSNumber * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                     //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * catDescription;              //@synthesize catDescription=_catDescription - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSNumber *)identifier;
-(void)setIdentifier:(NSNumber *)arg1 ;
-(NSString *)uuidStr;
-(id)generateDictionary;
-(NSString *)catDescription;
-(id)initWithIdentifier:(id)arg1 uuid:(id)arg2 name:(id)arg3 description:(id)arg4 ;
-(void)setUuidStr:(NSString *)arg1 ;
-(void)setCatDescription:(NSString *)arg1 ;
@end

