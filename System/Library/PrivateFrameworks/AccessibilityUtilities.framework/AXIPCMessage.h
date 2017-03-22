/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding> {

	int _key;
	unsigned _clientPort;
	NSDictionary* _payload;
	SCD_Struct_AX4 _auditToken;

}

@property (assign,nonatomic) int key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;                     //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned clientPort;                      //@synthesize clientPort=_clientPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX4 auditToken;                //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,readonly) NSString * senderBundleId; 
+(BOOL)supportsSecureCoding;
+(id)archivedMessageFromData:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(int)key;
-(NSDictionary *)payload;
-(void)setClientPort:(unsigned)arg1 ;
-(void)setKey:(int)arg1 ;
-(SCD_Struct_AX4)auditToken;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setAuditToken:(SCD_Struct_AX4)arg1 ;
-(id)initWithKey:(int)arg1 ;
-(id)initWithKey:(int)arg1 payload:(id)arg2 ;
-(unsigned)clientPort;
-(id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3 ;
-(NSString *)senderBundleId;
@end

