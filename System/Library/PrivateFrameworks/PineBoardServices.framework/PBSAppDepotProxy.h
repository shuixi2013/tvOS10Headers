/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:31 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PineBoardServices.framework/PineBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PineBoardServices/PineBoardServices-Structs.h>
#import <libobjc.A.dylib/PBSAppDepotProxyProtocol.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSArray, NSObject, NSString;

@interface PBSAppDepotProxy : NSObject <PBSAppDepotProxyProtocol> {

	atomic_flag _updateAppStateScheduled;
	NSDictionary* _appState;
	NSArray* _provisionedAppIdentifiers;
	NSObject*<OS_dispatch_queue> _appStateMonitorQueue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> appStateMonitorQueue;              //@synthesize appStateMonitorQueue=_appStateMonitorQueue - In the implementation block
@property (copy,readonly) NSDictionary * appState;                                           //@synthesize appState=_appState - In the implementation block
@property (copy,readonly) NSArray * provisionedAppIdentifiers;                               //@synthesize provisionedAppIdentifiers=_provisionedAppIdentifiers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSDictionary *)appState;
-(void)_sharedAppStateDidChange:(id)arg1 ;
-(void)_setNeedsUpdateAppState;
-(NSObject*<OS_dispatch_queue>)appStateMonitorQueue;
-(void)_updateAppState;
-(void)_queue_setProvisionedAppIdentifiers:(id)arg1 ;
-(void)_queue_setAppState:(id)arg1 ;
-(NSArray *)provisionedAppIdentifiers;
-(void)setAppStateMonitorQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

