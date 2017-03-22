/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSystemServiceFacility.h>

@protocol FBDisplayLayoutServiceServerDelegate;
@class NSMutableDictionary;

@interface FBDisplayLayoutServiceServer : FBSystemServiceFacility {

	id<FBDisplayLayoutServiceServerDelegate> _delegate;
	NSMutableDictionary* _calloutQueuesByQOS;
	NSMutableDictionary* _defaultQOSClientsByDisplayType;
	NSMutableDictionary* _utilityQOSClientsByDisplayType;

}

@property (assign,nonatomic) id<FBDisplayLayoutServiceServerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<FBDisplayLayoutServiceServerDelegate>)arg1 ;
-(void)dealloc;
-(id<FBDisplayLayoutServiceServerDelegate>)delegate;
-(id)initWithIdentifier:(id)arg1 queue:(id)arg2 clientAuthenticator:(id)arg3 ;
-(void)noteClientDidConnect:(id)arg1 withMessage:(id)arg2 ;
-(void)noteClientDidDisconnect:(id)arg1 ;
-(void)noteDidReceiveMessage:(id)arg1 withType:(long long)arg2 fromClient:(id)arg3 ;
-(id)prerequisiteMilestones;
-(void)publishDisplayLayout:(id)arg1 ;
-(id)_defaultQOSClientsForDisplayType:(unsigned long long)arg1 ;
-(void)_sendDisplayLayout:(id)arg1 toClients:(id)arg2 withQualityOfService:(unsigned long long)arg3 ;
-(id)_utilityQOSClientsForDisplayType:(unsigned long long)arg1 ;
-(id)_calloutQueueForQOS:(unsigned long long)arg1 ;
@end
