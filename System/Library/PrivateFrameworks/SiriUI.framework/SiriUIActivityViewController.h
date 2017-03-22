/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIActivityViewController.h>

@protocol SiriUIActivityViewControllerDelegate;
@interface SiriUIActivityViewController : UIActivityViewController {

	id<SiriUIActivityViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SiriUIActivityViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(id<SiriUIActivityViewControllerDelegate>)arg1 ;
-(id<SiriUIActivityViewControllerDelegate>)delegate;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
@end

