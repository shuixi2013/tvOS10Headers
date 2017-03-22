/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UISearchBar;

@interface _TVSearchBarWrapper : UIView {

	UISearchBar* _searchBar;
	BOOL _enabled;

}

@property (nonatomic,retain) UISearchBar * searchBar;                    //@synthesize searchBar=_searchBar - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;              //@synthesize enabled=_enabled - In the implementation block
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isEnabled;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(UISearchBar *)arg1 ;
@end

