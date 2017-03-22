/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:18 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardFoundation/SBAbstractSpringBoardDefaultDomain.h>

@interface SBRotationDefaults : SBAbstractSpringBoardDefaultDomain

@property (assign,nonatomic) long long lastLockedOrientation; 
@property (getter=isVideoRotationEnabled,nonatomic,readonly) BOOL videoRotationEnabled; 
-(void)setVideoRotationEnabled:(BOOL)arg1 ;
-(BOOL)isVideoRotationEnabled;
-(void)setLastLockedOrientation:(long long)arg1 ;
-(long long)lastLockedOrientation;
-(void)_bindAndRegisterDefaults;
@end

