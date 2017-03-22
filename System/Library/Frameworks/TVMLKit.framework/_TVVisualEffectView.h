/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIVisualEffectView.h>

@class NSString, UIView;

@interface _TVVisualEffectView : UIVisualEffectView {

	NSString* _savedGroupName;
	UIView* _backdropLayerHostView;

}

@property (nonatomic,copy,readonly) NSString * savedGroupName;                   //@synthesize savedGroupName=_savedGroupName - In the implementation block
@property (assign,nonatomic,__weak) UIView * backdropLayerHostView;              //@synthesize backdropLayerHostView=_backdropLayerHostView - In the implementation block
+(id)backdropLayerHostViews;
+(void)enableBackdropLayerHostView:(id)arg1 ;
+(void)disableBackdropLayerHostView:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(void)_setGroupName:(id)arg1 ;
-(id)initWithEffect:(id)arg1 ;
-(void)backdropLayerHostViewEnabled:(id)arg1 ;
-(void)backdropLayerHostViewDisabled:(id)arg1 ;
-(NSString *)savedGroupName;
-(UIView *)backdropLayerHostView;
-(void)setBackdropLayerHostView:(UIView *)arg1 ;
@end

