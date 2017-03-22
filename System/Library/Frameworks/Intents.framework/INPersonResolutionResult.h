/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntentResolutionResult.h>
#import <libobjc.A.dylib/INPersonResolutionResultExport.h>

@class NSString;

@interface INPersonResolutionResult : INIntentResolutionResult <INPersonResolutionResultExport>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)unsupportedWithReason:(unsigned long long)arg1 alternativePeople:(id)arg2 ;
+(id)needsMoreDetailsForPerson:(id)arg1 ;
+(id)successWithResolvedPerson:(id)arg1 ;
+(id)disambiguationWithPeopleToDisambiguate:(id)arg1 ;
+(id)confirmationRequiredWithPersonToConfirm:(id)arg1 ;
@end

