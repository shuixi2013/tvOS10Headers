/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:09 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ReplayKit/ReplayKit-Structs.h>
#import <libobjc.A.dylib/RPPreviewViewControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverPresentationControllerDelegate.h>

@protocol RPScreenRecorderDelegate;
@class UIView, NSString, UIWindow, RPPipViewController, NSDate, RPSystemRecordingIndicatorWindow, RPBroadcastController;

@interface RPScreenRecorder : NSObject <RPPreviewViewControllerDelegate, UINavigationControllerDelegate, UIPopoverPresentationControllerDelegate> {

	BOOL _available;
	BOOL _recording;
	BOOL _microphoneEnabled;
	BOOL _cameraEnabled;
	BOOL _broadcasting;
	BOOL _systemRecording;
	BOOL _hasUserConsentForCamera;
	BOOL _hasUserConsentForMicrophone;
	BOOL _paused;
	int _processIDForAudioCapture;
	id<RPScreenRecorderDelegate> _delegate;
	UIView* _cameraPreviewView;
	unsigned long long _previousAudioSessionOptions;
	NSString* _previousAudioCategory;
	UIWindow* _windowToRecord;
	RPPipViewController* _pipViewController;
	/*^block*/id _saveVideoToCameraRollCompletionBlock;
	NSDate* _systemRecordingControlCenterStartClipStartTime;
	NSDate* _systemRecordingControlCenterStartClipEndTime;
	NSDate* _systemRecordingControlCenterEndClipStartTime;
	NSDate* _systemRecordingControlCenterEndClipEndTime;
	RPSystemRecordingIndicatorWindow* _systemRecordingIndicatorWindow;
	RPBroadcastController* _activeBroadcastController;

}

