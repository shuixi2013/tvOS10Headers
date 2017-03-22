/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, SAGKSpeakableAnswer;

@interface SAGKDirectAnswer : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * answer; 
@property (nonatomic,copy) NSString * confidenceLevel; 
@property (nonatomic,retain) SAGKSpeakableAnswer * speakableAnswer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)directAnswer;
+(id)directAnswerWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)answer;
-(void)setAnswer:(NSString *)arg1 ;
-(SAGKSpeakableAnswer *)speakableAnswer;
-(void)setSpeakableAnswer:(SAGKSpeakableAnswer *)arg1 ;
-(NSString *)confidenceLevel;
-(void)setConfidenceLevel:(NSString *)arg1 ;
@end

