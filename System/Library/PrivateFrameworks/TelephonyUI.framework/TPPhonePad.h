/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIControl.h>
#import <libobjc.A.dylib/TPDialerKeypadProtocol.h>

@protocol TPDialerKeypadDelegate;
@class NSString;

@interface TPPhonePad : UIControl <TPDialerKeypadProtocol> {

	long long _downKey;
	long long _highlightKey;
	id<TPDialerKeypadDelegate> _delegate;
	BOOL _playsSounds;
	double _topHeight;
	double _midHeight;
	double _bottomHeight;
	double _leftWidth;
	double _midWidth;
	double _rightWidth;
	CFSetRef _inflightSounds;
	CFDictionaryRef _keyToButtonMap;
	unsigned _incompleteSounds;
	unsigned _delegateSoundCallbacks : 1;
	unsigned _soundsActivated : 1;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)_delayedDeactivate;
+(BOOL)shouldStringAutoDial:(id)arg1 givenLastChar:(char)arg2 ;
+(BOOL)launchFieldTestIfNeeded:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)removeFromSuperview;
-(BOOL)cancelTouchTracking;
-(void)movedFromWindow:(id)arg1 ;
-(void)movedToWindow:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)pointMostlyInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_playSoundForKey:(unsigned long long)arg1 ;
-(void)_handleKeyPressAndHoldForHighlightedKey:(id)arg1 ;
-(void)_stopSoundForKey:(unsigned long long)arg1 ;
-(void)setNeedsDisplayForKey:(int)arg1 ;
-(void)_handleKey:(id)arg1 forUIEvent:(id)arg2 ;
-(void)setPlaysSounds:(BOOL)arg1 ;
-(void)_activateSounds:(BOOL)arg1 ;
-(void)_stopAllSoundsForcingCallbacks:(BOOL)arg1 ;
-(void)_appSuspended;
-(void)_appResumed;
-(CGRect)_rectForKey:(unsigned long long)arg1 ;
-(id)_keypadImage;
-(double)_yFudge;
-(CGRect)_updateRect:(CGRect)arg1 withScale:(double)arg2 ;
-(CGPoint)_keypadOrigin;
-(id)_imageByCroppingImage:(id)arg1 toRect:(CGRect)arg2 ;
-(id)_pressedImage;
-(void)_handleKeyPressAndHoldForDownKey:(id)arg1 ;
-(int)_keyForPoint:(CGPoint)arg1 ;
-(void)_handleKeyPressAndHoldForKey:(long long)arg1 ;
-(void)highlightKeyAtIndex:(long long)arg1 ;
-(long long)indexForHighlightedKey;
-(void)performTapActionDownForHighlightedKey;
-(void)performTapActionEndForHighlightedKey;
-(void)performTapActionCancelForHighlightedKey;
-(void)setButton:(id)arg1 forKeyAtIndex:(unsigned long long)arg2 ;
-(id)_buttonForKeyAtIndex:(unsigned long long)arg1 ;
-(void)_notifySoundCompletionIfNecessary:(unsigned)arg1 ;
-(id)_highlightedImage;
@end

