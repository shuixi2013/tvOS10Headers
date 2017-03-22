/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:58 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebCore/WebCore-Structs.h>
@class NSString, NSArray;

@interface WebEvent : NSObject {

	int _type;
	double _timestamp;
	CGPoint _locationInWindow;
	NSString* _characters;
	NSString* _charactersIgnoringModifiers;
	unsigned _modifierFlags;
	BOOL _keyRepeating;
	unsigned long long _keyboardFlags;
	NSString* _inputManagerHint;
	unsigned short _keyCode;
	BOOL _tabKey;
	float _deltaX;
	float _deltaY;
	unsigned _touchCount;
	NSArray* _touchLocations;
	NSArray* _touchIdentifiers;
	NSArray* _touchPhases;
	BOOL _isGesture;
	float _gestureScale;
	float _gestureRotation;
	BOOL _wasHandled;

}

@property (nonatomic,readonly) int type;                                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) double timestamp;                                           //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) CGPoint locationInWindow; 
@property (nonatomic,retain,readonly) NSString * characters; 
@property (nonatomic,retain,readonly) NSString * charactersIgnoringModifiers; 
@property (nonatomic,readonly) unsigned modifierFlags; 
@property (getter=isKeyRepeating,nonatomic,readonly) BOOL keyRepeating; 
@property (nonatomic,retain,readonly) NSString * inputManagerHint; 
@property (nonatomic,readonly) unsigned long long keyboardFlags; 
@property (nonatomic,readonly) unsigned short keyCode; 
@property (getter=isTabKey,nonatomic,readonly) BOOL tabKey; 
@property (nonatomic,readonly) float deltaX; 
@property (nonatomic,readonly) float deltaY; 
@property (nonatomic,readonly) unsigned touchCount; 
@property (nonatomic,retain,readonly) NSArray * touchLocations; 
@property (nonatomic,retain,readonly) NSArray * touchIdentifiers; 
@property (nonatomic,retain,readonly) NSArray * touchPhases; 
@property (nonatomic,readonly) BOOL isGesture; 
@property (nonatomic,readonly) float gestureScale; 
@property (nonatomic,readonly) float gestureRotation; 
@property (assign,nonatomic) BOOL wasHandled;                                              //@synthesize wasHandled=_wasHandled - In the implementation block
-(NSString *)characters;
-(NSString *)charactersIgnoringModifiers;
-(float)deltaX;
-(float)deltaY;
-(void)setWasHandled:(BOOL)arg1 ;
-(float)gestureScale;
-(float)gestureRotation;
-(BOOL)isGesture;
-(id)_touchPhaseDescription:(int)arg1 ;
-(id)_touchLocationsDescription:(id)arg1 ;
-(id)_touchIdentifiersDescription;
-(id)_touchPhasesDescription;
-(id)_eventDescription;
-(id)_modiferFlagsDescription;
-(BOOL)isTabKey;
-(unsigned long long)keyboardFlags;
-(void)dealloc;
-(id)description;
-(double)timestamp;
-(int)type;
-(unsigned)modifierFlags;
-(id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned)arg5 isRepeating:(BOOL)arg6 withFlags:(unsigned long long)arg7 withInputManagerHint:(id)arg8 keyCode:(unsigned short)arg9 isTabKey:(BOOL)arg10 ;
-(id)initWithKeyEventType:(int)arg1 timeStamp:(double)arg2 characters:(id)arg3 charactersIgnoringModifiers:(id)arg4 modifiers:(unsigned)arg5 isRepeating:(BOOL)arg6 withFlags:(unsigned long long)arg7 keyCode:(unsigned short)arg8 isTabKey:(BOOL)arg9 characterSet:(int)arg10 ;
-(CGPoint)locationInWindow;
-(id)initWithMouseEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 ;
-(BOOL)wasHandled;
-(id)initWithScrollWheelEventWithTimeStamp:(double)arg1 location:(CGPoint)arg2 deltaX:(float)arg3 deltaY:(float)arg4 ;
-(NSArray *)touchLocations;
-(NSArray *)touchIdentifiers;
-(NSArray *)touchPhases;
-(id)initWithTouchEventType:(int)arg1 timeStamp:(double)arg2 location:(CGPoint)arg3 modifiers:(unsigned)arg4 touchCount:(unsigned)arg5 touchLocations:(id)arg6 touchIdentifiers:(id)arg7 touchPhases:(id)arg8 isGesture:(BOOL)arg9 gestureScale:(float)arg10 gestureRotation:(float)arg11 ;
-(unsigned)touchCount;
-(unsigned short)keyCode;
-(BOOL)isKeyRepeating;
-(NSString *)inputManagerHint;
-(id)_typeDescription;
@end

