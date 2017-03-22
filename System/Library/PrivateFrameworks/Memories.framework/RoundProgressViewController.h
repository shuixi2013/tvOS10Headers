/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:30 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class UILabel, RoundProgressView, UIButton, UIScreenEdgePanGestureRecognizer, NSString;

@interface RoundProgressViewController : UIViewController <UIGestureRecognizerDelegate> {

	BOOL _didFadeOut;
	UILabel* _label;
	RoundProgressView* _progressView;
	UIButton* _leftCancelButton;
	UIButton* _rightCancelButton;
	UIScreenEdgePanGestureRecognizer* _screenEdgePanLeftGestureRecognizer;

}

@property (assign,nonatomic) BOOL didFadeOut;                                                                    //@synthesize didFadeOut=_didFadeOut - In the implementation block
@property (nonatomic,retain) UILabel * label;                                                                    //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) RoundProgressView * progressView;                                                   //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIButton * leftCancelButton;                                                        //@synthesize leftCancelButton=_leftCancelButton - In the implementation block
@property (nonatomic,retain) UIButton * rightCancelButton;                                                       //@synthesize rightCancelButton=_rightCancelButton - In the implementation block
@property (nonatomic,retain) UIScreenEdgePanGestureRecognizer * screenEdgePanLeftGestureRecognizer;              //@synthesize screenEdgePanLeftGestureRecognizer=_screenEdgePanLeftGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSString * labelText; 
@property (assign,nonatomic) float progress; 
@property (assign,nonatomic) BOOL showCancelButton; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)prefersStatusBarHidden;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)setProgress:(float)arg1 ;
-(void)viewDidLoad;
-(id)nibBundle;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(BOOL)showCancelButton;
-(id)cancelButton;
-(float)progress;
-(NSString *)labelText;
-(void)setLabelText:(NSString *)arg1 ;
-(void)setShowCancelButton:(BOOL)arg1 ;
-(void)setCancelTarget:(id)arg1 action:(SEL)arg2 ;
-(void)setProgressView:(RoundProgressView *)arg1 ;
-(RoundProgressView *)progressView;
-(UIScreenEdgePanGestureRecognizer *)screenEdgePanLeftGestureRecognizer;
-(void)setScreenEdgePanLeftGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1 ;
-(UIButton *)rightCancelButton;
-(UIButton *)leftCancelButton;
-(void)handlePanFromEdge:(id)arg1 ;
-(BOOL)didFadeOut;
-(void)setDidFadeOut:(BOOL)arg1 ;
-(void)configureView;
-(void)setLeftCancelButton:(UIButton *)arg1 ;
-(void)setRightCancelButton:(UIButton *)arg1 ;
@end

