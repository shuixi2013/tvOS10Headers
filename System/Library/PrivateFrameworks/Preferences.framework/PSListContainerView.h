/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:54 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class PSListController;

@interface PSListContainerView : UIView {

	PSListController* _delegate;

}

@property (assign,nonatomic,__weak) PSListController * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)setDelegate:(PSListController *)arg1 ;
-(PSListController *)delegate;
-(void)layoutMarginsDidChange;
@end

