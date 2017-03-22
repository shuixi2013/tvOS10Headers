/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INSetRadioStationIntentExport.h>

@class NSNumber, NSString;

@interface INSetRadioStationIntent : INIntent <INSetRadioStationIntentExport>

@property (nonatomic,readonly) long long radioType; 
@property (nonatomic,copy,readonly) NSNumber * frequency; 
@property (nonatomic,copy,readonly) NSString * stationName; 
@property (nonatomic,copy,readonly) NSString * channel; 
@property (nonatomic,copy,readonly) NSNumber * presetNumber; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(NSNumber *)frequency;
-(void)setFrequency:(NSNumber *)arg1 ;
-(id)_dictionaryRepresentation;
-(void)setChannel:(NSString *)arg1 ;
-(NSString *)channel;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(void)setRadioType:(long long)arg1 ;
-(void)setStationName:(NSString *)arg1 ;
-(void)setPresetNumber:(NSNumber *)arg1 ;
-(long long)radioType;
-(NSString *)stationName;
-(NSNumber *)presetNumber;
-(id)initWithRadioType:(long long)arg1 frequency:(id)arg2 stationName:(id)arg3 channel:(id)arg4 presetNumber:(id)arg5 ;
@end
