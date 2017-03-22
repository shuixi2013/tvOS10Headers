/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <AddressBookUI/ABSectionListHeaderView.h>

@class _UIBackdropView, UIView;

@interface ABSectionListVibrantHeaderView : ABSectionListHeaderView {

	_UIBackdropView* _backdrop;
	UIView* _plusDView;
	BOOL _wantsPlusDLayer;

}

@property (assign,nonatomic) BOOL wantsPlusDLayer;              //@synthesize wantsPlusDLayer=_wantsPlusDLayer - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setFloating:(BOOL)arg1 ;
-(void)setBackdropGroupName:(id)arg1 ;
-(void)setWantsPlusDLayer:(BOOL)arg1 ;
-(BOOL)wantsPlusDLayer;
@end

