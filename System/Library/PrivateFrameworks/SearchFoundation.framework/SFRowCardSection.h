/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:52 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SFCardSection.h>

@class SFImage, SFText, NSString, NSNumber;

@interface SFRowCardSection : SFCardSection {

	BOOL _imageIsRightAligned;
	BOOL _keyNoWrap;
	BOOL _valueNoWrap;
	BOOL _cardPaddingBottom;
	SFImage* _image;
	SFText* _leadingText;
	SFText* _trailingText;
	NSString* _leftText;
	NSString* _rightText;
	SFImage* _attributionImage;
	NSString* _key;
	NSNumber* _keyWeight;
	NSString* _value;
	NSNumber* _valueWeight;

}

@property (nonatomic,retain) SFImage * image;                         //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL imageIsRightAligned;                //@synthesize imageIsRightAligned=_imageIsRightAligned - In the implementation block
@property (nonatomic,retain) SFText * leadingText;                    //@synthesize leadingText=_leadingText - In the implementation block
@property (nonatomic,retain) SFText * trailingText;                   //@synthesize trailingText=_trailingText - In the implementation block
@property (nonatomic,copy) NSString * leftText;                       //@synthesize leftText=_leftText - In the implementation block
@property (nonatomic,copy) NSString * rightText;                      //@synthesize rightText=_rightText - In the implementation block
@property (nonatomic,retain) SFImage * attributionImage;              //@synthesize attributionImage=_attributionImage - In the implementation block
@property (nonatomic,copy) NSString * key;                            //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) BOOL keyNoWrap;                          //@synthesize keyNoWrap=_keyNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * keyWeight;                      //@synthesize keyWeight=_keyWeight - In the implementation block
@property (nonatomic,copy) NSString * value;                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) BOOL valueNoWrap;                        //@synthesize valueNoWrap=_valueNoWrap - In the implementation block
@property (nonatomic,copy) NSNumber * valueWeight;                    //@synthesize valueWeight=_valueWeight - In the implementation block
@property (assign,nonatomic) BOOL cardPaddingBottom;                  //@synthesize cardPaddingBottom=_cardPaddingBottom - In the implementation block
+(BOOL)supportsSecureCoding;
-(SFText *)leadingText;
-(SFText *)trailingText;
-(void)setImage:(SFImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)key;
-(NSString *)value;
-(void)setValue:(NSString *)arg1 ;
-(SFImage *)image;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)leftText;
-(void)setLeftText:(NSString *)arg1 ;
-(NSString *)rightText;
-(void)setRightText:(NSString *)arg1 ;
-(SFImage *)attributionImage;
-(void)setAttributionImage:(SFImage *)arg1 ;
-(BOOL)imageIsRightAligned;
-(void)setImageIsRightAligned:(BOOL)arg1 ;
-(void)setLeadingText:(SFText *)arg1 ;
-(void)setTrailingText:(SFText *)arg1 ;
-(void)setKeyNoWrap:(BOOL)arg1 ;
-(void)setKeyWeight:(NSNumber *)arg1 ;
-(void)setCardPaddingBottom:(BOOL)arg1 ;
-(void)setValueNoWrap:(BOOL)arg1 ;
-(void)setValueWeight:(NSNumber *)arg1 ;
-(BOOL)keyNoWrap;
-(NSNumber *)keyWeight;
-(BOOL)valueNoWrap;
-(NSNumber *)valueWeight;
-(BOOL)cardPaddingBottom;
@end

