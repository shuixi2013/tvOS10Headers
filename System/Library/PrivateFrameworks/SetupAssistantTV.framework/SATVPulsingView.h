/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SATVPulsingView <NSObject>
@property (assign,nonatomic,__weak) id<SATVPulsingAnimationDelegate> animationDelegate; 
@property (assign,nonatomic) unsigned long long mode; 
@required
-(void)setAnimationDelegate:(id)arg1;
-(void)setMode:(unsigned long long)arg1;
-(unsigned long long)mode;
-(id)initWithMode:(unsigned long long)arg1;
-(id<SATVPulsingAnimationDelegate>)animationDelegate;
-(void)pulseAtBeginTime:(double)arg1;

@end

