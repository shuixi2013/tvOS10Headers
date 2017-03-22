/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UITableView, UITableViewCell, UIKeyboardMenuView;

@interface UIInputSwitcherTableCellBackgroundView : UIView {

	UITableView* _tableView;
	UITableViewCell* _cell;
	UIKeyboardMenuView* _menu;

}

@property (assign,nonatomic) UITableView * tableView;                //@synthesize tableView=_tableView - In the implementation block
@property (assign,nonatomic) UITableViewCell * cell;                 //@synthesize cell=_cell - In the implementation block
@property (assign,nonatomic) UIKeyboardMenuView * menu;              //@synthesize menu=_menu - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)setTableView:(UITableView *)arg1 ;
-(UITableView *)tableView;
-(UITableViewCell *)cell;
-(void)setCell:(UITableViewCell *)arg1 ;
-(UIKeyboardMenuView *)menu;
-(id)initWithTableView:(id)arg1 cell:(id)arg2 ;
-(void)setMenu:(UIKeyboardMenuView *)arg1 ;
@end

