/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVKit/TVKit-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, UILabel, UIProgressView;

@interface TVOSUpdateView : UIView {

	UIImageView* _logo;
	UILabel* _stepText;
	UILabel* _dontUnplugText;
	UIProgressView* _progress;

}
+(id)viewForDownloadStep;
+(id)viewForUpdateStep1of2;
+(id)imageForStep2of2;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setStepText:(id)arg1 ;
-(void)_setDontUnplugText:(id)arg1 ;
-(CGRect)_frameForStep2Labels;
-(void)setProgressPercent:(float)arg1 ;
@end
