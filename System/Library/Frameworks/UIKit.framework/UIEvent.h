/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class NSSet;

@interface UIEvent : NSObject {

	GSEventRef _gsEvent;
	IOHIDEventRef _hidEvent;
	double _timestamp;

}

@property (nonatomic,readonly) long long type; 
@property (nonatomic,readonly) long long subtype; 
@property (nonatomic,readonly) double timestamp; 
@property (nonatomic,readonly) NSSet * allTouches; 
-(id)_screen;
-(void)dealloc;
-(double)timestamp;
-(id)_init;
-(long long)type;
-(IOHIDEventRef)_hidEvent;
-(NSSet *)allTouches;
-(GSEventRef)_gsEvent;
-(id)_windows;
-(BOOL)_isKeyDown;
-(id)_modifiedInput;
-(void)_setHIDEvent:(IOHIDEventRef)arg1 ;
-(long long)subtype;
-(void)_setGSEvent:(GSEventRef)arg1 ;
-(id)_triggeringPhysicalButton;
-(unsigned long long)_focusHeading;
-(CGPoint)_digitizerLocation;
-(void)_sendEventToResponder:(id)arg1 ;
-(double)_wheelVelocity;
-(long long)_moveDirection;
-(long long)_modifierFlags;
-(id)_unmodifiedInput;
-(id)touchesForWindow:(id)arg1 ;
-(id)touchesForView:(id)arg1 ;
-(id)touchesForGestureRecognizer:(id)arg1 ;
-(id)coalescedTouchesForTouch:(id)arg1 ;
-(id)predictedTouchesForTouch:(id)arg1 ;
-(void)_setTimestamp:(double)arg1 ;
-(id)_initWithEvent:(GSEventRef)arg1 touches:(id)arg2 ;
-(id)_touchesForGestureRecognizer:(id)arg1 ;
-(int)_shakeState;
-(BOOL)isKeyDown;
-(id)_gestureRecognizersForWindow:(id)arg1 ;
@end

