/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@class MSASStateMachine, MSASAlbum, IDSService, NSMutableDictionary, NSString;

@interface MSASPhoneInvitations : NSObject <IDSServiceDelegate> {

	MSASStateMachine* _stateMachine;
	MSASAlbum* _album;
	IDSService* _idsService;
	NSMutableDictionary* _sendMessageIdentifierToPhone;

}

@property (nonatomic,retain) MSASStateMachine * stateMachine;                                 //@synthesize stateMachine=_stateMachine - In the implementation block
@property (nonatomic,retain) MSASAlbum * album;                                               //@synthesize album=_album - In the implementation block
@property (nonatomic,retain) IDSService * idsService;                                         //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * sendMessageIdentifierToPhone;              //@synthesize sendMessageIdentifierToPhone=_sendMessageIdentifierToPhone - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)addPendingPhoneInvitations:(id)arg1 toOwnedAlbum:(id)arg2 inStateMachin:(id)arg3 ;
-(void)removeSharingRelationships:(id)arg1 forAlbum:(id)arg2 ;
-(NSMutableDictionary *)sendMessageIdentifierToPhone;
-(void)setSendMessageIdentifierToPhone:(NSMutableDictionary *)arg1 ;
-(MSASStateMachine *)stateMachine;
-(void)setStateMachine:(MSASStateMachine *)arg1 ;
-(MSASAlbum *)album;
-(void)setAlbum:(MSASAlbum *)arg1 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(IDSService *)idsService;
-(void)setIdsService:(IDSService *)arg1 ;
@end

