/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <QuartzCore/CATextLayer.h>

@protocol OS_dispatch_source;
@class NSObject, AVPlayer, NSMutableDictionary;

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer {

	NSObject*<OS_dispatch_source> _hudTimer;
	AVPlayer* _player;
	BOOL _showHud;
	int _colorId;
	double _opacity;
	int _fontSizeInt;
	BOOL _updateUISettings;
	int _hudXoffset;
	int _hudYoffset;
	unsigned long long _hudUpdateInterval;
	BOOL _showCompleteURI;
	long long _prevVariantIdx;
	long long _prevStallCount;
	long long _totalStallCount;
	NSMutableDictionary* _loadingStatusCache;

}
+(id)convertBitrate:(double)arg1 ;
+(BOOL)runningAnInternalBuild;
-(void)dealloc;
-(id)init;
-(void)setColor:(int)arg1 ;
-(BOOL)hudEnabled;
-(void)startDispatchTimer;
-(void)currentItemChanged;
-(void)currentItemTracksChanged;
-(void)readHudSettingsAndCallCompletionHandler:(/*^block*/id)arg1 ;
-(void)updateBounds:(CGRect)arg1 ;
-(void)getHudSetting;
-(void)_hudUpdate;
-(id)getTrackFormatDesc:(id)arg1 ;
-(BOOL)valueLoadedForKey:(id)arg1 onObject:(id)arg2 ;
-(void)setPlayer:(id)arg1 ;
@end

