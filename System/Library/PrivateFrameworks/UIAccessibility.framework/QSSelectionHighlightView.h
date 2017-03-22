/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:51 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIAccessibility/UIAccessibility-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIColor;

@interface QSSelectionHighlightView : UIView {

	BOOL _sentenceHighlight;
	NSArray* _highlightSelectionRects;
	UIColor* _selectionColor;
	UIColor* _underlineColor;

}

@property (nonatomic,retain) NSArray * highlightSelectionRects;              //@synthesize highlightSelectionRects=_highlightSelectionRects - In the implementation block
@property (nonatomic,retain) UIColor * selectionColor;                       //@synthesize selectionColor=_selectionColor - In the implementation block
@property (nonatomic,retain) UIColor * underlineColor;                       //@synthesize underlineColor=_underlineColor - In the implementation block
@property (assign,nonatomic) BOOL sentenceHighlight;                         //@synthesize sentenceHighlight=_sentenceHighlight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(UIColor *)selectionColor;
-(void)setSelectionColor:(UIColor *)arg1 ;
-(void)setUnderlineColor:(UIColor *)arg1 ;
-(BOOL)sentenceHighlight;
-(UIColor *)underlineColor;
-(NSArray *)highlightSelectionRects;
-(void)setHighlightSelectionRects:(NSArray *)arg1 ;
-(void)setSentenceHighlight:(BOOL)arg1 ;
@end

