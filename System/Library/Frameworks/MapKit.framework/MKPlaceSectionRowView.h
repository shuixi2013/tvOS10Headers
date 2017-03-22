/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKPlaceSectionItemView.h>

@interface MKPlaceSectionRowView : MKPlaceSectionItemView {

	BOOL _selected;
	BOOL _highlighted;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateBackgroundColor:(BOOL)arg1 ;
@end

