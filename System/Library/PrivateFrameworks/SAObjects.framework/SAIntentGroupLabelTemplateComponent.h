/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString;

@interface SAIntentGroupLabelTemplateComponent : SADomainObject

@property (nonatomic,copy) NSString * labelTemplateComponentStyle; 
@property (nonatomic,copy) NSString * text; 
+(id)labelTemplateComponent;
+(id)labelTemplateComponentWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)labelTemplateComponentStyle;
-(void)setLabelTemplateComponentStyle:(NSString *)arg1 ;
@end
