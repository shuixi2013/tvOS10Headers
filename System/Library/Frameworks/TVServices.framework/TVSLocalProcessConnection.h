/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVServices.framework/TVServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSXPCInterface;

@interface TVSLocalProcessConnection : NSObject {

	NSString* _serviceName;
	id _exportedObject;
	NSXPCInterface* _exportedInterface;
	NSXPCInterface* _remoteObjectInterface;
	/*^block*/id _interruptionHandler;
	/*^block*/id _invalidationHandler;

}

@property (copy,readonly) NSString * serviceName;                                 //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,retain) id exportedObject;                                   //@synthesize exportedObject=_exportedObject - In the implementation block
@property (nonatomic,retain) NSXPCInterface * exportedInterface;                  //@synthesize exportedInterface=_exportedInterface - In the implementation block
@property (nonatomic,retain) NSXPCInterface * remoteObjectInterface;              //@synthesize remoteObjectInterface=_remoteObjectInterface - In the implementation block
@property (nonatomic,copy) id interruptionHandler;                                //@synthesize interruptionHandler=_interruptionHandler - In the implementation block
@property (nonatomic,copy) id invalidationHandler;                                //@synthesize invalidationHandler=_invalidationHandler - In the implementation block
-(id)exportedObject;
-(void)invalidate;
-(void)resume;
-(NSXPCInterface *)exportedInterface;
-(void)setRemoteObjectInterface:(NSXPCInterface *)arg1 ;
-(id)remoteObjectProxyWithErrorHandler:(/*^block*/id)arg1 ;
-(id)interruptionHandler;
-(void)setInterruptionHandler:(id)arg1 ;
-(id)invalidationHandler;
-(void)setInvalidationHandler:(id)arg1 ;
-(id)initWithServiceName:(id)arg1 ;
-(void)setExportedInterface:(NSXPCInterface *)arg1 ;
-(void)setExportedObject:(id)arg1 ;
-(id)removeObjectProxy;
-(NSXPCInterface *)remoteObjectInterface;
-(NSString *)serviceName;
@end
