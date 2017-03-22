/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSUUID;


@protocol NWNetworkAgent
@property (nonatomic,copy) NSString * agentDescription; 
@property (nonatomic,copy) NSUUID * agentUUID; 
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,getter=isKernelActivated,nonatomic) BOOL kernelActivated; 
@property (assign,getter=isUserActivated,nonatomic) BOOL userActivated; 
@property (assign,getter=isVoluntary,nonatomic) BOOL voluntary; 
@property (assign,getter=isSpecificUseOnly,nonatomic) BOOL specificUseOnly; 
@property (assign,getter=isNetworkProvider,nonatomic) BOOL networkProvider; 
@property (assign,getter=isNexusProvider,nonatomic) BOOL nexusProvider; 
@optional
-(BOOL)startAgentWithOptions:(id)arg1;
-(BOOL)assertAgentWithOptions:(id)arg1;
-(void)unassertAgentWithOptions:(id)arg1;
-(BOOL)requestNexusWithOptions:(id)arg1;
-(void)closeNexusWithOptions:(id)arg1;
-(BOOL)isSpecificUseOnly;
-(void)setSpecificUseOnly:(BOOL)arg1;
-(BOOL)isNetworkProvider;
-(void)setNetworkProvider:(BOOL)arg1;
-(BOOL)isNexusProvider;
-(void)setNexusProvider:(BOOL)arg1;

@required
+(id)agentDomain;
+(id)agentType;
+(id)agentFromData:(id)arg1;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1;
-(id)copyAgentData;
-(NSString *)agentDescription;
-(void)setAgentDescription:(id)arg1;
-(NSUUID *)agentUUID;
-(void)setAgentUUID:(id)arg1;
-(BOOL)isKernelActivated;
-(void)setKernelActivated:(BOOL)arg1;
-(BOOL)isUserActivated;
-(void)setUserActivated:(BOOL)arg1;
-(BOOL)isVoluntary;
-(void)setVoluntary:(BOOL)arg1;

@end

