/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableView.h>

@class UIKeyboardMenuView;

@interface UIInputSwitcherTableView : UITableView {

	UIKeyboardMenuView* _menu;

}

@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(void)selectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 scrollPosition:(long long)arg3 ;
-(void)deselectRowAtIndexPath:(id)arg1 animated:(BOOL)arg2 ;
-(UIKeyboardMenuView *)menu;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
@end

