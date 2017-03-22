/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INIntentResponseExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _INPBIntentResponse, NSUserActivity, NSString;

@interface INIntentResponse : NSObject <INCacheableContainer, INIntentResponseExport, NSCopying, NSSecureCoding> {

	NSUserActivity* _userActivity;
	_INPBIntentResponse* _backingStore;
	long long _code;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) _INPBIntentResponse * backingStore;              //@synthesize backingStore=_backingStore - In the implementation block
@property (assign,nonatomic) BOOL shouldOpenContainingApplication; 
@property (nonatomic,readonly) long long code;                                       //@synthesize code=_code - In the implementation block
@property (nonatomic,copy,readonly) NSUserActivity * userActivity;                   //@synthesize userActivity=_userActivity - In the implementation block
+(BOOL)supportsSecureCoding;
+(void)load;
+(long long)_codeFromType:(int)arg1 errorCode:(int)arg2 appLaunchRequested:(BOOL)arg3 ;
+(int)_typeFromCode:(long long)arg1 ;
+(int)_errorCodeFromCode:(long long)arg1 ;
+(BOOL)_appLaunchRequestedFromCode:(long long)arg1 ;
+(long long)_intentHandlingStatusFromCode:(long long)arg1 ;
+(id)responseSuccess;
+(id)responseFailure;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)description;
-(long long)code;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSUserActivity *)userActivity;
-(id)_dictionaryRepresentation;
-(id)initWithCode:(long long)arg1 userActivity:(id)arg2 ;
-(id)initWithBackingStore:(id)arg1 ;
-(id)_payloadResponseMessageData;
-(void)_setPayloadResponseMessageData:(id)arg1 ;
-(_INPBIntentResponse *)backingStore;
-(id)cacheableObjects;
-(long long)_intentHandlingStatus;
-(void)setShouldOpenContainingApplication:(BOOL)arg1 ;
-(BOOL)shouldOpenContainingApplication;
-(id)protoData;
-(id)_impl;
@end

