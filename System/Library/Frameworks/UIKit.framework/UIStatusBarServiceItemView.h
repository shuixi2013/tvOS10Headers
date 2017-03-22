/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIStatusBarItemView.h>

@class NSString;

@interface UIStatusBarServiceItemView : UIStatusBarItemView {

	NSString* _serviceString;
	NSString* _crossfadeString;
	unsigned long long _crossfadeStep;
	double _maxWidth;
	double _serviceWidth;
	double _crossfadeWidth;
	int _contentType;
	BOOL _loopingNecessaryForString;
	BOOL _loopNowIfNecessary;
	BOOL _loopingNow;
	double _letterSpacing;

}
-(double)extraRightPadding;
-(id)contentsImage;
-(BOOL)updateForNewData:(id)arg1 actions:(int)arg2 ;
-(long long)legibilityStyle;
-(void)setVisible:(BOOL)arg1 frame:(CGRect)arg2 duration:(double)arg3 ;
-(double)standardPadding;
-(double)updateContentsAndWidth;
-(double)resetContentOverlap;
-(double)addContentOverlap:(double)arg1 ;
-(BOOL)animatesDataChange;
-(void)performPendedActions;
-(BOOL)updateForContentType:(int)arg1 serviceString:(id)arg2 serviceCrossfadeString:(id)arg3 maxWidth:(double)arg4 actions:(int)arg5 ;
-(id)_contentsImageFromString:(id)arg1 withWidth:(double)arg2 letterSpacing:(double)arg3 ;
-(void)_crossfadeStepAnimation;
-(BOOL)_crossfaded;
-(BOOL)_loopingNecessary;
-(id)_crossfadeContentsImage;
-(id)_serviceContentsImage;
-(void)_loopAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
-(void)_finalAnimationDidStop:(id)arg1 finished:(id)arg2 context:(id)arg3 ;
@end

