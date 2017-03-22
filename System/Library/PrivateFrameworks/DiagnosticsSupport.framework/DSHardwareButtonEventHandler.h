/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DSHardwareButtonEventDelegate;
@interface DSHardwareButtonEventHandler : NSObject {

	BOOL _preventPropagation;
	id<DSHardwareButtonEventDelegate> _delegate;
	unsigned long long _buttons;

}

@property (assign,nonatomic,__weak) id<DSHardwareButtonEventDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) unsigned long long buttons;                                     //@synthesize buttons=_buttons - In the implementation block
@property (assign,nonatomic) BOOL preventPropagation;                                        //@synthesize preventPropagation=_preventPropagation - In the implementation block
-(void)setDelegate:(id<DSHardwareButtonEventDelegate>)arg1 ;
-(id<DSHardwareButtonEventDelegate>)delegate;
-(unsigned long long)buttons;
-(void)setButtons:(unsigned long long)arg1 ;
-(BOOL)preventPropagation;
-(void)setPreventPropagation:(BOOL)arg1 ;
@end

