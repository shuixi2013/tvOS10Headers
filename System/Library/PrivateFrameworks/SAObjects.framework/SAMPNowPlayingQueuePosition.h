/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:13 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString;

@interface SAMPNowPlayingQueuePosition : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long index; 
@property (assign,nonatomic) long long queueSize; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)nowPlayingQueuePosition;
+(id)nowPlayingQueuePositionWithDictionary:(id)arg1 context:(id)arg2 ;
-(long long)index;
-(void)setIndex:(long long)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(long long)queueSize;
-(void)setQueueSize:(long long)arg1 ;
@end

