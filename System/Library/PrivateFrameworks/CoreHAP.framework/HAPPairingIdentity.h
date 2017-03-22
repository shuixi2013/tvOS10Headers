/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, HAPPairingKey;

@interface HAPPairingIdentity : NSObject <NSSecureCoding> {

	NSString* _identifier;
	HAPPairingKey* _publicKey;
	HAPPairingKey* _privateKey;
	unsigned long long _permissions;

}

@property (nonatomic,copy,readonly) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) HAPPairingKey * publicKey;                   //@synthesize publicKey=_publicKey - In the implementation block
@property (nonatomic,readonly) HAPPairingKey * privateKey;                  //@synthesize privateKey=_privateKey - In the implementation block
@property (nonatomic,readonly) unsigned long long permissions;              //@synthesize permissions=_permissions - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(NSString *)identifier;
-(id)shortDescription;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(HAPPairingKey *)publicKey;
-(HAPPairingKey *)privateKey;
-(unsigned long long)permissions;
-(id)initWithIdentifier:(id)arg1 publicKey:(id)arg2 privateKey:(id)arg3 permissions:(unsigned long long)arg4 ;
@end

