/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:26 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCMediaPlayerLegacyPlayer, MPCReportingPlaybackObserver, MPCJinglePlayActivityReportingController;

@interface MPCMediaPlayerLegacyReportingController : NSObject {

	MPCMediaPlayerLegacyPlayer* _player;
	MPCReportingPlaybackObserver* _reportingPlaybackObserver;
	MPCJinglePlayActivityReportingController* _jinglePlayActivityReportingController;

}

@property (assign,nonatomic,__weak) MPCMediaPlayerLegacyPlayer * player;                                                    //@synthesize player=_player - In the implementation block
@property (nonatomic,retain) MPCReportingPlaybackObserver * reportingPlaybackObserver;                                      //@synthesize reportingPlaybackObserver=_reportingPlaybackObserver - In the implementation block
@property (nonatomic,retain) MPCJinglePlayActivityReportingController * jinglePlayActivityReportingController;              //@synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController - In the implementation block
-(void)dealloc;
-(void)setPlayer:(MPCMediaPlayerLegacyPlayer *)arg1 ;
-(MPCMediaPlayerLegacyPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg1 ;
-(MPCReportingPlaybackObserver *)reportingPlaybackObserver;
-(void)setReportingPlaybackObserver:(MPCReportingPlaybackObserver *)arg1 ;
-(MPCJinglePlayActivityReportingController *)jinglePlayActivityReportingController;
-(void)setJinglePlayActivityReportingController:(MPCJinglePlayActivityReportingController *)arg1 ;
-(void)_cloudServiceControllerSubscriptionStatusDidChangeNotification:(id)arg1 ;
-(void)_cloudServiceControllerCloudLibraryEnabledDidChangeNotification:(id)arg1 ;
-(void)_storefrontDidChangeNotification:(id)arg1 ;
-(id)initWithController:(id)arg1 ;
@end

