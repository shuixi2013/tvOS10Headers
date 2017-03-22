/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:14 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVTableViewDelegate.h>
#import <ATVLegacyContentKit/ATVUpdatable.h>

@protocol TVLSearchResultsViewControllerDelegate;
@class TVLListViewDataSource, TVTableView, NSString;

@interface TVLSearchResultsViewController : UIViewController <TVTableViewDelegate, ATVUpdatable> {

	TVLListViewDataSource* _dataSource;
	TVTableView* _listView;
	id<TVLSearchResultsViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVLSearchResultsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDelegate:(id<TVLSearchResultsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id<TVLSearchResultsViewControllerDelegate>)delegate;
-(void)loadView;
-(id)preferredFocusedItem;
-(void)viewDidLayoutSubviews;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(void)setCurrentFeedElement:(id)arg1 ;
-(void)didUpdateFeedElementRequiringUserInterfaceUpdate:(BOOL)arg1 previousElement:(id)arg2 ;
-(id)initWithSearchResultsElement:(id)arg1 ;
-(void)_evaluateJavascriptForEvent:(id)arg1 atIndexPath:(id)arg2 ;
-(BOOL)updatableWithFeedElement:(id)arg1 ;
-(id)_menuItemAtIndexPath:(id)arg1 ;
@end

