/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/RUIHeader.h>

@class UILabel, UIImageView, NSString;

@interface RUIHeaderView : UIView <RUIHeader> {

	UILabel* _headerLabel;
	UILabel* _detailHeaderLabel;
	UILabel* _subHeaderLabel;
	UIImageView* _iconView;
	int _imageAlignment;
	BOOL _isFirstSection;
	BOOL _customIconSize;
	UIEdgeInsets _margins;

}

@property (assign,nonatomic) UIEdgeInsets margins;                  //@synthesize margins=_margins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(id)initWithAttributes:(id)arg1 ;
-(id)iconImage;
-(UIEdgeInsets)margins;
-(void)setMargins:(UIEdgeInsets)arg1 ;
-(id)headerLabel;
-(double)_headerOffset;
-(BOOL)_hasIcon;
-(void)setHeaderAlignment:(long long)arg1 ;
-(void)setHeaderColor:(id)arg1 ;
-(void)setSubHeaderAlignment:(long long)arg1 ;
-(void)setSubHeaderColor:(id)arg1 ;
-(void)setDetailHeaderColor:(id)arg1 ;
-(double)_imageTitlePaddingInView:(id)arg1 ;
-(double)_titleSubtitlePaddingInView:(id)arg1 ;
-(void)setImageSize:(CGSize)arg1 ;
-(void)setText:(id)arg1 attributes:(id)arg2 ;
-(double)headerHeightForWidth:(double)arg1 inView:(id)arg2 ;
-(void)setSubHeaderText:(id)arg1 attributes:(id)arg2 ;
-(id)subHeaderLabel;
-(void)setDetailText:(id)arg1 attributes:(id)arg2 ;
-(id)detailHeaderLabel;
-(void)setIconImage:(id)arg1 ;
-(void)setImageAlignment:(int)arg1 ;
-(void)setSectionIsFirst:(BOOL)arg1 ;
@end

