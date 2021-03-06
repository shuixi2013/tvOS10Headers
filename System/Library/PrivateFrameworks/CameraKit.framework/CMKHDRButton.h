/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:21 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CMKExpandableMenuButton.h>

@class UIImageView;

@interface CMKHDRButton : CMKExpandableMenuButton {

	BOOL _allowsAutomaticHDR;
	UIImageView* __glyphView;

}

@property (nonatomic,readonly) UIImageView * _glyphView;              //@synthesize _glyphView=__glyphView - In the implementation block
@property (assign,nonatomic) int HDRMode; 
@property (assign,nonatomic) BOOL allowsAutomaticHDR;                 //@synthesize allowsAutomaticHDR=_allowsAutomaticHDR - In the implementation block
-(void)reloadData;
-(id)headerView;
-(int)HDRMode;
-(void)setHDRMode:(int)arg1 ;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(UIImageView *)_glyphView;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(void)setAllowsAutomaticHDR:(BOOL)arg1 ;
-(void)_commonCMKHDRButtonInitialization;
-(int)modeForIndex:(long long)arg1 ;
-(long long)indexForMode:(int)arg1 ;
-(void)_updateCurrentGlyphImage;
-(BOOL)allowsAutomaticHDR;
-(id)_currentGlyphImage;
@end

