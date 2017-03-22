/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIButton;

@interface TVOSUpdateSlowRebootView : UIView {

	UILabel* _text;
	UIButton* _restart;
	/*^block*/id _rebootAction;

}

@property (nonatomic,copy) id rebootAction;              //@synthesize rebootAction=_rebootAction - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)preferredFocusedView;
-(void)_didSelectRestart:(id)arg1 ;
-(id)rebootAction;
-(void)setRebootAction:(id)arg1 ;
@end

