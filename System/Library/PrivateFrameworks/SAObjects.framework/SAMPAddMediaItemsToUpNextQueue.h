/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString, SAMPCollection;

@interface SAMPAddMediaItemsToUpNextQueue : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * insertLocation; 
@property (nonatomic,retain) SAMPCollection * mediaCollection; 
+(id)addMediaItemsToUpNextQueue;
+(id)addMediaItemsToUpNextQueueWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)insertLocation;
-(void)setInsertLocation:(NSString *)arg1 ;
-(SAMPCollection *)mediaCollection;
-(void)setMediaCollection:(SAMPCollection *)arg1 ;
@end

