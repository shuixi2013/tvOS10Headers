/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIScrollView;

@interface UIAccessibilityAutoscrollManager : NSObject {

	BOOL _autoscrolling;
	int _scrollDirection;
	UIScrollView* _scrollView;
	double _autoscrollSpeed;

}

@property (assign,getter=isAutoscrolling,nonatomic) BOOL autoscrolling;              //@synthesize autoscrolling=_autoscrolling - In the implementation block
@property (assign,nonatomic) int scrollDirection;                                    //@synthesize scrollDirection=_scrollDirection - In the implementation block
@property (assign,nonatomic) double autoscrollSpeed;                                 //@synthesize autoscrollSpeed=_autoscrollSpeed - In the implementation block
@property (nonatomic,retain) UIScrollView * scrollView;                              //@synthesize scrollView=_scrollView - In the implementation block
+(id)sharedInstance;
-(void)_autoscroll;
-(void)dealloc;
-(id)init;
-(void)setScrollDirection:(int)arg1 ;
-(void)setScrollView:(UIScrollView *)arg1 ;
-(UIScrollView *)scrollView;
-(void)pause;
-(int)scrollDirection;
-(void)scrollToTop;
-(int)availableAutoscrollDirections;
-(BOOL)isAutoscrolling;
-(void)autoscrollInDirection:(int)arg1 ;
-(void)incrementAutoscrollSpeed;
-(void)decrementAutoscrollSpeed;
-(void)scrollToBottom;
-(void)setAutoscrollSpeed:(double)arg1 ;
-(void)setAutoscrolling:(BOOL)arg1 ;
-(double)autoscrollSpeed;
@end

