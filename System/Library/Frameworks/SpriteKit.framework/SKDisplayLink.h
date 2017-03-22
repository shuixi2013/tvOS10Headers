/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSTimer, CADisplayLink, CADisplay;

@interface SKDisplayLink : NSObject {

	NSTimer* _timer;
	id _client;
	CADisplayLink* _caDisplayLink;
	CADisplay* _display;
	BOOL _paused;
	BOOL _callbackAlreadyInProgress;
	double _previousFrameTime;
	float _preferredFramesPerSecond;
	/*^block*/id _block;
	float _averageFrameTime;
	long long _frameCount;
	double _frameCountBeginTime;

}

@property (assign,getter=isPaused,nonatomic) BOOL paused; 
@property (assign,nonatomic) long long preferredFramesPerSecond; 
@property (nonatomic,retain) CADisplay * display; 
+(id)displayLinkWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(void)dealloc;
-(id)init;
-(void)invalidate;
-(CADisplay *)display;
-(void)setPreferredFramesPerSecond:(long long)arg1 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(void)_setup;
-(void)_teardown;
-(void)setDisplay:(CADisplay *)arg1 ;
-(long long)preferredFramesPerSecond;
-(void)_caDisplayLinkCallback;
-(id)initWithDisplay:(id)arg1 handler:(/*^block*/id)arg2 client:(id)arg3 ;
-(void)_callbackForNextFrame:(double)arg1 ;
-(BOOL)_callbackAlreadyInProgress;
-(void)_setCallbackAlreadyInProgress:(BOOL)arg1 ;
@end

