/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <GameController/GCControllerDirectionPad.h>

@class _GCControllerAxisInput, NSString;

@interface _GCControllerDirectionPad : GCControllerDirectionPad {

	/*^block*/id _valueChangedHandler;
	_GCControllerAxisInput* _xAxis;
	_GCControllerAxisInput* _yAxis;
	NSString* _descriptionName;

}
-(id)description;
-(id)left;
-(id)right;
-(/*^block*/id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/id)arg1 ;
-(id)up;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 queue:(id)arg2 ;
-(BOOL)setHIDValue:(IOHIDValueRef)arg1 ;
-(id)xAxis;
-(id)yAxis;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 ;
-(id)initWithFlippedY:(BOOL)arg1 digital:(BOOL)arg2 descriptionName:(id)arg3 ;
-(void)_fireValueChangedWithQueue:(id)arg1 ;
-(void)_fireValueChanged;
-(id)down;
@end

