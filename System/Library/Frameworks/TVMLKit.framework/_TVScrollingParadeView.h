/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol OS_dispatch_group;
@class NSObject, NSMutableArray, __TVImageLoaderQueue, NSArray, NSString;

@interface _TVScrollingParadeView : UIView <CAAnimationDelegate> {

	BOOL _animating;
	unsigned long long _additionalImageViewCount;
	NSObject*<OS_dispatch_group> _animationGroup;
	NSMutableArray* _imageViews;
	__TVImageLoaderQueue* _loaderQueue;
	BOOL _paused;
	NSArray* _imageProxies;

}

@property (nonatomic,copy) NSArray * imageProxies;                     //@synthesize imageProxies=_imageProxies - In the implementation block
@property (assign,getter=isPaused,nonatomic) BOOL paused;              //@synthesize paused=_paused - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)didMoveToWindow;
-(void)layoutSubviews;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)isPaused;
-(NSArray *)imageProxies;
-(void)setImageProxies:(NSArray *)arg1 ;
-(void)_startAnimations;
-(void)_stopAnimations;
-(void)_addImageToAnimationContainer:(id)arg1 ;
@end

