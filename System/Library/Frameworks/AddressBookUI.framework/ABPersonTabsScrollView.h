/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIView;


@protocol ABPersonTabsScrollView <NSObject>
@property (assign,nonatomic) double minimumBottomInset; 
@property (nonatomic,retain) UIView * backgroundView; 
@property (nonatomic,retain) id<ABPersonTabsLayoutManager> tabsLayoutManager; 
@required
-(void)setBackgroundView:(id)arg1;
-(UIView *)backgroundView;
-(double)minimumBottomInset;
-(void)setMinimumBottomInset:(double)arg1;
-(id<ABPersonTabsLayoutManager>)tabsLayoutManager;
-(void)setTabsLayoutManager:(id)arg1;

@end

