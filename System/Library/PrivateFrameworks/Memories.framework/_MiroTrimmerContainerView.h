/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:28 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface _MiroTrimmerContainerView : UIView {

	UIView* _movieScrubber;
	UIView* _debugOverlay;

}

@property (nonatomic,retain) UIView * movieScrubber;              //@synthesize movieScrubber=_movieScrubber - In the implementation block
@property (nonatomic,retain) UIView * debugOverlay;               //@synthesize debugOverlay=_debugOverlay - In the implementation block
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIView *)movieScrubber;
-(UIView *)debugOverlay;
-(void)setMovieScrubber:(UIView *)arg1 ;
-(void)setDebugOverlay:(UIView *)arg1 ;
@end

