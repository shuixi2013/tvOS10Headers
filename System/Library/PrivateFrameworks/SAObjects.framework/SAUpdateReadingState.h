/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString;

@interface SAUpdateReadingState : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * readingStateId; 
@property (assign,nonatomic) long long updatedGroupIndex; 
@property (assign,nonatomic) long long updatedItemIndex; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)updateReadingState;
+(id)updateReadingStateWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)readingStateId;
-(void)setReadingStateId:(NSString *)arg1 ;
-(long long)updatedGroupIndex;
-(void)setUpdatedGroupIndex:(long long)arg1 ;
-(long long)updatedItemIndex;
-(void)setUpdatedItemIndex:(long long)arg1 ;
@end

