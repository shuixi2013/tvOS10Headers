/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/InteractionProtocol.h>

@class NSString;

@interface CHInteraction : NSObject <InteractionProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)deleteInteractionWithCall:(id)arg1 ;
-(void)donateCallHistoryInteractionWithCall:(id)arg1 ;
-(void)deleteInteractionWithCalls:(id)arg1 ;
@end

