/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSArray, NSString;

@interface SAHACommandCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSArray * actionResults; 
@property (nonatomic,copy) NSString * commandOutcome; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)commandCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)commandCompleted;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setCommandOutcome:(NSString *)arg1 ;
-(void)setActionResults:(NSArray *)arg1 ;
-(NSString *)commandOutcome;
-(NSArray *)actionResults;
@end

