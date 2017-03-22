/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, SASource;

@interface SAABContactGroup : SADomainObject

@property (nonatomic,copy) NSString * groupName; 
@property (nonatomic,retain) SASource * groupSource; 
+(id)contactGroup;
+(id)contactGroupWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)groupName;
-(void)setGroupName:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(SASource *)groupSource;
-(void)setGroupSource:(SASource *)arg1 ;
@end

