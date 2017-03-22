/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:56 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/AccessibilityBundles/UIKit.axbundle/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/__UIImageAccessibility_super.h>

@interface UIImageAccessibility : __UIImageAccessibility_super
+(id)kitImageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)imageWithContentsOfFile:(id)arg1 ;
+(id)imageNamed:(id)arg1 inBundle:(id)arg2 ;
+(id)imageAtPath:(id)arg1 ;
+(id)safeCategoryTargetClassName;
+(void)_accessibilityPerformValidations:(id)arg1 ;
+(Class)safeCategoryBaseClass;
-(void)dealloc;
-(id)imageFlippedForRightToLeftLayoutDirection;
-(CGImageRef)CGImage;
-(id)imageWithAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(id)_bezeledImageWithShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 fillRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 drawShadow:(BOOL)arg9 ;
-(id)_doubleBezeledImageWithExteriorShadowRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 interiorShadowRed:(double)arg5 green:(double)arg6 blue:(double)arg7 alpha:(double)arg8 fillRed:(double)arg9 green:(double)arg10 blue:(double)arg11 alpha:(double)arg12 ;
-(id)_imageScaledToProportion:(double)arg1 interpolationQuality:(int)arg2 ;
-(id)initWithContentsOfFile:(id)arg1 ;
-(id)initWithContentsOfFile:(id)arg1 cache:(BOOL)arg2 ;
-(id)imageWithRenderingMode:(long long)arg1 ;
-(id)_flatImageWithColor:(id)arg1 ;
-(id)_flatImageWithWhite:(double)arg1 alpha:(double)arg2 ;
-(id)accessibilityIdentifier;
-(void)_accessibilityApplyLabelOnMainThread:(id)arg1 ;
-(id)_accessibilityPhotoDescription;
@end

