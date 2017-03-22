/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILegibilitySettings, UIImage;

@interface _UILegibilityCachedShadow : NSObject {

	_UILegibilitySettings* _settings;
	double _strength;
	UIImage* _shadow;

}

@property (nonatomic,retain) _UILegibilitySettings * settings;              //@synthesize settings=_settings - In the implementation block
@property (assign,nonatomic) double strength;                               //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIImage * shadow;                              //@synthesize shadow=_shadow - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(_UILegibilitySettings *)settings;
-(void)setSettings:(_UILegibilitySettings *)arg1 ;
-(double)strength;
-(BOOL)matchesSettings:(id)arg1 strength:(double)arg2 ;
-(void)setStrength:(double)arg1 ;
-(UIImage *)shadow;
-(void)setShadow:(UIImage *)arg1 ;
@end

