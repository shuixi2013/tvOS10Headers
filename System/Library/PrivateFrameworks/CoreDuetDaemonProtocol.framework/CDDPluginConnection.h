/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:59 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CDDebug, CDDXPCConnection;

@interface CDDPluginConnection : NSObject {

	CDDebug* _debug;
	unsigned long long _clientId;
	CDDXPCConnection* _connection;

}

@property (readonly) CDDebug * debug;                            //@synthesize debug=_debug - In the implementation block
@property (readonly) unsigned long long clientId;                //@synthesize clientId=_clientId - In the implementation block
@property (readonly) CDDXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(CDDXPCConnection *)connection;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)sendMessageWithType:(long long)arg1 error:(id*)arg2 dictionaryKey:(id)arg3 dictionary:(id)arg4 replyHandler:(/*^block*/id)arg5 ;
-(BOOL)registerForSignoffWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)admissionSignoffConditionsChanged:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setTriggerConditions:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)setMitigation:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)currentMitigationSettingsWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(BOOL)triggerSystemDataExchange:(id)arg1 error:(id*)arg2 replyHandler:(/*^block*/id)arg3 ;
-(BOOL)requestSystemDataWithError:(id*)arg1 replyHandler:(/*^block*/id)arg2 ;
-(CDDebug *)debug;
-(id)initWithClientId:(unsigned long long)arg1 error:(id*)arg2 ;
-(unsigned long long)clientId;
@end

