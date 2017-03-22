/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSUserDefaults, NSObject, NSString, NSArray;

@interface ATDeviceSettings : NSObject {

	NSUserDefaults* _userDefaults;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) BOOL isDeviceLinkClient; 
@property (nonatomic,copy,readonly) NSString * libraryIdentifier; 
@property (nonatomic,copy,readonly) NSString * serviceName; 
@property (nonatomic,copy,readonly) NSString * serviceDomain; 
@property (nonatomic,copy,readonly) NSString * serviceType; 
@property (nonatomic,copy,readonly) NSString * interfaceName; 
@property (nonatomic,copy,readonly) NSArray * dataClassesNeedingSync; 
@property (nonatomic,readonly) double pairingSyncCompletionTime; 
@property (nonatomic,readonly) BOOL useNetServicesConnection; 
@property (nonatomic,readonly) BOOL fairPlayEnabled; 
@property (nonatomic,readonly) BOOL grappaEnabled; 
@property (nonatomic,readonly) BOOL restoreBatchingEnabled; 
@property (nonatomic,readonly) unsigned long long restoreBatchSize; 
+(id)sharedInstance;
-(id)init;
-(void)synchronize;
-(NSString *)serviceType;
-(NSString *)libraryIdentifier;
-(NSString *)interfaceName;
-(id)endpointInfo;
-(id)hostInfoForLibrary:(id)arg1 ;
-(void)removeEndpointInfoForLibrary:(id)arg1 ;
-(void)setPairingSyncCompletionTime:(double)arg1 ;
-(void)setSyncPending:(BOOL)arg1 forDataClass:(id)arg2 ;
-(void)setHostInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)grappaEnabled;
-(BOOL)isSyncPendingForDataClass:(id)arg1 ;
-(id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(double)pairingSyncCompletionTime;
-(BOOL)useNetServicesConnection;
-(BOOL)isDeviceLinkClient;
-(int)activeRestoreType;
-(NSArray *)dataClassesNeedingSync;
-(void)setHasCompletedDataMigration:(BOOL)arg1 ;
-(void)setActiveRestoreType:(int)arg1 ;
-(BOOL)hasCompletedDataMigration;
-(void)setEndpointInfo:(id)arg1 ;
-(id)_endpointInfoForLibrary:(id)arg1 ;
-(void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2 ;
-(BOOL)fairPlayEnabled;
-(BOOL)restoreBatchingEnabled;
-(unsigned long long)restoreBatchSize;
-(void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3 ;
-(id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2 ;
-(NSString *)serviceName;
-(NSString *)serviceDomain;
@end

