/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSearchCallHistoryIntentExport.h>

@class INDateComponentsRange, INPerson, NSString;

@interface INSearchCallHistoryIntent : INIntent <INSearchCallHistoryIntentExport>

@property (nonatomic,readonly) long long callType; 
@property (nonatomic,copy,readonly) INDateComponentsRange * dateCreated; 
@property (nonatomic,copy,readonly) INPerson * recipient; 
@property (nonatomic,readonly) unsigned long long callCapabilities; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)_dictionaryRepresentation;
-(INPerson *)recipient;
-(void)setRecipient:(INPerson *)arg1 ;
-(void)setCallType:(long long)arg1 ;
-(long long)callType;
-(INDateComponentsRange *)dateCreated;
-(void)setDateCreated:(INDateComponentsRange *)arg1 ;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(unsigned long long)callCapabilities;
-(void)setCallCapabilities:(unsigned long long)arg1 ;
-(id)initWithCallType:(long long)arg1 dateCreated:(id)arg2 recipient:(id)arg3 callCapabilities:(unsigned long long)arg4 ;
@end

