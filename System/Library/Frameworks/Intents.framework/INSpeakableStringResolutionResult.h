/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:05 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INSpeakableStringResolutionResultExport.h>

@class NSString;

@interface INSpeakableStringResolutionResult : INIntentResolutionResult <INSpeakableStringResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)successWithResolvedString:(id)arg1 ;
+(id)disambiguationWithStringsToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithStringToConfirm:(id)arg1 ;
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativeStrings:(id)arg2 ;
@end
