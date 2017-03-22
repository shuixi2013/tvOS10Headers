/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WirelessProximity/WPClient.h>

@protocol WPStateTrackerProtocol;
@interface WPStateTracker : WPClient {

	id<WPStateTrackerProtocol> _delegate;

}

@property (assign,nonatomic,__weak) id<WPStateTrackerProtocol> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<WPStateTrackerProtocol>)arg1 ;
-(id<WPStateTrackerProtocol>)delegate;
-(void)invalidate;
-(id)initWithDelegate:(id)arg1 ;
-(id)clientAsString;
-(void)stateDidChange:(long long)arg1 ;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
@end

