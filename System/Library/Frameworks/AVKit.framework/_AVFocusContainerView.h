/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@protocol _AVFocusContainerDelegate;
@interface _AVFocusContainerView : UIView {

	id<_AVFocusContainerDelegate> _focusContainerDelegate;

}

@property (assign,nonatomic,__weak) id<_AVFocusContainerDelegate> focusContainerDelegate;              //@synthesize focusContainerDelegate=_focusContainerDelegate - In the implementation block
-(id)description;
-(id)debugDescription;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusFromView:(id)arg1 ;
-(id)_extraDescription;
-(id<_AVFocusContainerDelegate>)focusContainerDelegate;
-(void)setFocusContainerDelegate:(id<_AVFocusContainerDelegate>)arg1 ;
@end
