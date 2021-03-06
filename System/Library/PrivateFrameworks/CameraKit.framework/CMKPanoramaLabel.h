/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_UIBackdropViewObserver.h>

@class _UIBackdropView, _UILegibilityView, _UILegibilitySettingsProvider, NSString;

@interface CMKPanoramaLabel : UIView <_UIBackdropViewObserver> {

	_UIBackdropView* _backdropView;
	_UILegibilityView* _legibilityView;
	_UILegibilitySettingsProvider* _legibilitySettingsProvider;
	NSString* _text;

}

@property (nonatomic,copy) NSString * text;              //@synthesize text=_text - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)backdropViewDidChange:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(void)_updateLegibilityView;
@end

