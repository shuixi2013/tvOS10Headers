/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:24 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface TPLCDBar : UIView {

	UIImageView* _shadowView;

}

@property (readonly) UIImageView * shadowView;              //@synthesize shadowView=_shadowView - In the implementation block
+(double)defaultHeight;
+(id)backgroundImage;
+(double)defaultHeightForOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(UIImageView *)shadowView;
-(id)initWithDefaultSize;
-(id)initWithDefaultSizeForOrientation:(long long)arg1 ;
-(void)setOrientation:(long long)arg1 updateFrame:(BOOL)arg2 ;
@end

