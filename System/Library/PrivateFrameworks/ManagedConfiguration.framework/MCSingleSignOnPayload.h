/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCPayload.h>

@class NSString, MCSingleSignOnPayloadKerberosInfo;

@interface MCSingleSignOnPayload : MCPayload {

	NSString* _humanReadableName;
	MCSingleSignOnPayloadKerberosInfo* _kerberosInfo;

}

@property (nonatomic,retain) NSString * humanReadableName;                                  //@synthesize humanReadableName=_humanReadableName - In the implementation block
@property (nonatomic,retain) MCSingleSignOnPayloadKerberosInfo * kerberosInfo;              //@synthesize kerberosInfo=_kerberosInfo - In the implementation block
+(id)typeStrings;
+(id)localizedSingularForm;
+(id)localizedPluralForm;
-(id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3 ;
-(id)stubDictionary;
-(id)payloadDescriptionKeyValueSections;
-(MCSingleSignOnPayloadKerberosInfo *)kerberosInfo;
-(void)setHumanReadableName:(NSString *)arg1 ;
-(void)setKerberosInfo:(MCSingleSignOnPayloadKerberosInfo *)arg1 ;
-(id)description;
-(id)title;
-(NSString *)humanReadableName;
@end

