/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:35 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput/TIKeyboardInputManagerStub.h>
#import <UIKit/_UIIVCInterface.h>

@protocol _UIIVCResponseDelegate, _UIIVCInterface;
@class _UIInputViewControllerState, NSString;

@interface UIInputViewControllerInterface : TIKeyboardInputManagerStub <_UIIVCInterface> {

	id<_UIIVCResponseDelegate> _responseDelegate;
	id<_UIIVCInterface> _forwardingInterface;
	_UIInputViewControllerState* _cachedState;

}

@property (setter=_setCachedState:,getter=_cachedState,nonatomic,retain) _UIInputViewControllerState * cachedState;              //@synthesize cachedState=_cachedState - In the implementation block
@property (nonatomic,retain) id<_UIIVCInterface> forwardingInterface;                                                            //@synthesize forwardingInterface=_forwardingInterface - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<_UIIVCResponseDelegate> responseDelegate;                                                        //@synthesize responseDelegate=_responseDelegate - In the implementation block
-(void)dealloc;
-(id)init;
-(id<_UIIVCResponseDelegate>)responseDelegate;
-(void)setResponseDelegate:(id<_UIIVCResponseDelegate>)arg1 ;
-(void)syncToKeyboardState:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)_cachedState;
-(id<_UIIVCInterface>)forwardingInterface;
-(void)_handleInputViewControllerState:(id)arg1 ;
-(void)_setCachedState:(id)arg1 ;
-(void)_tearDownRemoteService;
-(void)setForwardingInterface:(id<_UIIVCInterface>)arg1 ;
@end

