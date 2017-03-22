/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UISettings.h>

@interface SBFParallaxSettings : _UISettings {

	BOOL _slideEnabled;
	BOOL _tiltEnabled;
	BOOL _increaseEnabled;
	long long _slideDirectionX;
	long long _slideDirectionY;
	double _slidePixelsX;
	double _slidePixelsY;
	long long _tiltDirectionX;
	long long _tiltDirectionY;
	double _tiltDegreesX;
	double _tiltDegreesY;
	long long _distanceFromScreen;
	double _slideIncreaseX;
	double _slideIncreaseY;

}

@property (assign) BOOL slideEnabled;                         //@synthesize slideEnabled=_slideEnabled - In the implementation block
@property (assign) long long slideDirectionX;                 //@synthesize slideDirectionX=_slideDirectionX - In the implementation block
@property (assign) long long slideDirectionY;                 //@synthesize slideDirectionY=_slideDirectionY - In the implementation block
@property (assign) double slidePixelsX;                       //@synthesize slidePixelsX=_slidePixelsX - In the implementation block
@property (assign) double slidePixelsY;                       //@synthesize slidePixelsY=_slidePixelsY - In the implementation block
@property (assign) BOOL tiltEnabled;                          //@synthesize tiltEnabled=_tiltEnabled - In the implementation block
@property (assign) long long tiltDirectionX;                  //@synthesize tiltDirectionX=_tiltDirectionX - In the implementation block
@property (assign) long long tiltDirectionY;                  //@synthesize tiltDirectionY=_tiltDirectionY - In the implementation block
@property (assign) double tiltDegreesX;                       //@synthesize tiltDegreesX=_tiltDegreesX - In the implementation block
@property (assign) double tiltDegreesY;                       //@synthesize tiltDegreesY=_tiltDegreesY - In the implementation block
@property (assign) long long distanceFromScreen;              //@synthesize distanceFromScreen=_distanceFromScreen - In the implementation block
@property (assign) BOOL increaseEnabled;                      //@synthesize increaseEnabled=_increaseEnabled - In the implementation block
@property (assign) double slideIncreaseX;                     //@synthesize slideIncreaseX=_slideIncreaseX - In the implementation block
@property (assign) double slideIncreaseY;                     //@synthesize slideIncreaseY=_slideIncreaseY - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setSlideEnabled:(BOOL)arg1 ;
-(void)setSlideDirectionX:(long long)arg1 ;
-(void)setSlideDirectionY:(long long)arg1 ;
-(void)setSlidePixelsX:(double)arg1 ;
-(void)setSlidePixelsY:(double)arg1 ;
-(void)setTiltDirectionX:(long long)arg1 ;
-(void)setTiltDirectionY:(long long)arg1 ;
-(void)setTiltDegreesX:(double)arg1 ;
-(void)setTiltDegreesY:(double)arg1 ;
-(void)setDistanceFromScreen:(long long)arg1 ;
-(void)setIncreaseEnabled:(BOOL)arg1 ;
-(void)setSlideIncreaseX:(double)arg1 ;
-(void)setSlideIncreaseY:(double)arg1 ;
-(BOOL)slideEnabled;
-(long long)slideDirectionX;
-(long long)slideDirectionY;
-(double)slidePixelsX;
-(double)slidePixelsY;
-(BOOL)tiltEnabled;
-(long long)tiltDirectionX;
-(long long)tiltDirectionY;
-(double)tiltDegreesX;
-(double)tiltDegreesY;
-(long long)distanceFromScreen;
-(BOOL)increaseEnabled;
-(double)slideIncreaseX;
-(double)slideIncreaseY;
-(void)setTiltEnabled:(BOOL)arg1 ;
@end

