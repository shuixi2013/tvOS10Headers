/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:46 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSLayoutConstraint.h>

@class MPUNotificationObserver, UILabel, NSString;

@interface MPUContentSizeLayoutConstraint : NSLayoutConstraint {

	MPUNotificationObserver* _preferredContentSizeDidChangeObserver;
	double _textStyleDefaultLeading;
	BOOL _isBaselineConstraint;
	BOOL _isLineNumberConstraint;
	unsigned long long _numberOfLines;
	UILabel* _targetLabel;
	double _fontSizeMultiplier;
	double _defaultSizeConstant;
	NSString* _textStyle;

}

@property (assign,nonatomic) double fontSizeMultiplier;               //@synthesize fontSizeMultiplier=_fontSizeMultiplier - In the implementation block
@property (assign,nonatomic) double defaultSizeConstant;              //@synthesize defaultSizeConstant=_defaultSizeConstant - In the implementation block
@property (nonatomic,copy) NSString * textStyle;                      //@synthesize textStyle=_textStyle - In the implementation block
+(id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 nonStandardLeading:(double)arg6 ;
+(id)constraintWithAutoupdatingBaselineOfView:(id)arg1 relation:(long long)arg2 toView:(id)arg3 attribute:(long long)arg4 withTextStyle:(id)arg5 multiplier:(double)arg6 nonStandardLeading:(double)arg7 ;
+(id)contentSizeAutoupdatingConstraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 textStyle:(id)arg7 defaultSizeConstant:(double)arg8 ;
+(id)constraintWithAutoupdatingBaselineOfView:(id)arg1 toView:(id)arg2 attribute:(long long)arg3 withTextStyle:(id)arg4 nonStandardLeading:(double)arg5 ;
+(id)constraintWithItem:(id)arg1 attribute:(long long)arg2 relatedBy:(long long)arg3 toItem:(id)arg4 attribute:(long long)arg5 multiplier:(double)arg6 autoupdatingConstantFromLabel:(id)arg7 textStyle:(id)arg8 numberOfLines:(unsigned long long)arg9 ;
-(void)_updatePreferredContentSize;
-(NSString *)textStyle;
-(void)setTextStyle:(NSString *)arg1 ;
-(double)fontSizeMultiplier;
-(double)defaultSizeConstant;
-(void)setFontSizeMultiplier:(double)arg1 ;
-(void)setDefaultSizeConstant:(double)arg1 ;
@end

