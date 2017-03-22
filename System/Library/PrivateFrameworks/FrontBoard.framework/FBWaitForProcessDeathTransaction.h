/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBTransaction.h>
#import <libobjc.A.dylib/FBProcessManagerObserver.h>

@class FBProcess, BSWatchdog, NSString;

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessManagerObserver> {

	FBProcess* _process;
	double _timeout;
	BSWatchdog* _watchdog;

}

@property (nonatomic,retain,readonly) FBProcess * process;              //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) double timeout;                          //@synthesize timeout=_timeout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(double)timeout;
-(FBProcess *)process;
-(void)_didComplete;
-(BOOL)_canBeInterrupted;
-(id)_customizedDescriptionProperties;
-(void)_begin;
-(id)initWithProcess:(id)arg1 timeout:(double)arg2 ;
-(void)processManager:(id)arg1 didAddProcess:(id)arg2 ;
-(void)processManager:(id)arg1 didRemoveProcess:(id)arg2 ;
-(id)initWithProcess:(id)arg1 ;
@end

