/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceServices/VoiceServices-Structs.h>
#import <VoiceServices/VSRecognitionRecognizeAction.h>

@class NSString, NSMutableDictionary;

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {

	NSString* _repeatedSpokenFeedbackString;
	NSString* _sequenceTag;
	NSMutableDictionary* _knownValues;
	NSMutableDictionary* _knownPhoneticValues;
	NSMutableDictionary* _ambiguousValues;
	NSMutableDictionary* _ambiguousPhoneticValues;
	void* _context;

}
-(id)_keywords;
-(void)dealloc;
-(int)completionType;
-(BOOL)_keywordIndexChanged;
-(VSRecognitionDisambiguationContextRef)_disambiguationContext;
-(void)setRepeatedSpokenFeedbackString:(id)arg1 ;
-(id)repeatedSpokenFeedbackString;
-(id)sequenceTag;
-(void)setSequenceTag:(id)arg1 ;
-(id)knownValueForClassIdentifier:(id)arg1 ;
-(void)setKnownValue:(id)arg1 phoneticValue:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)knownValuesForClassIdentifier:(id)arg1 ;
-(void)setKnownValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(id)ambiguousValuesForClassIdentifier:(id)arg1 ;
-(void)setAmbiguousValues:(id)arg1 phoneticValues:(id)arg2 forClassIdentifier:(id)arg3 ;
-(VSRecognitionRef)_createRecognitionInstanceWithCallbacks:(SCD_Struct_VS4*)arg1 info:(void*)arg2 ;
-(id)_actionForEmptyResults;
-(void)setKeywords:(id)arg1 ;
@end

