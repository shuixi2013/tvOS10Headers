/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:16 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UITraitCollection, UIScreen, UIColor;

@interface UIInterfaceActionVisualStyleViewState : NSObject <NSCopying> {

	BOOL _isDark;
	UITraitCollection* _traitCollection;
	UIScreen* _screen;
	UIColor* _tintColor;

}

@property (nonatomic,readonly) UITraitCollection * traitCollection;              //@synthesize traitCollection=_traitCollection - In the implementation block
@property (nonatomic,readonly) UIScreen * screen;                                //@synthesize screen=_screen - In the implementation block
@property (nonatomic,readonly) BOOL isDark;                                      //@synthesize isDark=_isDark - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                              //@synthesize tintColor=_tintColor - In the implementation block
-(UITraitCollection *)traitCollection;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(UIScreen *)screen;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(id)initWithPropertiesFromTopLevelView:(id)arg1 ;
-(void)_collectStateFromView:(id)arg1 ;
-(void)_collectStateFromScreen:(id)arg1 ;
-(void)_collectStateFromVisualStyleViewState:(id)arg1 ;
-(BOOL)_stateEqualToVisualStyleViewState:(id)arg1 ;
-(BOOL)isDark;
-(id)copyWithTraitCollection:(id)arg1 ;
-(id)copyWithScreen:(id)arg1 ;
@end
