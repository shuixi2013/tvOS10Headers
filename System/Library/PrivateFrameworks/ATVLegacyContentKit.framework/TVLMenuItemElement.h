/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:15 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVLegacyContentKit.framework/ATVLegacyContentKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ATVLegacyContentKit/TVLElement.h>

@class NSString, TVLImageElement, TVLElement, NSArray;

@interface TVLMenuItemElement : TVLElement {

	BOOL _dimmed;
	BOOL _centered;
	NSString* _label;
	NSString* _label2;
	NSString* _rightLabel;
	TVLImageElement* _image;
	TVLImageElement* _defaultImage;
	TVLElement* _preview;
	NSArray* _accessories;
	long long _ordinal;
	long long _maxOrdinalDigits;

}

@property (nonatomic,copy) NSString * label;                               //@synthesize label=_label - In the implementation block
@property (nonatomic,copy) NSString * label2;                              //@synthesize label2=_label2 - In the implementation block
@property (nonatomic,copy) NSString * rightLabel;                          //@synthesize rightLabel=_rightLabel - In the implementation block
@property (nonatomic,retain) TVLImageElement * image;                      //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) TVLImageElement * defaultImage;               //@synthesize defaultImage=_defaultImage - In the implementation block
@property (nonatomic,retain) TVLElement * preview;                         //@synthesize preview=_preview - In the implementation block
@property (nonatomic,retain) NSArray * accessories;                        //@synthesize accessories=_accessories - In the implementation block
@property (assign,nonatomic) long long ordinal;                            //@synthesize ordinal=_ordinal - In the implementation block
@property (assign,nonatomic) long long maxOrdinalDigits;                   //@synthesize maxOrdinalDigits=_maxOrdinalDigits - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                  //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;              //@synthesize centered=_centered - In the implementation block
-(void)setImage:(TVLImageElement *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(TVLImageElement *)image;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(void)setCentered:(BOOL)arg1 ;
-(NSString *)rightLabel;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(id)initWithXMLElement:(id)arg1 parentFeedElement:(id)arg2 ;
-(TVLImageElement *)defaultImage;
-(TVLElement *)preview;
-(long long)ordinal;
-(void)setOrdinal:(long long)arg1 ;
-(void)setMaxOrdinalDigits:(long long)arg1 ;
-(long long)maxOrdinalDigits;
-(void)setRightLabel:(NSString *)arg1 ;
-(void)setDefaultImage:(TVLImageElement *)arg1 ;
-(void)setPreview:(TVLElement *)arg1 ;
-(BOOL)isCentered;
-(NSArray *)accessories;
-(void)setAccessories:(NSArray *)arg1 ;
-(NSString *)label2;
-(void)setLabel2:(NSString *)arg1 ;
@end

