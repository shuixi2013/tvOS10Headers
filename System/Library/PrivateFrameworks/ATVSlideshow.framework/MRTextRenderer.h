/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ATVSlideshow/ATVSlideshow-Structs.h>
@class NSAttributedString;

@interface MRTextRenderer : NSObject {

	NSAttributedString* _text;
	NSAttributedString* _cachedText;
	NSAttributedString* _placeholderText;
	CGSize _definedSize;
	CGSize _resolution;
	long long _maxNumberOfLines;
	long long _lastGlyphIndex;
	BOOL _truncate;
	BOOL _renderAtDefinedSize;
	double _lineSpacingFactor;
	CGSize _inset;
	double _scale;
	long long _columnCount;
	double _columnMargin;
	double _extraFooter;
	BOOL _centerVertically;
	CGSize _cachedSize;
	CGSize _originalCacheSize;
	CGRect _imageRect;

}

@property (assign,nonatomic) NSAttributedString * text;                         //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) NSAttributedString * placeholderText;              //@synthesize placeholderText=_placeholderText - In the implementation block
@property (assign,nonatomic) CGSize resolution;                                 //@synthesize resolution=_resolution - In the implementation block
@property (assign,nonatomic) BOOL truncate;                                     //@synthesize truncate=_truncate - In the implementation block
@property (assign,nonatomic) CGSize definedSize;                                //@synthesize definedSize=_definedSize - In the implementation block
@property (assign,nonatomic) BOOL renderAtDefinedSize;                          //@synthesize renderAtDefinedSize=_renderAtDefinedSize - In the implementation block
@property (assign,nonatomic) long long maxNumberOfLines;                        //@synthesize maxNumberOfLines=_maxNumberOfLines - In the implementation block
@property (assign,nonatomic) double lineSpacingFactor;                          //@synthesize lineSpacingFactor=_lineSpacingFactor - In the implementation block
@property (assign,nonatomic) CGSize inset;                                      //@synthesize inset=_inset - In the implementation block
@property (assign,nonatomic) double scale;                                      //@synthesize scale=_scale - In the implementation block
@property (assign,nonatomic) long long columnCount;                             //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) double columnMargin;                               //@synthesize columnMargin=_columnMargin - In the implementation block
@property (assign,nonatomic) double extraFooter;                                //@synthesize extraFooter=_extraFooter - In the implementation block
@property (assign,nonatomic) BOOL centerVertically;                             //@synthesize centerVertically=_centerVertically - In the implementation block
@property (assign,nonatomic) CGRect imageRect;                                  //@synthesize imageRect=_imageRect - In the implementation block
-(void)finalize;
-(void)setInset:(CGSize)arg1 ;
-(void)dealloc;
-(id)init;
-(double)_scale;
-(void)setScale:(double)arg1 ;
-(double)scale;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(CGSize)shadowOffset;
-(long long)numberOfLines;
-(void)cleanup;
-(void)clearCache;
-(CGRect)imageRect;
-(void)setPlaceholderText:(NSAttributedString *)arg1 ;
-(void)setMaxNumberOfLines:(long long)arg1 ;
-(void)setDefinedSize:(CGSize)arg1 ;
-(void)setTruncate:(BOOL)arg1 ;
-(CGSize)sizeOfContext;
-(CGContextRef)retainedContext;
-(void)setRenderAtDefinedSize:(BOOL)arg1 ;
-(void)setLineSpacingFactor:(double)arg1 ;
-(void)trimWhitespace;
-(void)squeezeWidthForLineCount:(long long)arg1 ;
-(CGRect)tightFrameOfLineAtIndex:(long long)arg1 ;
-(long long)countOfWords;
-(void)cacheText;
-(SCD_Struct_MR14)rangeOfGlyphsForWordsInRange:(SCD_Struct_MR14)arg1 ;
-(long long)numberOfLinesForTruncatedText;
-(SCD_Struct_MR14)rangeOfGlyphsOnLine:(long long)arg1 ;
-(CGPoint)originOfGlyphAtIndex:(long long)arg1 ;
-(CGContextRef)retainedContextOfGlyphAtIndex:(long long)arg1 ;
-(SCD_Struct_MR14)rangeOfWordsOnLine:(long long)arg1 ;
-(CGContextRef)retainedContextOfWordsInRange:(SCD_Struct_MR14)arg1 ;
-(CGPoint)originOfWordAtIndex:(long long)arg1 ;
-(void)setCenterVertically:(BOOL)arg1 ;
-(CGSize)sizeOfText;
-(long long)countOfGlyphs;
-(id)initWithText:(id)arg1 resolution:(CGSize)arg2 ;
-(void)updateLineSpacing;
-(CGSize)_sizeToRendererAt;
-(id)_truncateTextToFitInSize:(CGSize)arg1 fromCenter:(BOOL)arg2 outSize:(CGSize*)arg3 ;
-(CGContextRef)_retainedContextFromAttributedString:(id)arg1 withSize:(CGSize)arg2 ;
-(CGSize)_sizeOfString:(id)arg1 ;
-(CGRect)_tightFrameOfLineAtIndex:(long long)arg1 inString:(id)arg2 withSize:(CGSize)arg3 ;
-(void)_drawInContext:(CGContextRef)arg1 withAttributedString:(id)arg2 withSize:(CGSize)arg3 andScale:(double)arg4 ;
-(id)_invertRect:(CGRect)arg1 inRect:(CGRect)arg2 ;
-(double)_strikethroughThinkness:(long long)arg1 baselineOffset:(double)arg2 lineRect:(CGRect)arg3 ;
-(long long)_numberOfLinesInString:(id)arg1 ;
-(long long)glyphIndexForStringIndex:(long long)arg1 ;
-(SCD_Struct_MR14)rangeOfStringForGlyphIndex:(long long)arg1 ;
-(CGSize)_shadowSizeOffsetForString:(id)arg1 ;
-(long long)maxNumberOfLines;
-(CGRect)tightFrameOfAllLines;
-(CGRect)_textClipRectForString:(id)arg1 ;
-(CGRect)frameOfLineWithGlyphAtIndex:(long long)arg1 range:(NSRange*)arg2 ;
-(id)truncatedText;
-(NSAttributedString *)placeholderText;
-(BOOL)truncate;
-(CGSize)definedSize;
-(BOOL)renderAtDefinedSize;
-(double)lineSpacingFactor;
-(CGSize)inset;
-(long long)columnCount;
-(double)columnMargin;
-(void)setColumnMargin:(double)arg1 ;
-(double)extraFooter;
-(void)setExtraFooter:(double)arg1 ;
-(BOOL)centerVertically;
-(void)setImageRect:(CGRect)arg1 ;
-(void)setColumnCount:(long long)arg1 ;
-(CGSize)resolution;
-(void)setResolution:(CGSize)arg1 ;
@end

