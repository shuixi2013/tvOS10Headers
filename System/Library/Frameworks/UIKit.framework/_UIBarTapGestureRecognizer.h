/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITapGestureRecognizer.h>

@interface _UIBarTapGestureRecognizer : UITapGestureRecognizer {

	BOOL _failWhenTappingInBars;
	long long _tapCategory;

}

@property (nonatomic,readonly) long long tapCategory;                 //@synthesize tapCategory=_tapCategory - In the implementation block
@property (assign,nonatomic) BOOL failWhenTappingInBars;              //@synthesize failWhenTappingInBars=_failWhenTappingInBars - In the implementation block
-(void)setDelegate:(id)arg1 ;
-(id)description;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)_setDelegate:(id)arg1 ;
-(long long)tapCategory;
-(long long)_categoryForTapLocation:(CGPoint)arg1 ;
-(BOOL)failWhenTappingInBars;
-(void)setFailWhenTappingInBars:(BOOL)arg1 ;
@end

