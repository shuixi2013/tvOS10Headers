/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:33 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSURL, UIFont, UIColor;

@interface _TVMonogramDescription : NSObject <NSSecureCoding> {

	BOOL _hasPlaceholder;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _text;
	NSURL* _imageURL;
	UIFont* _font;
	double _upscaleAdjustment;
	double _cornerRadius;
	UIColor* _fillColor;
	double _borderWidth;
	UIColor* _borderColor;
	CGSize _size;

}

@property (nonatomic,copy,readonly) NSString * firstName;              //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;               //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                  //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                     //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize size;                              //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) double upscaleAdjustment;                 //@synthesize upscaleAdjustment=_upscaleAdjustment - In the implementation block
@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                      //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceholder;                      //@synthesize hasPlaceholder=_hasPlaceholder - In the implementation block
@property (assign,nonatomic) double borderWidth;                       //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                    //@synthesize borderColor=_borderColor - In the implementation block
+(BOOL)supportsSecureCoding;
-(CGSize)size;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setSize:(CGSize)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setBorderWidth:(double)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(UIFont *)font;
-(UIColor *)borderColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)fillColor;
-(double)borderWidth;
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(NSURL *)imageURL;
-(NSString *)firstName;
-(NSString *)lastName;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4 ;
-(BOOL)hasPlaceholder;
-(void)setHasPlaceholder:(BOOL)arg1 ;
@end
