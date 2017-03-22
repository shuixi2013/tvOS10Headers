/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSURL;


@protocol INTermsAndConditionsExport <NSObject,JSExport>
@property (nonatomic,readonly) NSString * localizedTermsAndConditionsText; 
@property (nonatomic,readonly) NSURL * privacyPolicyURL; 
@property (nonatomic,readonly) NSURL * termsAndConditionsURL; 
@required
-(id)init;
-(NSString *)localizedTermsAndConditionsText;
-(NSURL *)privacyPolicyURL;
-(NSURL *)termsAndConditionsURL;

@end

