/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UISearchController;

@interface UISearchContainerViewController : UIViewController {

	UISearchController* _searchController;

}

@property (nonatomic,retain) UISearchController * searchController;              //@synthesize searchController=_searchController - In the implementation block
-(void)didMoveToParentViewController:(id)arg1 ;
-(BOOL)_transitionsChildViewControllers;
-(void)_prepareForContainerTransition:(id)arg1 ;
-(UISearchController *)searchController;
-(void)_presentSearchControllerIfNecessary;
-(id)initWithSearchController:(id)arg1 ;
-(void)setSearchController:(UISearchController *)arg1 ;
@end

