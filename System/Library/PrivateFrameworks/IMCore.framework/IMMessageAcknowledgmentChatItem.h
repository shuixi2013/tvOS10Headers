/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:07 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <IMCore/IMCore-Structs.h>
#import <IMCore/IMAssociatedMessageChatItem.h>

@interface IMMessageAcknowledgmentChatItem : IMAssociatedMessageChatItem {

	long long _messageAcknowledgmentType;

}

@property (nonatomic,readonly) long long messageAcknowledgmentType;              //@synthesize messageAcknowledgmentType=_messageAcknowledgmentType - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithItem:(id)arg1 sender:(id)arg2 messageAcknowledgmentType:(long long)arg3 ;
-(long long)messageAcknowledgmentType;
@end

