/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:42 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <UIKit/UIWebScrollView.h>

@protocol UIScrollViewDelegate;
@class WKScrollViewDelegateForwarder, WKWebView;

@interface WKScrollView : UIWebScrollView {

	WeakObjCPtr<id<UIScrollViewDelegate> > _externalDelegate;
	WKScrollViewDelegateForwarder* _delegateForwarder;
	WKWebView*<UIScrollViewDelegate> _internalDelegate;
	double _preferredScrollDecelerationFactor;

}

@property (assign,nonatomic) WKWebView*<UIScrollViewDelegate> internalDelegate;              //@synthesize internalDelegate=_internalDelegate - In the implementation block
@property (nonatomic,readonly) double preferredScrollDecelerationFactor;                     //@synthesize preferredScrollDecelerationFactor=_preferredScrollDecelerationFactor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(id)delegate;
-(double)_rubberBandOffsetForOffset:(double)arg1 maxOffset:(double)arg2 minOffset:(double)arg3 range:(double)arg4 outside:(BOOL*)arg5 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setDecelerationRate:(double)arg1 ;
-(double)preferredScrollDecelerationFactor;
-(void)setInternalDelegate:(WKWebView*<UIScrollViewDelegate>)arg1 ;
-(WKWebView*<UIScrollViewDelegate>)internalDelegate;
-(void)_updateDelegate;
-(CGSize)_currentTopLeftRubberbandAmount;
-(void)_restoreContentOffsetWithRubberbandAmount:(CGSize)arg1 ;
-(void)_setContentSizePreservingContentOffsetDuringRubberband:(CGSize)arg1 ;
@end

