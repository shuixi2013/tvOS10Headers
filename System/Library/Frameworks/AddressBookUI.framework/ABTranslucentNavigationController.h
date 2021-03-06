/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:47 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationController.h>

@protocol ABStyleProvider;
@interface ABTranslucentNavigationController : UINavigationController {

	BOOL _overridesNavigationBarInset;
	id<ABStyleProvider> _styleProvider;

}

@property (nonatomic,retain) id<ABStyleProvider> styleProvider;              //@synthesize styleProvider=_styleProvider - In the implementation block
@property (assign,nonatomic) BOOL overridesNavigationBarInset;               //@synthesize overridesNavigationBarInset=_overridesNavigationBarInset - In the implementation block
-(BOOL)_shouldNavigationBarInsetViewController:(id)arg1 ;
-(id<ABStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<ABStyleProvider>)arg1 ;
-(BOOL)overridesNavigationBarInset;
-(void)setOverridesNavigationBarInset:(BOOL)arg1 ;
@end

