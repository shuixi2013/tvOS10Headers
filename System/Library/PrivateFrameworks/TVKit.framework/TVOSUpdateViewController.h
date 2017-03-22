/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:44 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class TVOSUpdateSlowRebootView, TVOSUpdateView;

@interface TVOSUpdateViewController : UIViewController {

	TVOSUpdateSlowRebootView* _rebootView;
	TVOSUpdateView* _progressView;

}
-(void)loadView;
-(void)setProgressPercent:(float)arg1 ;
-(void)showProgressView;
-(void)showSlowUpdateViewWithCompletion:(/*^block*/id)arg1 ;
@end

