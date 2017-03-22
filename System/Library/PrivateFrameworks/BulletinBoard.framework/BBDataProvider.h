/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:02 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BBSectionIdentity.h>

@protocol OS_dispatch_queue;
@class NSObject, BBDataProviderIdentity, NSString;

@interface BBDataProvider : NSObject <BBSectionIdentity> {

	NSObject*<OS_dispatch_queue> _identityQueue;
	BBDataProviderIdentity* __identity;

}

@property (retain) BBDataProviderIdentity * identity; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(NSString *)debugDescription;
-(void)invalidate;
-(id)sortDescriptors;
-(BBDataProviderIdentity *)identity;
-(void)setIdentity:(BBDataProviderIdentity *)arg1 ;
-(id)sortKey;
-(void)bulletinsWithRequestParameters:(id)arg1 lastCleared:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForBulletins:(id)arg1 lastClearedInfo:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)clearedInfoForClearingAllBulletinsWithLastClearedInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)clearedInfoForClearingBulletinsFromDate:(id)arg1 toDate:(id)arg2 lastClearedInfo:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)getDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)getPNGDataForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 sizeConstraints:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(void)getAspectRatioForAttachmentUUID:(id)arg1 recordID:(id)arg2 isPrimary:(BOOL)arg3 withHandler:(/*^block*/id)arg4 ;
-(void)deliverMessageWithName:(id)arg1 userInfo:(id)arg2 ;
-(id)debugDescriptionWithChildren:(unsigned long long)arg1 ;
-(BOOL)canClearBulletinsByDate;
-(BOOL)canClearAllBulletins;
-(BOOL)isPushDataProvider;
-(void)updateClearedInfoWithClearedInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)updateSectionInfoWithSectionInfo:(id)arg1 handler:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(void)deliverResponse:(id)arg1 forBulletinRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(BOOL)initialized;
-(void)startWatchdog;
-(void)reloadIdentityWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)canPerformMigration;
-(id)sectionIdentifier;
-(id)sectionParameters;
-(void)dataProviderDidLoad;
-(id)defaultSubsectionInfos;
-(id)displayNameForSubsectionID:(id)arg1 ;
-(BOOL)migrateSectionInfo:(id)arg1 oldSectionInfo:(id)arg2 ;
-(void)noteSectionInfoDidChange:(id)arg1 ;
-(BOOL)syncsBulletinDismissal;
-(id)displayNameForFilterID:(id)arg1 ;
-(id)universalSectionIdentifier;
-(id)defaultSectionInfo;
-(id)sectionDisplayName;
-(id)sectionIcon;
-(id)parentSectionIdentifier;
@end

