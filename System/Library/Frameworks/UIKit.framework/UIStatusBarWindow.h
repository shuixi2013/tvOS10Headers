/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:29 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIWindow.h>

@class UIStatusBar, UIStatusBarCorners;

@interface UIStatusBarWindow : UIWindow {

	UIStatusBar* _statusBar;
	long long _orientation;
	UIStatusBarCorners* _topCorners;
	double _topCornersOffset;
	UIStatusBarCorners* _bottomCorners;
	BOOL _cornersHidden;

}
+(BOOL)_isSystemWindow;
+(BOOL)isIncludedInClassicJail;
+(CGRect)_defaultStatusBarSceneReferenceBounds;
+(CGRect)_convertRect:(CGRect)arg1 fromSceneReferenceSpaceToSceneSpaceWithOrientation:(long long)arg2 ;
+(CGRect)_defaultStatusBarSceneBounds;
+(CGRect)statusBarWindowFrame;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setOrientation:(long long)arg1 animationParameters:(id)arg2 ;
-(long long)orientation;
-(BOOL)_shouldZoom;
-(BOOL)_canActAsKeyWindowForScreen:(id)arg1 ;
-(BOOL)_isConstrainedByScreenJail;
-(void)_updateTransformLayerForClassicPresentation;
-(BOOL)_disableGroupOpacity;
-(BOOL)_shouldAdjustSizeClassesAndResizeWindow;
-(BOOL)_isStatusBarWindow;
-(void)setStatusBar:(id)arg1 ;
-(CGRect)_defaultStatusBarSceneBoundsForOrientation:(long long)arg1 ;
-(void)_rotate;
-(CGRect)statusBarWindowFrame;
-(void)setCornersHidden:(BOOL)arg1 animationParameters:(id)arg2 ;
-(void)setTopCornerStyle:(int)arg1 topCornersOffset:(double)arg2 bottomCornerStyle:(int)arg3 animationParameters:(id)arg4 ;
@end

