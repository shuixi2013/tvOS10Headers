/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, AFVoiceInfo;

@interface AFSiriRingtone : NSObject {

	BOOL _languageMismatch;
	NSString* _voiceLanguage;
	NSArray* _contacts;
	NSString* _displayedCallerID;
	long long _callerIDType;
	NSString* _callServiceSpeakableName;
	NSString* _callDestinationID;
	long long _callDestinationIDType;
	AFVoiceInfo* _voiceInfo;

}

@property (nonatomic,retain) NSArray * contacts;                             //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSString * displayedCallerID;                     //@synthesize displayedCallerID=_displayedCallerID - In the implementation block
@property (assign,nonatomic) long long callerIDType;                         //@synthesize callerIDType=_callerIDType - In the implementation block
@property (nonatomic,copy) NSString * callServiceSpeakableName;              //@synthesize callServiceSpeakableName=_callServiceSpeakableName - In the implementation block
@property (nonatomic,copy) NSString * callDestinationID;                     //@synthesize callDestinationID=_callDestinationID - In the implementation block
@property (assign,nonatomic) long long callDestinationIDType;                //@synthesize callDestinationIDType=_callDestinationIDType - In the implementation block
@property (nonatomic,readonly) AFVoiceInfo * voiceInfo;                      //@synthesize voiceInfo=_voiceInfo - In the implementation block
@property (nonatomic,readonly) NSString * textToSpeak; 
-(id)init;
-(id)_generateSpokenTextForContacts:(id)arg1 voiceLanguage:(id)arg2 displayedCallerID:(id)arg3 callerIDType:(long long)arg4 callDestinationID:(id)arg5 callDestinationIDType:(long long)arg6 callServiceSpeakableName:(id)arg7 ;
-(id)_spokenTextForContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForCallerID:(id)arg1 ofType:(long long)arg2 rawCaller:(id)arg3 rawCallerType:(long long)arg4 languageCode:(id)arg5 ;
-(id)_spokenTextForCallDestinationID:(id)arg1 ofType:(long long)arg2 callServiceSpeakableName:(id)arg3 languageCode:(id)arg4 ;
-(id)_phoneticNamesForContact:(id)arg1 languageCode:(id)arg2 ;
-(id)_spokenTextForOneContact:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForTwoContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_spokenTextForThreeContacts:(id)arg1 callServiceSpeakableName:(id)arg2 languageCode:(id)arg3 ;
-(id)_escapeCallerIDString:(id)arg1 forType:(long long)arg2 ;
-(id)_escapeCallDestinationIDString:(id)arg1 forType:(long long)arg2 ;
-(void)_phoneticInfoForContact:(id)arg1 languageCode:(id)arg2 firstName:(id*)arg3 middleName:(id*)arg4 lastName:(id*)arg5 nickname:(id*)arg6 ;
-(NSString *)displayedCallerID;
-(void)setDisplayedCallerID:(NSString *)arg1 ;
-(long long)callerIDType;
-(void)setCallerIDType:(long long)arg1 ;
-(NSString *)callServiceSpeakableName;
-(void)setCallServiceSpeakableName:(NSString *)arg1 ;
-(NSString *)callDestinationID;
-(void)setCallDestinationID:(NSString *)arg1 ;
-(long long)callDestinationIDType;
-(void)setCallDestinationIDType:(long long)arg1 ;
-(AFVoiceInfo *)voiceInfo;
-(id)initWithContacts:(id)arg1 ;
-(void)setContacts:(NSArray *)arg1 ;
-(NSArray *)contacts;
-(NSString *)textToSpeak;
@end

