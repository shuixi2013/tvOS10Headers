/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIDomainObjectPicker.h>

@class NSArray;

@interface SAABPersonPicker : SAUIDomainObjectPicker

@property (nonatomic,copy) NSArray * persons; 
@property (assign,nonatomic) BOOL showImmediately; 
+(id)personPicker;
+(id)personPickerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSArray *)persons;
-(void)setPersons:(NSArray *)arg1 ;
-(BOOL)showImmediately;
-(void)setShowImmediately:(BOOL)arg1 ;
@end

