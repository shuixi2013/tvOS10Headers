/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage;

@interface UISliderContent : NSObject {

	UIImage* _thumb;
	UIImage* _minTrack;
	UIImage* _maxTrack;

}

@property (nonatomic,retain) UIImage * thumb;                 //@synthesize thumb=_thumb - In the implementation block
@property (nonatomic,retain) UIImage * minTrack;              //@synthesize minTrack=_minTrack - In the implementation block
@property (nonatomic,retain) UIImage * maxTrack;              //@synthesize maxTrack=_maxTrack - In the implementation block
@property (nonatomic,readonly) BOOL isEmpty; 
-(BOOL)isEmpty;
-(UIImage *)thumb;
-(void)setThumb:(UIImage *)arg1 ;
-(UIImage *)minTrack;
-(void)setMinTrack:(UIImage *)arg1 ;
-(UIImage *)maxTrack;
-(void)setMaxTrack:(UIImage *)arg1 ;
@end

