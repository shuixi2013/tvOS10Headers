/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CMWakeGestureDelegate;
@interface CMWakeGestureManager : NSObject {

	id<CMWakeGestureDelegate> _delegate;

}

@property (assign,nonatomic) id<CMWakeGestureDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
+(BOOL)isWakeGestureAvailable;
-(void)setDelegate:(id<CMWakeGestureDelegate>)arg1 ;
-(id<CMWakeGestureDelegate>)delegate;
-(void)logAssert;
-(void)startWakeGestureUpdates;
-(void)stopWakeGestureUpdates;
-(BOOL)simulateGestureWithDelay:(double)arg1 Duration:(double)arg2 ;
@end

