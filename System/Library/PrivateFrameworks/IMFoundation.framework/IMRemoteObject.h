/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface IMRemoteObject : NSObject {

	id _internal;

}

@property (nonatomic,readonly) NSString * portName; 
@property (nonatomic,retain) NSString * processName; 
@property (assign,nonatomic) int pid; 
@property (nonatomic,readonly) NSObject*<OS_xpc_object> connection; 
@property (nonatomic,readonly) BOOL isValid; 
@property (nonatomic,readonly) BOOL forceSecureCoding; 
+(void)initialize;
+(void)_registerIMRemoteObject:(id)arg1 ;
+(void)_unregisterIMRemoteObject:(id)arg1 ;
+(id)_remoteObjects;
-(void)finalize;
-(void)setProcessName:(NSString *)arg1 ;
-(void)dealloc;
-(id)description;
-(void)invalidate;
-(BOOL)isValid;
-(id)_queue;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(NSString *)processName;
-(void)forwardInvocation:(id)arg1 ;
-(NSObject*<OS_xpc_object>)connection;
-(void)_portDidBecomeInvalid;
-(BOOL)forceSecureCoding;
-(void)_systemShutdown:(id)arg1 ;
-(id)_initWithConnection:(id)arg1 portName:(id)arg2 protocol:(id)arg3 alreadyConfigured:(BOOL)arg4 forceSecureCoding:(BOOL)arg5 ;
-(void)_cleanupMachBitsCanPost:(BOOL)arg1 ;
-(unsigned long long)forwardXPCObject:(id)arg1 messageContext:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 ;
-(id)initWithPortName:(id)arg1 protocol:(id)arg2 ;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 forceSecureCoding:(BOOL)arg4 ;
-(void)setPid:(int)arg1 ;
-(void)setPortName:(NSString *)arg1 ;
-(NSString *)portName;
-(id)initWithConnection:(id)arg1 protocol:(id)arg2 alreadyConfigured:(BOOL)arg3 ;
-(int)pid;
@end

