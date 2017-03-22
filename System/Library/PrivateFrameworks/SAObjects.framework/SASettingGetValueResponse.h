/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SASettingResponse.h>
#import <SAObjects/SASettingSupplier.h>

@class SASettingEntity, NSString;

@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier>

@property (nonatomic,retain) SASettingEntity * setting; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getValueResponse;
+(id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setSetting:(SASettingEntity *)arg1 ;
-(SASettingEntity *)setting;
@end

