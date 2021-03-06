/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:22 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIInterfaceActionVisualStyle.h>

@class UIInterfaceActionSeparatorAttributes;

@interface UIInterfaceActionOverrideVisualStyle : UIInterfaceActionVisualStyle {

	UIInterfaceActionSeparatorAttributes* _customSeparatorAttributes;
	/*^block*/id _customTitleLabelFontProviderForViewState;

}

@property (nonatomic,retain) UIInterfaceActionSeparatorAttributes * customSeparatorAttributes;              //@synthesize customSeparatorAttributes=_customSeparatorAttributes - In the implementation block
@property (nonatomic,copy) id customTitleLabelFontProviderForViewState;                                     //@synthesize customTitleLabelFontProviderForViewState=_customTitleLabelFontProviderForViewState - In the implementation block
+(id)styleOverride;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIInterfaceActionSeparatorAttributes *)customSeparatorAttributes;
-(id)newActionSeparatorViewForGroupViewState:(id)arg1 ;
-(id)actionTitleLabelFontForViewState:(id)arg1 ;
-(void)setCustomSeparatorAttributes:(UIInterfaceActionSeparatorAttributes *)arg1 ;
-(id)customTitleLabelFontProviderForViewState;
-(void)setCustomTitleLabelFontProviderForViewState:(id)arg1 ;
@end

