/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIButton, UIStackView;

@interface AAUIFamilySharingFeaturesView : UIView {

	long long _context;
	UIButton* _learnMoreButton;
	BOOL _shouldHideLocationSharing;
	UIStackView* _stack;

}
+(id)rowForIcon:(id)arg1 andLabel:(id)arg2 ;
-(id)_imageViewWithIconNamed:(id)arg1 addBorder:(BOOL)arg2 ;
-(id)_labelWithStringAtKey:(id)arg1 ;
-(void)_learnMoreButtonTapped:(id)arg1 ;
-(id)_contextSensitiveLocalizedStringWithKey:(id)arg1 ;
-(id)initWithContext:(long long)arg1 hideLocationSharing:(BOOL)arg2 ;
@end

