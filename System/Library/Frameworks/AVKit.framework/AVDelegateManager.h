/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVPlayerViewControllerDelegateAVPlayerViewControllerDelegatePrivate, AVPlayerViewControllerPlaybackDelegateNSObject, AVScanningDelegate;
#import <AVKit/AVKit-Structs.h>
@class AVPlayerViewController;

@interface AVDelegateManager : NSObject {

	BOOL _hasWillPresentInterstitial;
	BOOL _hasDidPresentInterstitial;
	BOOL _hasWillResumePlaybackAfterUserNavigatedFromTimeToTime;
	BOOL _hasWillResumePlaybackAfterUserNavigatedFromDateToDate;
	BOOL _hasTimeToSeekAfterUserNavigatedFromTimeToTime;
	BOOL _hasDidSelectMediaSelectionOptionInMediaSelectionGroup;
	BOOL _hasDidSelectExternalSubtitleOptionLanguage;
	BOOL _hasSkipToNextItem;
	BOOL _hasSkipToPreviousItem;
	BOOL _hasScanFromElapsedTimeRateImageBlock;
	BOOL _hasStopScanning;
	BOOL _hasShouldHandleScanningForPlayerItem_MainDelegate;
	BOOL _hasShouldPlayFromTime;
	BOOL _hasShouldSeekToTime;
	BOOL _hasShouldSeekToDate;
	BOOL _hasShouldPause;
	BOOL _hasShouldScanAtRate;
	BOOL _hasDidFinishScanning;
	BOOL _hasDidAcceptContentProposal;
	BOOL _hasDidRejectContentProposal;
	BOOL _hasShouldPresentContentProposal;
	id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> _delegate;
	id<AVPlayerViewControllerPlaybackDelegate><NSObject> _privateDelegate;
	id<AVScanningDelegate> _scanningDelegate;
	AVPlayerViewController* _playerViewController;

}

@property (__weak,readonly) AVPlayerViewController * playerViewController;                                                           //@synthesize playerViewController=_playerViewController - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVPlayerViewControllerPlaybackDelegate><NSObject> privateDelegate;                            //@synthesize privateDelegate=_privateDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<AVScanningDelegate> scanningDelegate;                                                         //@synthesize scanningDelegate=_scanningDelegate - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomScanning; 
@property (nonatomic,readonly) BOOL supportsContentProposals; 
@property (nonatomic,readonly) BOOL handlesRejectContentProposal; 
-(void)setDelegate:(id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate>)arg1 ;
-(id<AVPlayerViewControllerDelegate><AVPlayerViewControllerDelegatePrivate>)delegate;
-(id<AVPlayerViewControllerPlaybackDelegate><NSObject>)privateDelegate;
-(void)skipToNextItem;
-(void)skipToPreviousItem;
-(void)stopScanning;
-(void)setPrivateDelegate:(id<AVPlayerViewControllerPlaybackDelegate><NSObject>)arg1 ;
-(id)initWithPlayerViewController:(id)arg1 ;
-(void)setScanningDelegate:(id<AVScanningDelegate>)arg1 ;
-(void)willPresentInterstitialGroup:(id)arg1 ;
-(void)didPresentInterstitialGroup:(id)arg1 ;
-(void)willResumePlaybackAfterUserNavigatedFromTime:(SCD_Struct_AV1)arg1 toTime:(SCD_Struct_AV1)arg2 ;
-(void)willResumePlaybackAfterUserNavigatedFromDate:(id)arg1 toDate:(id)arg2 ;
-(SCD_Struct_AV1)timeToSeekAfterUserNavigatedFromTime:(SCD_Struct_AV1)arg1 toTime:(SCD_Struct_AV1)arg2 ;
-(void)didSelectMediaSelectionOption:(id)arg1 inMediaSelectionGroup:(id)arg2 ;
-(void)didSelectExternalSubtitleOptionLanguage:(id)arg1 ;
-(BOOL)hasCustomScanning;
-(long long)scanFromElapsedTime:(SCD_Struct_AV1)arg1 rate:(double)arg2 imageBlock:(/*^block*/id)arg3 ;
-(BOOL)shouldHandleScanningForPlayerItem:(id)arg1 ;
-(void)shouldPlayFromTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldSeekToTime:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldSeekToDate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)shouldPauseWithCompletion:(/*^block*/id)arg1 ;
-(void)shouldScanAtRate:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)didFinishScanning;
-(BOOL)supportsContentProposals;
-(void)didAcceptContentProposal:(id)arg1 ;
-(BOOL)handlesRejectContentProposal;
-(void)didRejectContentProposal:(id)arg1 ;
-(BOOL)shouldPresentContentProposal:(id)arg1 ;
-(id<AVScanningDelegate>)scanningDelegate;
-(AVPlayerViewController *)playerViewController;
@end

