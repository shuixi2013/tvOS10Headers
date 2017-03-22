/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UIPrintMessageAndSpinnerView;

@interface UIPrinterSearchingView : UIView {

	BOOL _constraintsSet;
	_UIPrintMessageAndSpinnerView* _messageAndSpinner;

}

@property (assign,nonatomic,__weak) _UIPrintMessageAndSpinnerView * messageAndSpinner;              //@synthesize messageAndSpinner=_messageAndSpinner - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(_UIPrintMessageAndSpinnerView *)messageAndSpinner;
-(void)searchTimeout;
-(void)setSearching:(BOOL)arg1 ;
-(void)setMessageAndSpinner:(_UIPrintMessageAndSpinnerView *)arg1 ;
@end

