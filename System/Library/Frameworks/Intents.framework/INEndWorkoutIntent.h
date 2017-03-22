/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INEndWorkoutIntentExport.h>

@class INSpeakableString, NSString;

@interface INEndWorkoutIntent : INIntent <INEndWorkoutIntentExport>

@property (nonatomic,copy,readonly) INSpeakableString * workoutName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 ;
-(void)setWorkoutName:(INSpeakableString *)arg1 ;
-(INSpeakableString *)workoutName;
-(id)initWithWorkoutName:(id)arg1 ;
@end

