/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <WebCore/WAKView.h>

@class UIWebDocumentView, CALayer, UIView;

@interface UIWebPlugInView : WAKView {

	UIWebDocumentView* _webView;
	CALayer* _hostingLayer;
	UIView* _uiView;
	CFRunLoopObserverRef _mainRunLoopDrawObserver;
	BOOL _isFullScreen;
	BOOL _parentedInLayer;
	BOOL _isQuickTimePlugIn;
	BOOL _isMapViewPlugIn;
	BOOL _isiAdPlugIn;

}

@property (assign,getter=isParentedInLayer,nonatomic) BOOL parentedInLayer;              //@synthesize parentedInLayer=_parentedInLayer - In the implementation block
@property (assign,nonatomic) BOOL isQuickTimePlugIn;                                     //@synthesize isQuickTimePlugIn=_isQuickTimePlugIn - In the implementation block
@property (assign,nonatomic) BOOL isMapViewPlugIn;                                       //@synthesize isMapViewPlugIn=_isMapViewPlugIn - In the implementation block
@property (assign,nonatomic) BOOL isiAdPlugIn;                                           //@synthesize isiAdPlugIn=_isiAdPlugIn - In the implementation block
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)layout;
-(void)forwardInvocation:(id)arg1 ;
-(void)reshape;
-(void)setFrameSize:(CGSize)arg1 ;
-(void)viewDidMoveToWindow;
-(void)_viewDidMoveToWindowOnMainThread;
-(void)invalidateGState;
-(void)_reshapeOnMainThread;
-(BOOL)isParented;
-(void)webPlugInInitialize;
-(void)webPlugInStart;
-(void)webPlugInStop;
-(void)webPlugInDestroy;
-(id)objectForWebScript;
-(BOOL)isParentedInLayer;
-(void)setParentedInLayer:(BOOL)arg1 ;
-(void)_connectPluginLayers;
-(void)_disconnectPluginLayers;
-(BOOL)willProvidePluginLayer;
-(void)_attachPluginLayerOnMainThread;
-(void)_detachPluginLayerOnMainThread;
-(id)initWithWebView:(id)arg1 plugInView:(id)arg2 ;
-(id)plugInView;
-(void)mouseDown:(id)arg1 ;
-(void)mouseUp:(id)arg1 ;
-(void)setWebView:(id)arg1 ;
-(id)pluginLayer;
-(void)attachPluginLayer;
-(void)detachPluginLayer;
-(BOOL)isQuickTimePlugIn;
-(void)setIsQuickTimePlugIn:(BOOL)arg1 ;
-(BOOL)isMapViewPlugIn;
-(void)setIsMapViewPlugIn:(BOOL)arg1 ;
-(BOOL)isiAdPlugIn;
-(void)setIsiAdPlugIn:(BOOL)arg1 ;
@end

