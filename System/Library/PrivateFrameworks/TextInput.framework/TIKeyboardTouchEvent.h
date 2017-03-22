/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:01:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TextInput-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface TIKeyboardTouchEvent : NSObject <NSSecureCoding> {

	int _stage;
	int _fingerID;
	double _radius;
	double _timestamp;
	long long _pathIndex;
	long long _forcedKeyCode;
	CGPoint _location;

}

@property (nonatomic,readonly) int stage;                            //@synthesize stage=_stage - In the implementation block
@property (nonatomic,readonly) CGPoint location;                     //@synthesize location=_location - In the implementation block
@property (nonatomic,readonly) double radius;                        //@synthesize radius=_radius - In the implementation block
@property (nonatomic,readonly) double timestamp;                     //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) long long pathIndex;                  //@synthesize pathIndex=_pathIndex - In the implementation block
@property (nonatomic,readonly) int fingerID;                         //@synthesize fingerID=_fingerID - In the implementation block
@property (nonatomic,readonly) long long forcedKeyCode;              //@synthesize forcedKeyCode=_forcedKeyCode - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)touchEventWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 ;
+(id)touchEventWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 forcedKeyCode:(long long)arg6 ;
-(id)initWithStage:(int)arg1 location:(CGPoint)arg2 radius:(double)arg3 timestamp:(double)arg4 pathIndex:(long long)arg5 fingerID:(int)arg6 forcedKeyCode:(long long)arg7 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(double)timestamp;
-(int)stage;
-(long long)pathIndex;
-(CGPoint)location;
-(id)shortDescription;
-(int)fingerID;
-(double)radius;
-(long long)forcedKeyCode;
@end

