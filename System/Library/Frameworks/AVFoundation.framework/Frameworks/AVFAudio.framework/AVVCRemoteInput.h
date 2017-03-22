/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:01 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <AVFAudio/AVAudioRemoteInputPluginDelegate.h>

@protocol AVAudioRemoteInputPlugin;
@class NSMutableArray;

@interface AVVCRemoteInput : NSObject <AVAudioRemoteInputPluginDelegate> {

	NSMutableArray*<AVAudioRemoteInputPlugin> plugins;
	ATVRemoteInputControllerImpl* _controllerImpl;

}
-(void)dealloc;
-(id)allBundles:(id*)arg1 ;
-(void)inputPlugin:(id)arg1 didPublishDevice:(id)arg2 ;
-(void)inputPlugin:(id)arg1 didUnpublishDevice:(id)arg2 ;
-(id)initializePlugins:(ATVRemoteInputControllerImpl*)arg1 ;
-(void)invalidatePlugins;
-(id)findDeviceWithIdentifier:(id)arg1 ;
@end