@property (assign,nonatomic) unsigned long long previousAudioSessionOptions;                                   //@synthesize previousAudioSessionOptions=_previousAudioSessionOptions - In the implementation block
@property (nonatomic,retain) NSString * previousAudioCategory;                                                 //@synthesize previousAudioCategory=_previousAudioCategory - In the implementation block
@property (assign,getter=isRecording,nonatomic) BOOL recording;                                                //@synthesize recording=_recording - In the implementation block
@property (assign,nonatomic) BOOL broadcasting;                                                                //@synthesize broadcasting=_broadcasting - In the implementation block
@property (assign,getter=isAvailable,nonatomic) BOOL available;                                                //@synthesize available=_available - In the implementation block
@property (assign,nonatomic) BOOL systemRecording;                                                             //@synthesize systemRecording=_systemRecording - In the implementation block
@property (nonatomic,retain) UIWindow * windowToRecord;                                                        //@synthesize windowToRecord=_windowToRecord - In the implementation block
@property (nonatomic,retain) RPPipViewController * pipViewController;                                          //@synthesize pipViewController=_pipViewController - In the implementation block
@property (nonatomic,retain) UIView * cameraPreviewView;                                                       //@synthesize cameraPreviewView=_cameraPreviewView - In the implementation block
@property (nonatomic,copy) id saveVideoToCameraRollCompletionBlock;                                            //@synthesize saveVideoToCameraRollCompletionBlock=_saveVideoToCameraRollCompletionBlock - In the implementation block
@property (nonatomic,retain) NSDate * systemRecordingControlCenterStartClipStartTime;                          //@synthesize systemRecordingControlCenterStartClipStartTime=_systemRecordingControlCenterStartClipStartTime - In the implementation block
@property (nonatomic,retain) NSDate * systemRecordingControlCenterStartClipEndTime;                            //@synthesize systemRecordingControlCenterStartClipEndTime=_systemRecordingControlCenterStartClipEndTime - In the implementation block
@property (nonatomic,retain) NSDate * systemRecordingControlCenterEndClipStartTime;                            //@synthesize systemRecordingControlCenterEndClipStartTime=_systemRecordingControlCenterEndClipStartTime - In the implementation block
@property (nonatomic,retain) NSDate * systemRecordingControlCenterEndClipEndTime;                              //@synthesize systemRecordingControlCenterEndClipEndTime=_systemRecordingControlCenterEndClipEndTime - In the implementation block
@property (nonatomic,retain) RPSystemRecordingIndicatorWindow * systemRecordingIndicatorWindow;                //@synthesize systemRecordingIndicatorWindow=_systemRecordingIndicatorWindow - In the implementation block
@property (assign,nonatomic) BOOL hasUserConsentForCamera;                                                     //@synthesize hasUserConsentForCamera=_hasUserConsentForCamera - In the implementation block
@property (assign,nonatomic) BOOL hasUserConsentForMicrophone;                                                 //@synthesize hasUserConsentForMicrophone=_hasUserConsentForMicrophone - In the implementation block
@property (nonatomic,retain) RPBroadcastController * activeBroadcastController;                                //@synthesize activeBroadcastController=_activeBroadcastController - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;                                                      //@synthesize paused=_paused - In the implementation block
@property (assign,setter=updateProcessIDForAudioCapture:,nonatomic) int processIDForAudioCapture;              //@synthesize processIDForAudioCapture=_processIDForAudioCapture - In the implementation block
@property (assign,nonatomic,__weak) id<RPScreenRecorderDelegate> delegate;                                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isMicrophoneEnabled,nonatomic) BOOL microphoneEnabled;                                //@synthesize microphoneEnabled=_microphoneEnabled - In the implementation block
@property (assign,getter=isCameraEnabled,nonatomic) BOOL cameraEnabled;                                        //@synthesize cameraEnabled=_cameraEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedRecorder;
-(void)setDelegate:(id<RPScreenRecorderDelegate>)arg1 ;
-(void)dealloc;
-(id<RPScreenRecorderDelegate>)delegate;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(BOOL)isRecording;
-(void)setRecording:(BOOL)arg1 ;
-(void)pauseRecording;
-(void)resumeRecording;
-(BOOL)isAvailable;
-(void)setAvailable:(BOOL)arg1 ;
-(void)updateRecordingAvailability;
-(id)applicationWindow;
-(UIWindow *)windowToRecord;
-(void)setWindowToRecord:(UIWindow *)arg1 ;
-(void)setSystemRecording:(BOOL)arg1 ;
-(void)_startRecordingWithMicrophoneEnabled:(BOOL)arg1 cameraEnabled:(BOOL)arg2 streamingEnabled:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 cameraEnabled:(BOOL)arg2 streamingEnabled:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)_isScreenRecordingAllowed;
-(void)setWindowRotationLocked:(BOOL)arg1 ;
-(void)clientWillResignActive;
-(void)clientDidBecomeActive;
-(void)setMicrophoneEnabled:(BOOL)arg1 ;
-(void)configureAudioSession;
-(void)setCameraEnabled:(BOOL)arg1 ;
-(unsigned)currentWindowLayerContextID;
-(CGSize)currentWindowSize;
-(void)setBroadcasting:(BOOL)arg1 ;
-(void)restoreAudioSession;
-(BOOL)systemRecording;
-(BOOL)isCameraEnabled;
-(void)setPipViewController:(RPPipViewController *)arg1 ;
-(RPPipViewController *)pipViewController;
-(void)setCameraPreviewView:(UIView *)arg1 ;
-(void)setSystemRecordingControlCenterStartClipStartTime:(NSDate *)arg1 ;
-(void)stopRecordingWithAdditionalShareFileAttachment:(id)arg1 overrideShareMessage:(id)arg2 previewViewControllerOverrideTintColor:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)stopRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)updateProcessIDForAudioCapture:(int)arg1 ;
-(void)setActiveBroadcastController:(RPBroadcastController *)arg1 ;
-(void)setSystemRecordingControlCenterEndClipEndTime:(NSDate *)arg1 ;
-(void)setSaveVideoToCameraRollCompletionBlock:(id)arg1 ;
-(void)video:(id)arg1 didFinishSavingToCameraRollWithError:(id)arg2 contextInfo:(void*)arg3 ;
-(void)discardRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)setPreviousAudioSessionOptions:(unsigned long long)arg1 ;
-(void)setPreviousAudioCategory:(NSString *)arg1 ;
-(unsigned long long)previousAudioSessionOptions;
-(NSString *)previousAudioCategory;
-(void)notifyDelegateOfRecorderAvailability;
-(BOOL)_isScreenRecordingSupportedOnDevice;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 windowToRecord:(id)arg2 systemRecording:(BOOL)arg3 handler:(/*^block*/id)arg4 ;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)startRecordingWithHandler:(/*^block*/id)arg1 ;
-(void)startRecordingWithMicrophoneEnabled:(BOOL)arg1 handler:(/*^block*/id)arg2 ;
-(void)stopBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingAndSaveToCameraRoll:(/*^block*/id)arg1 ;
-(void)stopRecordingWithVideoURLHandler:(/*^block*/id)arg1 ;
-(void)stopRecordingWithError:(id)arg1 movieURL:(id)arg2 ;
-(BOOL)isMicrophoneEnabled;
-(UIView *)cameraPreviewView;
-(BOOL)broadcasting;
-(id)saveVideoToCameraRollCompletionBlock;
-(NSDate *)systemRecordingControlCenterStartClipStartTime;
-(NSDate *)systemRecordingControlCenterStartClipEndTime;
-(void)setSystemRecordingControlCenterStartClipEndTime:(NSDate *)arg1 ;
-(NSDate *)systemRecordingControlCenterEndClipStartTime;
-(void)setSystemRecordingControlCenterEndClipStartTime:(NSDate *)arg1 ;
-(NSDate *)systemRecordingControlCenterEndClipEndTime;
-(RPSystemRecordingIndicatorWindow *)systemRecordingIndicatorWindow;
-(void)setSystemRecordingIndicatorWindow:(RPSystemRecordingIndicatorWindow *)arg1 ;
-(BOOL)hasUserConsentForCamera;
-(void)setHasUserConsentForCamera:(BOOL)arg1 ;
-(BOOL)hasUserConsentForMicrophone;
-(void)setHasUserConsentForMicrophone:(BOOL)arg1 ;
-(RPBroadcastController *)activeBroadcastController;
-(int)processIDForAudioCapture;
@end
