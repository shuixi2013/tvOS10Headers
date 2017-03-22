/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:43 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SiriTVUI.framework/SiriTVUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriTVUI/SiriTVUI-Structs.h>
#import <SiriTVUI/SiriTVUIVibrantEffectView.h>
#import <SiriTVUI/SiriTVUITemplateItemView.h>

@class UILabel, NSDictionary, NSString;

@interface SiriTVUIVibrantLabel : SiriTVUIVibrantEffectView <SiriTVUITemplateItemView> {

	UILabel* _label;
	BOOL hasPriorityLayout;
	NSDictionary* _attributedTexts;

}

@property (nonatomic,copy) NSDictionary * attributedTexts;              //@synthesize attributedTexts=_attributedTexts - In the implementation block
@property (assign,nonatomic) long long numberOfLines; 
@property (assign,nonatomic) long long lineBreakMode; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL hasPriorityLayout; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setNumberOfLines:(long long)arg1 ;
-(void)setLineBreakMode:(long long)arg1 ;
-(long long)lineBreakMode;
-(long long)numberOfLines;
-(BOOL)hasPriorityLayout;
-(void)setHasPriorityLayout:(BOOL)arg1 ;
-(void)_updateAttributedText;
-(void)setAttributedTexts:(NSDictionary *)arg1 ;
-(NSDictionary *)attributedTexts;
-(BOOL)shouldFitWithinContentMargins;
@end

