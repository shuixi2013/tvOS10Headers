/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:50 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIKBRenderFactoryiPhone.h>

@interface UIKBRenderFactoryiPad : UIKBRenderFactoryiPhone
-(id)_traitsForKey:(id)arg1 onKeyplane:(id)arg2 ;
-(id)lightKeycapsFontName;
-(void)_customizeTraits:(id)arg1 forPopupForKey:(id)arg2 withRenderingContext:(id)arg3 keycapsFontName:(id)arg4 ;
-(void)setAllowsPaddles:(BOOL)arg1 ;
-(BOOL)shouldClearBaseDisplayStringForVariants:(id)arg1 ;
-(id)thinKeycapsFontName;
-(double)keyCornerRadius;
-(id)messagesWriteboardKeyImageName;
-(BOOL)supportsInputTraits:(id)arg1 forKeyplane:(id)arg2 ;
-(id)displayContentsForKey:(id)arg1 ;
-(double)spaceKeyFontSize;
-(id)multitapCompleteKeyImageName;
-(id)muttitapReverseKeyImageName;
-(void)setupLayoutSegments;
-(id)shiftKeyImageName;
-(id)shiftOnKeyImageName;
-(id)shiftLockImageName;
-(double)deleteKeyFontSize;
-(double)moreKeyFontSize;
-(double)internationalKeyFontSize;
-(double)dictationKeyFontSize;
-(double)dismissKeyFontSize;
-(CGPoint)dismissKeyOffset;
-(id)lowQualityLayeredBackgroundColorName;
-(id)deleteKeyImageName;
-(id)deleteOnKeyImageName;
-(double)skinnyKeyThreshold;
-(id)globalEmojiKeyImageName;
-(id)globalKeyImageName;
-(id)dismissKeyImageName;
-(id)dictationKeyImageName;
-(CGPoint)internationalKeyOffset;
-(CGPoint)dictationKeyOffset;
-(CGPoint)deleteKeyOffset;
-(double)shiftKeyFontSize;
-(CGPoint)shiftKeyOffset;
-(CGPoint)stringKeyOffset;
-(double)stringKeyFontSize;
-(CGPoint)returnKeyOffset;
-(double)zhuyinFirstToneKeyFontSize;
-(void)_customizeSymbolStyle:(id)arg1 forKey:(id)arg2 contents:(id)arg3 ;
-(void)_customizeGeometry:(id)arg1 forKey:(id)arg2 contents:(id)arg3 ;
-(void)_customizePopupTraits:(id)arg1 forKey:(id)arg2 onKeyplane:(id)arg3 ;
-(UIEdgeInsets)variantDisplayFrameInsets;
-(UIEdgeInsets)variantSymbolFrameInsets;
-(long long)rowLimitForKey:(id)arg1 ;
-(id)variantGeometriesForGeometry:(id)arg1 variantCount:(unsigned long long)arg2 rowLimit:(long long)arg3 ;
-(double)_row4ControlSegmentWidthLeft;
-(double)_row4ControlSegmentWidthRight;
-(CGPoint)secondaryShiftKeyOffset;
-(double)predictiveKeyCornerRadius;
-(double)keyInsetBottom;
-(double)cornerRadiusForKey:(id)arg1 ;
-(CGRect)insetFrame:(CGRect)arg1 forKey:(id)arg2 ;
-(double)symbolFrameInset;
-(CGRect)shiftKeySymbolFrame;
-(CGRect)dismissKeySymbolFrame;
-(double)returnKeySymbolFrameInset;
-(double)fontSizeAdjustmentForNonAlphanumericKeycaps;
-(double)dualStringKeyFontSizeAdjustment;
-(double)bottomRowDefaultFontSize;
-(BOOL)iPadFudgeLayout;
-(double)messagesTypeKeyplanSwitchKeyFontSize;
-(double)smallKanaKeyFontSize;
-(double)emailDotKeyFontSize;
-(double)facemarkKeyFontSize;
-(double)fallbackFontSize;
-(CGSize)defaultVariantGeometrySize;
-(double)defaultVariantSizeThreshold;
-(CGPoint)dualStringKeyOffset;
-(double)dualStringKeyMiddleMargin;
-(double)defaultPathWeight;
@end

