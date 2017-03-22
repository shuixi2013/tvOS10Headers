/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSTimer, NSDate;

@interface CMKElapsedTimeView : UIView {

	UILabel* __timeLabel;
	UIImageView* __recordingImageView;
	NSTimer* __updateTimer;
	NSDate* __startTime;

}

@property (nonatomic,readonly) UILabel * _timeLabel;                           //@synthesize _timeLabel=__timeLabel - In the implementation block
@property (nonatomic,readonly) UIImageView * _recordingImageView;              //@synthesize _recordingImageView=__recordingImageView - In the implementation block
@property (nonatomic,readonly) NSTimer * _updateTimer;                         //@synthesize _updateTimer=__updateTimer - In the implementation block
@property (nonatomic,readonly) NSDate * _startTime;                            //@synthesize _startTime=__startTime - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)resetTimer;
-(void)startTimer;
-(void)_update:(id)arg1 ;
-(NSDate *)_startTime;
-(void)updateToContentSize:(id)arg1 ;
-(void)endTimer;
-(void)_commonCMKElapsedTimeViewInitialization;
-(void)_setStartTime:(id)arg1 ;
-(void)_beginRecordingAnimation;
-(void)_endRecordingAnimation;
-(UILabel *)_timeLabel;
-(UIImageView *)_recordingImageView;
-(NSTimer *)_updateTimer;
@end

