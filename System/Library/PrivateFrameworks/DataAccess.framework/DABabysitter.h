/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableDictionary;

@interface DABabysitter : NSObject {

	NSString* _buildVersion;
	NSMutableDictionary* _refreshingWaiters;
	NSMutableDictionary* _failedWaiters;
	NSMutableDictionary* _restrictedWaiters;

}

@property (nonatomic,retain) NSString * buildVersion;                              //@synthesize buildVersion=_buildVersion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * refreshingWaiters;              //@synthesize refreshingWaiters=_refreshingWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * failedWaiters;                  //@synthesize failedWaiters=_failedWaiters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * restrictedWaiters;              //@synthesize restrictedWaiters=_restrictedWaiters - In the implementation block
+(id)sharedBabysitter;
-(void)setBuildVersion:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(id)_init;
-(NSString *)buildVersion;
-(void)giveAccountWithIDAnotherChance:(id)arg1 ;
-(BOOL)accountWithIDShouldContinue:(id)arg1 ;
-(void)_reloadBabysitterProperties;
-(void)_decrementRefreshCountForWaiter:(id)arg1 forOperationWithName:(id)arg2 ;
-(BOOL)accountShouldContinue:(id)arg1 ;
-(void)_incrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(void)_decrementRefreshCountForWaiterID:(id)arg1 operationName:(id)arg2 ;
-(BOOL)registerAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(void)unregisterAccount:(id)arg1 forOperationWithName:(id)arg2 ;
-(NSMutableDictionary *)refreshingWaiters;
-(void)setRefreshingWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)failedWaiters;
-(void)setFailedWaiters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)restrictedWaiters;
-(void)setRestrictedWaiters:(NSMutableDictionary *)arg1 ;
@end

