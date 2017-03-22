/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:34 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIColor;

@interface _TVRatingBadgeView : UIView {

	NSString* _ratingStyle;
	UIColor* _tintColor;
	UIColor* _fillColor;
	double _ratingValue;

}

@property (nonatomic,retain) NSString * ratingStyle;              //@synthesize ratingStyle=_ratingStyle - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                 //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                 //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) double ratingValue;                  //@synthesize ratingValue=_ratingValue - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(BOOL)canBecomeFocused;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(id)_starImage;
-(void)setRatingValue:(double)arg1 ;
-(double)ratingValue;
-(id)_halfStarImage;
-(double)_circleRadius;
-(void)setRatingStyle:(NSString *)arg1 ;
-(NSString *)ratingStyle;
@end

