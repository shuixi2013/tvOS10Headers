/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UILabel;

@interface _TVDigitView : UIView {

	UIVisualEffectView* _backgroundView;
	UILabel* _textLabel;

}

@property (nonatomic,readonly) UILabel * textLabel;              //@synthesize textLabel=_textLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UILabel *)textLabel;
-(void)_setupConstraints;
@end
