/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreBookkeeperClient/SBCXPCService.h>
#import <libobjc.A.dylib/SBCPlaybackPositionServiceProtocol.h>

@class SBCPlaybackPositionDomain, NSString;

@interface SBCPlaybackPositionService : SBCXPCService <SBCPlaybackPositionServiceProtocol> {

	BOOL _usingPlaybackPositions;
	SBCPlaybackPositionDomain* _playbackPositionDomain;

}

@property (readonly) BOOL usingPlaybackPositions;                                               //@synthesize usingPlaybackPositions=_usingPlaybackPositions - In the implementation block
@property (nonatomic,readonly) SBCPlaybackPositionDomain * playbackPositionDomain;              //@synthesize playbackPositionDomain=_playbackPositionDomain - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceForValueDomain:(id)arg1 ;
+(id)serviceForSyncDomain:(id)arg1 ;
+(id)_serviceForPlaybackPositionDomain:(id)arg1 ;
+(Class)XPCServiceInterfaceClass;
-(oneway void)deletePlaybackPositionEntity:(id)arg1 ;
-(oneway void)updateForeignDatabaseWithValuesFromPlaybackPositionEntity:(id)arg1 ;
-(oneway void)pullPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)pushPlaybackPositionEntity:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(oneway void)savePlaybackPositionEntity:(id)arg1 isCheckpoint:(BOOL)arg2 ;
-(SBCPlaybackPositionDomain *)playbackPositionDomain;
-(oneway void)beginAccessingPlaybackPositionEntities;
-(oneway void)endAccessingPlaybackPositionEntities;
-(oneway void)synchronizeImmediatelyWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)initWithPlaybackPositionDomain:(id)arg1 ;
-(void)didConnectToService;
-(oneway void)deletePlaybackPositionEntities;
-(BOOL)usingPlaybackPositions;
@end

