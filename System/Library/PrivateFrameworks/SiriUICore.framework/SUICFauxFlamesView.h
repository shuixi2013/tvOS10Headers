/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/SiriUICore-Structs.h>
#import <UIKit/UIView.h>

@interface SUICFauxFlamesView : UIView {

	long long _style;
	double _width;
	SCD_Struct_SU0 _sequenceAttributes;

}
+(id)_frameImagesForSequence:(SCD_Struct_SU0)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)didMoveToSuperview;
-(id)initWithStyle:(long long)arg1 ;
-(BOOL)isAnimating;
-(void)stop:(BOOL)arg1 ;
-(void)start:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 screenSize:(long long)arg2 ;
-(void)_cleanupView;
@end
