/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:00 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CUIPSDLayerEffectComponent.h>

@class CUIColor;

@interface CUIPSDLayerEffectBevelEmboss : CUIPSDLayerEffectComponent {

	unsigned long long _blurSize;
	unsigned long long _softenSize;
	short _angle;
	unsigned long long _altitude;
	unsigned _direction;
	int _highlightBlendMode;
	CUIColor* _highlightColor;
	double _highlightOpacity;
	int _shadowBlendMode;
	CUIColor* _shadowColor;
	double _shadowOpacity;

}

@property (assign) unsigned long long blurSize;                //@synthesize blurSize=_blurSize - In the implementation block
@property (assign) unsigned long long softenSize;              //@synthesize softenSize=_softenSize - In the implementation block
@property (assign) short angle;                                //@synthesize angle=_angle - In the implementation block
@property (assign) unsigned long long altitude;                //@synthesize altitude=_altitude - In the implementation block
@property (assign) unsigned direction;                         //@synthesize direction=_direction - In the implementation block
@property (assign) int highlightBlendMode;                     //@synthesize highlightBlendMode=_highlightBlendMode - In the implementation block
@property (retain) CUIColor * highlightColor;                  //@synthesize highlightColor=_highlightColor - In the implementation block
@property (assign) double highlightOpacity;                    //@synthesize highlightOpacity=_highlightOpacity - In the implementation block
@property (assign) int shadowBlendMode;                        //@synthesize shadowBlendMode=_shadowBlendMode - In the implementation block
@property (retain) CUIColor * shadowColor;                     //@synthesize shadowColor=_shadowColor - In the implementation block
@property (assign) double shadowOpacity;                       //@synthesize shadowOpacity=_shadowOpacity - In the implementation block
-(void)setBlurSize:(unsigned long long)arg1 ;
-(void)setSoftenSize:(unsigned long long)arg1 ;
-(void)setHighlightBlendMode:(int)arg1 ;
-(void)setHighlightOpacity:(double)arg1 ;
-(void)setShadowBlendMode:(int)arg1 ;
-(BOOL)updateLayerEffectPreset:(id)arg1 error:(id*)arg2 ;
-(id)initWithEffectFromPreset:(id)arg1 atIndex:(unsigned)arg2 ;
-(unsigned long long)blurSize;
-(int)highlightBlendMode;
-(int)shadowBlendMode;
-(unsigned long long)softenSize;
-(double)highlightOpacity;
-(void)dealloc;
-(id)init;
-(void)setShadowColor:(CUIColor *)arg1 ;
-(void)setDirection:(unsigned)arg1 ;
-(unsigned)direction;
-(CUIColor *)shadowColor;
-(void)setShadowOpacity:(double)arg1 ;
-(double)shadowOpacity;
-(CUIColor *)highlightColor;
-(void)setHighlightColor:(CUIColor *)arg1 ;
-(void)setAngle:(short)arg1 ;
-(short)angle;
-(void)setAltitude:(unsigned long long)arg1 ;
-(unsigned long long)altitude;
-(unsigned)effectType;
@end

