/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUtils/CoreUtils-Structs.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSObject, NSXPCListenerEndpoint, NSString;

@interface CUPairingDaemon : NSObject <NSXPCListenerDelegate> {

	unsigned long long _stateHandle;
	NSMutableSet* _xpcConnections;
	NSXPCListener* _xpcListener;
	BOOL _testMode;
	NSObject*<OS_dispatch_queue> _dispatchQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> dispatchQueue;                  //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) NSXPCListenerEndpoint * testListenerEndpoint; 
@property (assign,nonatomic) BOOL testMode;                                               //@synthesize testMode=_testMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)invalidate;
-(void)reset;
-(void)activate;
-(void)_invalidate;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)detailedDescription;
-(os_state_data_s*)_stateDump;
-(NSXPCListenerEndpoint *)testListenerEndpoint;
-(id)_copyOrCreateIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_copyIdentityWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(int)_deleteIdentityWithOptions:(unsigned long long)arg1 ;
-(int)_saveIdentity:(id)arg1 options:(unsigned long long)arg2 ;
-(id)_getPairedPeersWithOptions:(unsigned long long)arg1 error:(int*)arg2 ;
-(id)_findPairedPeer:(id)arg1 options:(unsigned long long)arg2 error:(int*)arg3 ;
-(int)_savePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(int)_removePairedPeer:(id)arg1 options:(unsigned long long)arg2 ;
-(BOOL)testMode;
-(void)_activate;
-(void)_connectionInvalidated:(id)arg1 ;
-(void)setTestMode:(BOOL)arg1 ;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
@end

