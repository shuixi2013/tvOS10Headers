/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:08 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, NSNumber;

@interface SANPSetVolumeLevel : SABaseClientBoundCommand

@property (assign,nonatomic) BOOL acknowledgedExceedingVolumeLimit; 
@property (nonatomic,copy) NSString * actionType; 
@property (nonatomic,copy) NSNumber * volumeValue; 
+(id)setVolumeLevel;
+(id)setVolumeLevelWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)actionType;
-(void)setActionType:(NSString *)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)acknowledgedExceedingVolumeLimit;
-(void)setAcknowledgedExceedingVolumeLimit:(BOOL)arg1 ;
-(void)setVolumeValue:(NSNumber *)arg1 ;
-(NSNumber *)volumeValue;
@end

