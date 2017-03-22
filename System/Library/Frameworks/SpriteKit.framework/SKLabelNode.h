/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:32 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKNode.h>

@class NSString, UIColor;

@interface SKLabelNode : SKNode {

	SKCLabelNode* _skcLabelNode;

}

@property (assign,nonatomic) long long verticalAlignmentMode; 
@property (assign,nonatomic) long long horizontalAlignmentMode; 
@property (nonatomic,copy) NSString * fontName; 
@property (nonatomic,copy) NSString * text; 
@property (assign,nonatomic) double fontSize; 
@property (nonatomic,retain) UIColor * fontColor; 
@property (assign,nonatomic) double colorBlendFactor; 
@property (nonatomic,retain) UIColor * color; 
@property (assign,nonatomic) long long blendMode; 
+(id)labelNodeWithFontNamed:(id)arg1 ;
+(id)labelNodeWithText:(id)arg1 ;
+(id)_labelNodeWithFontNamed:(id)arg1 ;
+(id)_labelNodeWithFontTexture:(id)arg1 fontDataString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(CGRect)frame;
-(id)description;
-(id)copy;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFont:(CTFontRef)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(NSString *)fontName;
-(void)setFontSize:(double)arg1 ;
-(void)setFontName:(NSString *)arg1 ;
-(long long)blendMode;
-(void)setBlendMode:(long long)arg1 ;
-(double)fontSize;
-(UIColor *)fontColor;
-(void)setFontColor:(UIColor *)arg1 ;
-(SKCNode*)_makeBackingNode;
-(void)_didMakeBackingNode;
-(void)setColorBlendFactor:(double)arg1 ;
-(double)colorBlendFactor;
-(id)_getTextSprites;
-(long long)horizontalAlignmentMode;
-(long long)verticalAlignmentMode;
-(void)setHorizontalAlignmentMode:(long long)arg1 ;
-(void)setVerticalAlignmentMode:(long long)arg1 ;
-(id)initWithFontNamed:(id)arg1 ;
-(void)_initialize;
-(BOOL)isEqualToNode:(id)arg1 ;
@end

